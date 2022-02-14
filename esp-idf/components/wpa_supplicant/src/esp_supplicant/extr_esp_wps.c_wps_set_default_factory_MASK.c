
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wps_factory_information_t ;
struct TYPE_3__ {int device_name; int model_number; int model_name; int manufacturer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;

int FUNC_3(void)
{
    if (!VAR_3) {
        VAR_3 = FUNC_0(sizeof(wps_factory_information_t));
        if (!VAR_3) {
            FUNC_2(VAR_2, "wps factory info malloc failed");
            return VAR_0;
        }
    }

    FUNC_1(VAR_3->manufacturer, "ESPRESSIF");
    FUNC_1(VAR_3->model_name, "ESPRESSIF IOT");
    FUNC_1(VAR_3->model_number, "ESP32");
    FUNC_1(VAR_3->device_name, "ESP32 STATION");

    return VAR_1;
}
