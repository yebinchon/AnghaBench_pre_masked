
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_device_data {int * serial_number; int * model_number; int * model_name; int * manufacturer; int * device_name; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct wps_device_data *VAR_0)
{
 FUNC_0(VAR_0->device_name);
 VAR_0->device_name = ((void*)0);
 FUNC_0(VAR_0->manufacturer);
 VAR_0->manufacturer = ((void*)0);
 FUNC_0(VAR_0->model_name);
 VAR_0->model_name = ((void*)0);
 FUNC_0(VAR_0->model_number);
 VAR_0->model_number = ((void*)0);
 FUNC_0(VAR_0->serial_number);
 VAR_0->serial_number = ((void*)0);
}
