
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_device_data {int rf_bands; int os_version; int pri_dev_type; void* serial_number; void* model_number; void* model_name; void* manufacturer; void* device_name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 void* FUNC_1 (void*) ;

void FUNC_2(struct wps_device_data *VAR_1,
    const struct wps_device_data *VAR_2)
{
 if (VAR_2->device_name)
  VAR_1->device_name = FUNC_1(VAR_2->device_name);
 if (VAR_2->manufacturer)
  VAR_1->manufacturer = FUNC_1(VAR_2->manufacturer);
 if (VAR_2->model_name)
  VAR_1->model_name = FUNC_1(VAR_2->model_name);
 if (VAR_2->model_number)
  VAR_1->model_number = FUNC_1(VAR_2->model_number);
 if (VAR_2->serial_number)
  VAR_1->serial_number = FUNC_1(VAR_2->serial_number);
 FUNC_0(VAR_1->pri_dev_type, VAR_2->pri_dev_type, VAR_0);
 VAR_1->os_version = VAR_2->os_version;
 VAR_1->rf_bands = VAR_2->rf_bands;
}
