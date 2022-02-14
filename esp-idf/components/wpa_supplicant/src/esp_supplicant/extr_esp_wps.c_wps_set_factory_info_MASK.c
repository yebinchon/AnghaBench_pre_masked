
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* manufacturer; scalar_t__* model_number; scalar_t__* model_name; scalar_t__* device_name; } ;
struct TYPE_6__ {TYPE_1__ factory_info; } ;
typedef TYPE_2__ esp_wps_config_t ;
struct TYPE_7__ {int device_name; int model_name; int model_number; int manufacturer; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,scalar_t__*,scalar_t__) ;
 TYPE_4__* VAR_6 ;
 int FUNC_1 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_2 () ;

int FUNC_3(const esp_wps_config_t *VAR_7)
{
    int VAR_8;

    VAR_8 = FUNC_2();
    if (VAR_8 != 0) {
        return VAR_8;
    }

    if (VAR_7->factory_info.manufacturer[0] != 0) {
        FUNC_0(VAR_6->manufacturer, VAR_7->factory_info.manufacturer, VAR_3 - 1);
    }

    if (VAR_7->factory_info.model_number[0] != 0) {
        FUNC_0(VAR_6->model_number, VAR_7->factory_info.model_number, VAR_5 - 1);
    }

    if (VAR_7->factory_info.model_name[0] != 0) {
        FUNC_0(VAR_6->model_name, VAR_7->factory_info.model_name, VAR_4 - 1);
    }

    if (VAR_7->factory_info.device_name[0] != 0) {
        FUNC_0(VAR_6->device_name, VAR_7->factory_info.device_name, VAR_2 - 1);
    }

    FUNC_1(VAR_1, "manufacturer: %s, model number: %s, model name: %s, device name: %s", VAR_6->manufacturer,
               VAR_6->model_number, VAR_6->model_name, VAR_6->device_name);

    return VAR_0;
}
