
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint16_t ;
typedef int protocomm_ble_name_uuid_t ;
typedef int protocomm_ble_config_t ;
struct TYPE_7__ {TYPE_3__* ble; } ;
typedef TYPE_2__ esp_local_ctrl_transport_config_t ;
typedef int esp_err_t ;
struct TYPE_8__ {int nu_lookup_count; TYPE_1__* nu_lookup; int service_uuid; int device_name; } ;
struct TYPE_6__ {int name; int uuid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static esp_err_t FUNC_5(esp_local_ctrl_transport_config_t *VAR_4, const esp_local_ctrl_transport_config_t *VAR_5)
{
    if (!VAR_4 || !VAR_5 || !VAR_5->ble) {
        FUNC_0(VAR_3, "NULL arguments provided");
        return VAR_0;
    }

    VAR_4->ble = FUNC_1(1, sizeof(protocomm_ble_config_t));
    if (!VAR_4->ble) {
        FUNC_0(VAR_3, "Failed to allocate memory for BLE transport config");
        return VAR_1;
    }


    FUNC_3(VAR_4->ble->device_name,
           VAR_5->ble->device_name,
           sizeof(VAR_5->ble->device_name));


    FUNC_3(VAR_4->ble->service_uuid,
           VAR_5->ble->service_uuid,
           sizeof(VAR_5->ble->service_uuid));

    VAR_4->ble->nu_lookup_count = 0;
    if (VAR_5->ble->nu_lookup_count) {

        VAR_4->ble->nu_lookup = FUNC_1(VAR_5->ble->nu_lookup_count,
                                             sizeof(protocomm_ble_name_uuid_t));
        if (!VAR_4->ble->nu_lookup) {
            FUNC_0(VAR_3, "Failed to allocate memory for BLE characteristic names");
            FUNC_2(VAR_4->ble);
            return VAR_1;
        }
        for (uint16_t VAR_6 = 0; VAR_6 < VAR_5->ble->nu_lookup_count; VAR_6++) {
            VAR_4->ble->nu_lookup[VAR_6].uuid = VAR_5->ble->nu_lookup[VAR_6].uuid;
            if (!VAR_5->ble->nu_lookup[VAR_6].name) {
                FUNC_0(VAR_3, "Endpoint name cannot be null");
                return VAR_0;
            }
            VAR_4->ble->nu_lookup[VAR_6].name = FUNC_4(VAR_5->ble->nu_lookup[VAR_6].name);
            if (!VAR_4->ble->nu_lookup[VAR_6].name) {
                FUNC_0(VAR_3, "Failed to allocate memory for endpoint name");
                return VAR_1;
            }
            VAR_4->ble->nu_lookup_count++;
        }
    }
    return VAR_2;
}
