
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int tk ;
typedef int esp_gap_ble_cb_event_t ;
typedef int esp_err_t ;
struct TYPE_14__ {int status; } ;
struct TYPE_12__ {char* fail_reason; int success; int bd_addr; } ;
struct TYPE_11__ {char* passkey; } ;
struct TYPE_10__ {int bd_addr; } ;
struct TYPE_13__ {TYPE_4__ auth_cmpl; TYPE_3__ key_notif; TYPE_2__ ble_req; } ;
struct TYPE_9__ {int status; } ;
struct TYPE_15__ {TYPE_6__ local_privacy_cmpl; TYPE_5__ ble_security; TYPE_1__ adv_start_cmpl; } ;
typedef TYPE_7__ esp_ble_gap_cb_param_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int*,int) ;
 int FUNC_8 (char*,int ,int ) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_9(esp_gap_ble_cb_event_t VAR_9, esp_ble_gap_cb_param_t *VAR_10)
{
    FUNC_2(VAR_1, "GAP_EVT, event %d\n", VAR_9);

    switch (VAR_9) {
    case 130:
        VAR_6 &= (~VAR_4);
        if (VAR_6 == 0) {
            FUNC_6(&VAR_7);
        }
        break;
    case 137:
        VAR_6 &= (~VAR_0);
        if (VAR_6 == 0) {
            FUNC_6(&VAR_7);
        }
        break;
    case 136:

        if (VAR_10->adv_start_cmpl.status != VAR_3) {
            FUNC_0(VAR_1, "advertising start failed, error status = %x", VAR_10->adv_start_cmpl.status);
            break;
        }
        FUNC_1(VAR_1, "advertising start success");
        break;
    case 131:
        FUNC_1(VAR_1, "ESP_GAP_BLE_PASSKEY_REQ_EVT");


        break;
    case 133: {
        FUNC_1(VAR_1, "ESP_GAP_BLE_OOB_REQ_EVT");
        uint8_t VAR_11[16] = {1};
        FUNC_7(VAR_10->ble_security.ble_req.bd_addr, VAR_11, sizeof(VAR_11));
        break;
    }
    case 134:


        FUNC_3(VAR_10->ble_security.ble_req.bd_addr, 1);
        FUNC_1(VAR_1, "ESP_GAP_BLE_NC_REQ_EVT, the passkey Notify number:%d", VAR_10->ble_security.key_notif.passkey);
        break;
    case 129:


        FUNC_5(VAR_10->ble_security.ble_req.bd_addr, 1);
        break;
    case 132:

        FUNC_1(VAR_1, "The passkey Notify number:%06d", VAR_10->ble_security.key_notif.passkey);
        break;
    case 135: {
        FUNC_8("addr", VAR_10->ble_security.auth_cmpl.bd_addr, VAR_2);
        FUNC_1(VAR_1, "pair status = %s",VAR_10->ble_security.auth_cmpl.success ? "success" : "fail");
        if (!VAR_10->ble_security.auth_cmpl.success) {
            FUNC_1(VAR_1, "fail reason = 0x%x",VAR_10->ble_security.auth_cmpl.fail_reason);
        }
        break;
    }
    case 128:
        if (VAR_10->local_privacy_cmpl.status != VAR_3) {
            FUNC_0(VAR_1, "config local privacy failed, error status = %x", VAR_10->local_privacy_cmpl.status);
            break;
        }

        esp_err_t VAR_12 = FUNC_4(&VAR_5);
        if (VAR_12) {
            FUNC_0(VAR_1, "config adv data failed, error code = %x", VAR_12);
        } else {
            VAR_6 |= VAR_0;
        }

        VAR_12 = FUNC_4(&VAR_8);
        if (VAR_12) {
            FUNC_0(VAR_1, "config adv data failed, error code = %x", VAR_12);
        } else {
            VAR_6 |= VAR_4;
        }

        break;
    default:
        break;
    }
}
