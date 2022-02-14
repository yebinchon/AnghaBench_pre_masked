
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef char* esp_bt_pin_code_t ;
struct TYPE_13__ {int passkey; } ;
struct TYPE_12__ {int num_val; int bda; } ;
struct TYPE_11__ {int min_16_digit; int bda; } ;
struct TYPE_10__ {int device_name; int stat; int bda; } ;
struct TYPE_9__ {int state; } ;
struct TYPE_14__ {TYPE_5__ key_notif; TYPE_4__ cfm_req; TYPE_3__ pin_req; TYPE_2__ auth_cmpl; TYPE_1__ disc_st_chg; } ;
typedef TYPE_6__ esp_bt_gap_cb_param_t ;
typedef int esp_bt_gap_cb_event_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;







 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int,char*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (TYPE_6__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

void FUNC_8(esp_bt_gap_cb_event_t VAR_11, esp_bt_gap_cb_param_t *VAR_12)
{
    switch (VAR_11) {
    case 134: {
        FUNC_7(VAR_12);
        break;
    }
    case 133: {
        if (VAR_12->disc_st_chg.state == VAR_5) {
            if (VAR_8 == VAR_1) {
                VAR_8 = VAR_0;
                FUNC_1(VAR_2, "Device discovery stopped.");
                FUNC_1(VAR_2, "a2dp connecting to peer: %s", VAR_10);
                FUNC_2(VAR_9);
            } else {

                FUNC_1(VAR_2, "Device discovery failed, continue to discover...");
                FUNC_5(VAR_6, 10, 0);
            }
        } else if (VAR_12->disc_st_chg.state == VAR_4) {
            FUNC_1(VAR_2, "Discovery started.");
        }
        break;
    }
    case 129:
    case 128:
        break;
    case 136: {
        if (VAR_12->auth_cmpl.stat == VAR_7) {
            FUNC_1(VAR_2, "authentication success: %s", VAR_12->auth_cmpl.device_name);
            FUNC_6(VAR_2, VAR_12->auth_cmpl.bda, VAR_3);
        } else {
            FUNC_0(VAR_2, "authentication failed, status:%d", VAR_12->auth_cmpl.stat);
        }
        break;
    }
    case 130: {
        FUNC_1(VAR_2, "ESP_BT_GAP_PIN_REQ_EVT min_16_digit:%d", VAR_12->pin_req.min_16_digit);
        if (VAR_12->pin_req.min_16_digit) {
            FUNC_1(VAR_2, "Input pin code: 0000 0000 0000 0000");
            esp_bt_pin_code_t VAR_13 = {0};
            FUNC_3(VAR_12->pin_req.bda, 1, 16, VAR_13);
        } else {
            FUNC_1(VAR_2, "Input pin code: 1234");
            esp_bt_pin_code_t VAR_14;
            VAR_14[0] = '1';
            VAR_14[1] = '2';
            VAR_14[2] = '3';
            VAR_14[3] = '4';
            FUNC_3(VAR_12->pin_req.bda, 1, 4, VAR_14);
        }
        break;
    }
    default: {
        FUNC_1(VAR_2, "event: %d", VAR_11);
        break;
    }
    }
    return;
}
