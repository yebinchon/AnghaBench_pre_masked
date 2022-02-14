
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {char* member_0; int member_1; } ;
typedef TYPE_1__ protocomm_ble_name_uuid_t ;
struct TYPE_6__ {int nu_lookup_count; int device_name; TYPE_1__* nu_lookup; int service_uuid; } ;
typedef TYPE_2__ protocomm_ble_config_t ;
typedef int nu_lookup_table ;
typedef scalar_t__ esp_err_t ;
struct TYPE_7__ {int security; int * pc; int * pop; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int*) ;
 TYPE_4__* VAR_6 ;
 scalar_t__ FUNC_4 (int *,char*,int ,void*) ;
 scalar_t__ FUNC_5 (int *,TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 () ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int *,char*,int *,int *) ;
 int FUNC_9 (int *,char*,char*) ;
 int FUNC_10 (int ,int,char*,char*,int,int,int) ;
 char* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static esp_err_t FUNC_11(void)
{

    VAR_6->pc = FUNC_7();
    if (VAR_6->pc == ((void*)0)) {
        FUNC_0(VAR_4, "Failed to create new protocomm instance");
        return VAR_2;
    }


    protocomm_ble_name_uuid_t VAR_12[] = {
        {"prov-session", 0x0001},
        {"prov-config", 0x0002},
        {"proto-ver", 0x0003},
    };


    protocomm_ble_config_t VAR_13 = {
        .service_uuid = {


            0xb4, 0xdf, 0x5a, 0x1c, 0x3f, 0x6b, 0xf4, 0xbf,
            0xea, 0x4a, 0x82, 0x03, 0x04, 0x90, 0x1a, 0x02,
        },
        .nu_lookup_count = sizeof(VAR_12)/sizeof(VAR_12[0]),
        .nu_lookup = VAR_12
    };
    uint8_t VAR_14[6];
    FUNC_3(VAR_5, VAR_14);
    FUNC_10(VAR_13.device_name, sizeof(VAR_13.device_name), "%s%02X%02X%02X",
             VAR_9, VAR_14[3], VAR_14[4], VAR_14[5]);


    esp_err_t VAR_15 = FUNC_2(VAR_0);
    if (VAR_15) {
        FUNC_0(VAR_4, "bt_controller_mem_release failed %d", VAR_15);
        if (VAR_15 != VAR_1) {
            return VAR_15;
        }
    }


    if (FUNC_5(VAR_6->pc, &VAR_13) != VAR_3) {
        FUNC_0(VAR_4, "Failed to start BLE provisioning");
        return VAR_2;
    }


    FUNC_9(VAR_6->pc, "proto-ver", "V0.1");


    if (VAR_6->security == 0) {
        FUNC_8(VAR_6->pc, "prov-session", &VAR_7, ((void*)0));
    } else if (VAR_6->security == 1) {
        FUNC_8(VAR_6->pc, "prov-session", &VAR_8, VAR_6->pop);
    }


    if (FUNC_4(VAR_6->pc, "prov-config",
                               VAR_10,
                               (void *) &VAR_11) != VAR_3) {
        FUNC_0(VAR_4, "Failed to set provisioning endpoint");
        FUNC_6(VAR_6->pc);
        return VAR_2;
    }

    FUNC_1(VAR_4, "Provisioning started with BLE devname : '%s'", VAR_13.device_name);
    return VAR_3;
}
