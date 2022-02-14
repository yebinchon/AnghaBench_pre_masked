
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int tk ;
typedef int esp_gap_ble_cb_event_t ;
typedef int esp_err_t ;
struct TYPE_18__ {int status; } ;
struct TYPE_17__ {scalar_t__ bd_addr; int status; } ;
struct TYPE_15__ {int auth_mode; int fail_reason; int success; int addr_type; int bd_addr; } ;
struct TYPE_14__ {int key_type; } ;
struct TYPE_13__ {int passkey; } ;
struct TYPE_12__ {int bd_addr; } ;
struct TYPE_16__ {TYPE_5__ auth_cmpl; TYPE_4__ ble_key; TYPE_3__ key_notif; TYPE_2__ ble_req; } ;
struct TYPE_11__ {int status; } ;
struct TYPE_19__ {TYPE_8__ local_privacy_cmpl; TYPE_7__ remove_bond_dev_cmpl; TYPE_6__ ble_security; TYPE_1__ adv_start_cmpl; } ;
typedef TYPE_9__ esp_ble_gap_cb_param_t ;
typedef int* esp_bd_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int*,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,void*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_12 (int*,int ,int) ;
 int FUNC_13 () ;

__attribute__((used)) static void FUNC_14(esp_gap_ble_cb_event_t VAR_8, esp_ble_gap_cb_param_t *VAR_9)
{
    FUNC_3(VAR_2, "GAP_EVT, event %d\n", VAR_8);

    switch (VAR_8) {
    case 130:
        VAR_4 &= (~VAR_3);
        if (VAR_4 == 0){
            FUNC_8(&VAR_6);
        }
        break;
    case 141:
        VAR_4 &= (~VAR_0);
        if (VAR_4 == 0){
            FUNC_8(&VAR_6);
        }
        break;
    case 140:

        if (VAR_9->adv_start_cmpl.status != VAR_1) {
            FUNC_1(VAR_2, "advertising start failed, error status = %x", VAR_9->adv_start_cmpl.status);
            break;
        }
        FUNC_2(VAR_2, "advertising start success");
        break;
    case 132:
        FUNC_2(VAR_2, "ESP_GAP_BLE_PASSKEY_REQ_EVT");


        break;
    case 134: {
        FUNC_2(VAR_2, "ESP_GAP_BLE_OOB_REQ_EVT");
        uint8_t VAR_10[16] = {1};
        FUNC_9(VAR_9->ble_security.ble_req.bd_addr, VAR_10, sizeof(VAR_10));
        break;
    }
    case 136:
        FUNC_2(VAR_2, "ESP_GAP_BLE_LOCAL_IR_EVT");
        break;
    case 137:
        FUNC_2(VAR_2, "ESP_GAP_BLE_LOCAL_ER_EVT");
        break;
    case 135:


        FUNC_5(VAR_9->ble_security.ble_req.bd_addr, 1);
        FUNC_2(VAR_2, "ESP_GAP_BLE_NC_REQ_EVT, the passkey Notify number:%d", VAR_9->ble_security.key_notif.passkey);
        break;
    case 129:


        FUNC_7(VAR_9->ble_security.ble_req.bd_addr, 1);
        break;
    case 133:

        FUNC_2(VAR_2, "The passkey Notify number:%06d", VAR_9->ble_security.key_notif.passkey);
        break;
    case 138:

        FUNC_2(VAR_2, "key type = %s", FUNC_10(VAR_9->ble_security.ble_key.key_type));
        break;
    case 139: {
        esp_bd_addr_t VAR_11;
        FUNC_12(VAR_11, VAR_9->ble_security.auth_cmpl.bd_addr, sizeof(esp_bd_addr_t));
        FUNC_2(VAR_2, "remote BD_ADDR: %08x%04x", (VAR_11[0] << 24) + (VAR_11[1] << 16) + (VAR_11[2] << 8) + VAR_11[3],

                (VAR_11[4] << 8) + VAR_11[5]);
        FUNC_2(VAR_2, "address type = %d", VAR_9->ble_security.auth_cmpl.addr_type);
        FUNC_2(VAR_2, "pair status = %s",VAR_9->ble_security.auth_cmpl.success ? "success" : "fail");
        if(!VAR_9->ble_security.auth_cmpl.success) {
            FUNC_2(VAR_2, "fail reason = 0x%x",VAR_9->ble_security.auth_cmpl.fail_reason);
        } else {
            FUNC_2(VAR_2, "auth mode = %s",FUNC_4(VAR_9->ble_security.auth_cmpl.auth_mode));
        }
        FUNC_13();
        break;
    }
    case 131: {
        FUNC_0(VAR_2, "ESP_GAP_BLE_REMOVE_BOND_DEV_COMPLETE_EVT status = %d", VAR_9->remove_bond_dev_cmpl.status);
        FUNC_2(VAR_2, "ESP_GAP_BLE_REMOVE_BOND_DEV");
        FUNC_2(VAR_2, "-----ESP_GAP_BLE_REMOVE_BOND_DEV----");
        FUNC_11(VAR_2, (void *)VAR_9->remove_bond_dev_cmpl.bd_addr, sizeof(esp_bd_addr_t));
        FUNC_2(VAR_2, "------------------------------------");
        break;
    }
    case 128:
        if (VAR_9->local_privacy_cmpl.status != VAR_1){
            FUNC_1(VAR_2, "config local privacy failed, error status = %x", VAR_9->local_privacy_cmpl.status);
            break;
        }

        esp_err_t VAR_12 = FUNC_6(&VAR_5);
        if (VAR_12){
            FUNC_1(VAR_2, "config adv data failed, error code = %x", VAR_12);
        }else{
            VAR_4 |= VAR_0;
        }

        VAR_12 = FUNC_6(&VAR_7);
        if (VAR_12){
            FUNC_1(VAR_2, "config adv data failed, error code = %x", VAR_12);
        }else{
            VAR_4 |= VAR_3;
        }

        break;
    default:
        break;
    }
}
