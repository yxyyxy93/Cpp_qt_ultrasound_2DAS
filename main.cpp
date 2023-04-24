#include "ultrasound_cscan_process_2das.h"
#include "..\..\Firststage_read\Ultrasonic_dataset_reader\utils.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // create the instance of the class
    int fs = 250e6;
    double fx = 2e-3;
    double fy = 2e-3;
    QString default_fn = "default filename";
    ultrasound_cscan_process_2DAS process(nullptr,
                                          default_fn,
                                          fs,
                                          fx,
                                          fy);
    process.show();
    return a.exec();
}
