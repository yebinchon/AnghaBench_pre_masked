
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_device_data {int * serial_number; int * device_name; int * model_number; int * model_name; int * manufacturer; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * VAR_1 ;

int FUNC_1(struct wps_device_data *VAR_2)
{
    int VAR_3 = 0;

    if (!VAR_2) {
        return VAR_0;
    }

    if (VAR_2->manufacturer) {
        FUNC_0(VAR_2->manufacturer);
    }
    if (VAR_2->model_name) {
        FUNC_0(VAR_2->model_name);
    }
    if (VAR_2->model_number) {
        FUNC_0(VAR_2->model_number);
    }
    if (VAR_2->device_name) {
        FUNC_0(VAR_2->device_name);
    }
    if (VAR_2->serial_number) {
        FUNC_0(VAR_2->serial_number);
    }

    if (VAR_1) {
        FUNC_0(VAR_1);
        VAR_1 = ((void*)0);
    }

    return VAR_3;
}
