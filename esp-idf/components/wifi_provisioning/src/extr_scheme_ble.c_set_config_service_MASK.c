
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int service_uuid; int device_name; } ;
typedef TYPE_1__ protocomm_ble_config_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,scalar_t__,int) ;
 int FUNC_2 (int ,char const*,int) ;

__attribute__((used)) static esp_err_t FUNC_3(void *VAR_4, const char *VAR_5, const char *VAR_6)
{
    if (!VAR_4) {
        FUNC_0(VAR_2, "Cannot set null configuration");
        return VAR_0;
    }

    if (!VAR_5) {
        FUNC_0(VAR_2, "Service name cannot be NULL");
        return VAR_0;
    }

    protocomm_ble_config_t *VAR_7 = (protocomm_ble_config_t *) VAR_4;
    FUNC_2(VAR_7->device_name, VAR_5, sizeof(VAR_7->device_name));


    if (VAR_3) {
        FUNC_1(VAR_7->service_uuid, VAR_3, sizeof(VAR_7->service_uuid));
    }
    return VAR_1;
}
