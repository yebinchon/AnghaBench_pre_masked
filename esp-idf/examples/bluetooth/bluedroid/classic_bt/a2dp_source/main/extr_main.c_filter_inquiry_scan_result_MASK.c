
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int int8_t ;
typedef int int32_t ;
struct TYPE_6__ {int type; scalar_t__ val; } ;
typedef TYPE_2__ esp_bt_gap_dev_prop_t ;
struct TYPE_5__ {int num_prop; int bda; TYPE_2__* prop; } ;
struct TYPE_7__ {TYPE_1__ disc_res; } ;
typedef TYPE_3__ esp_bt_gap_cb_param_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,scalar_t__,int *) ;
 int FUNC_6 (int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_7 (char*,char*) ;

__attribute__((used)) static void FUNC_8(esp_bt_gap_cb_param_t *VAR_7)
{
    char VAR_8[18];
    uint32_t VAR_9 = 0;
    int32_t VAR_10 = -129;
    uint8_t *VAR_11 = ((void*)0);
    esp_bt_gap_dev_prop_t *VAR_12;

    FUNC_0(VAR_1, "Scanned device: %s", FUNC_1(VAR_7->disc_res.bda, VAR_8, 18));
    for (int VAR_13 = 0; VAR_13 < VAR_7->disc_res.num_prop; VAR_13++) {
        VAR_12 = VAR_7->disc_res.prop + VAR_13;
        switch (VAR_12->type) {
        case 130:
            VAR_9 = *(uint32_t *)(VAR_12->val);
            FUNC_0(VAR_1, "--Class of Device: 0x%x", VAR_9);
            break;
        case 128:
            VAR_10 = *(int8_t *)(VAR_12->val);
            FUNC_0(VAR_1, "--RSSI: %d", VAR_10);
            break;
        case 129:
            VAR_11 = (uint8_t *)(VAR_12->val);
            break;
        case 131:
        default:
            break;
        }
    }


    if (!FUNC_4(VAR_9) ||
            !(FUNC_3(VAR_9) & VAR_3)) {
        return;
    }


    if (VAR_11) {
        FUNC_5(VAR_11, VAR_6, ((void*)0));
        if (FUNC_7((char *)VAR_6, "ESP_SPEAKER") != 0) {
            return;
        }

        FUNC_0(VAR_1, "Found a target device, address %s, name %s", VAR_8, VAR_6);
        VAR_4 = VAR_0;
        FUNC_6(VAR_5, VAR_7->disc_res.bda, VAR_2);
        FUNC_0(VAR_1, "Cancel device discovery ...");
        FUNC_2();
    }
}
