
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int esp_gap_ble_cb_event_t ;
struct TYPE_21__ {scalar_t__ bd_addr; int status; } ;
struct TYPE_19__ {int fail_reason; int success; int addr_type; int bd_addr; } ;
struct TYPE_18__ {int key_type; } ;
struct TYPE_17__ {int passkey; } ;
struct TYPE_16__ {int bd_addr; } ;
struct TYPE_20__ {TYPE_7__ auth_cmpl; TYPE_6__ ble_key; TYPE_5__ key_notif; TYPE_4__ ble_req; } ;
struct TYPE_15__ {int timeout; int latency; int conn_int; int max_int; int min_int; int status; } ;
struct TYPE_14__ {int status; } ;
struct TYPE_13__ {int status; } ;
struct TYPE_12__ {TYPE_9__ remove_bond_dev_cmpl; TYPE_8__ ble_security; TYPE_3__ update_conn_params; TYPE_2__ adv_stop_cmpl; TYPE_1__ adv_start_cmpl; } ;
typedef TYPE_10__ esp_ble_gap_cb_param_t ;
typedef int* esp_bd_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,void*,int) ;
 int FUNC_7 (int*,int ,int) ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(esp_gap_ble_cb_event_t VAR_6, esp_ble_gap_cb_param_t *VAR_7)
{
    switch (VAR_6) {
        case 140:
            VAR_4 &= (~VAR_0);
            if (VAR_4 == 0){
                FUNC_4(&VAR_5);
            }
            break;
        case 130:
            VAR_4 &= (~VAR_3);
            if (VAR_4 == 0){
                FUNC_4(&VAR_5);
            }
            break;

        case 139:

            if (VAR_7->adv_start_cmpl.status != VAR_1) {
                FUNC_0(VAR_2, "advertising start failed");
            }else{
                FUNC_1(VAR_2, "(0) ***** advertising start successfully ***** \n");
            }
            break;
        case 138:
            if (VAR_7->adv_stop_cmpl.status != VAR_1) {
                FUNC_0(VAR_2, "Advertising stop failed");
            }
            else {
                FUNC_1(VAR_2, "Stop adv successfully\n");
            }
            break;
        case 128:
            FUNC_2(VAR_2, "update connection params status = %d, min_int = %d, max_int = %d,conn_int = %d,latency = %d, timeout = %d",
                  VAR_7->update_conn_params.status,
                  VAR_7->update_conn_params.min_int,
                  VAR_7->update_conn_params.max_int,
                  VAR_7->update_conn_params.conn_int,
                  VAR_7->update_conn_params.latency,
                  VAR_7->update_conn_params.timeout);
            break;
        case 133:
            FUNC_2(VAR_2, "ESP_GAP_BLE_PASSKEY_REQ_EVT");

            break;

        case 135:


            FUNC_1(VAR_2, "ESP_GAP_BLE_NC_REQ_EVT, the passkey Notify number:%d", VAR_7->ble_security.key_notif.passkey);
            break;
        case 129:


            FUNC_3(VAR_7->ble_security.ble_req.bd_addr, 1);
            break;
        case 134:

            FUNC_1(VAR_2, "The passkey notify number:%d", VAR_7->ble_security.key_notif.passkey);
            break;
        case 136:

            FUNC_2(VAR_2, "key type = %s", FUNC_5(VAR_7->ble_security.ble_key.key_type));
            break;
        case 137: {
            esp_bd_addr_t VAR_8;
            FUNC_7(VAR_8, VAR_7->ble_security.auth_cmpl.bd_addr, sizeof(esp_bd_addr_t));
            FUNC_2(VAR_2, "remote BD_ADDR: %08x%04x", (VAR_8[0] << 24) + (VAR_8[1] << 16) + (VAR_8[2] << 8) + VAR_8[3],

                    (VAR_8[4] << 8) + VAR_8[5]);
            FUNC_2(VAR_2, "address type = %d", VAR_7->ble_security.auth_cmpl.addr_type);
            if (VAR_7->ble_security.auth_cmpl.success){
                FUNC_1(VAR_2, "(1) ***** pair status = success ***** \n");
            }
            else {
                FUNC_1(VAR_2, "***** pair status = fail, reason = 0x%x *****\n", VAR_7->ble_security.auth_cmpl.fail_reason);
            }
            FUNC_8();
            break;
        }
        case 132: {
            FUNC_2(VAR_2, "ESP_GAP_BLE_REMOVE_BOND_DEV_COMPLETE_EVT status = %d", VAR_7->remove_bond_dev_cmpl.status);



            FUNC_2(VAR_2, "------------------------------------");
            break;
        }
        default:
            break;
    }
}
