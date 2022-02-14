
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char* esp_bt_pin_code_t ;
struct TYPE_10__ {int passkey; } ;
struct TYPE_9__ {int num_val; int bda; } ;
struct TYPE_8__ {int min_16_digit; int bda; } ;
struct TYPE_7__ {int device_name; int stat; int bda; } ;
struct TYPE_11__ {TYPE_4__ key_notif; TYPE_3__ cfm_req; TYPE_2__ pin_req; TYPE_1__ auth_cmpl; } ;
typedef TYPE_5__ esp_bt_gap_cb_param_t ;
typedef int esp_bt_gap_cb_event_t ;


 int VAR_0 ;





 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_2 ;
 int FUNC_2 (int ,int,int,char*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ,int ) ;

void FUNC_5(esp_bt_gap_cb_event_t VAR_3, esp_bt_gap_cb_param_t *VAR_4)
{
    switch (VAR_3) {
    case 132:{
        if (VAR_4->auth_cmpl.stat == VAR_1) {
            FUNC_1(VAR_2, "authentication success: %s", VAR_4->auth_cmpl.device_name);
            FUNC_4(VAR_2, VAR_4->auth_cmpl.bda, VAR_0);
        } else {
            FUNC_0(VAR_2, "authentication failed, status:%d", VAR_4->auth_cmpl.stat);
        }
        break;
    }
    case 128:{
        FUNC_1(VAR_2, "ESP_BT_GAP_PIN_REQ_EVT min_16_digit:%d", VAR_4->pin_req.min_16_digit);
        if (VAR_4->pin_req.min_16_digit) {
            FUNC_1(VAR_2, "Input pin code: 0000 0000 0000 0000");
            esp_bt_pin_code_t VAR_5 = {0};
            FUNC_2(VAR_4->pin_req.bda, 1, 16, VAR_5);
        } else {
            FUNC_1(VAR_2, "Input pin code: 1234");
            esp_bt_pin_code_t VAR_6;
            VAR_6[0] = '1';
            VAR_6[1] = '2';
            VAR_6[2] = '3';
            VAR_6[3] = '4';
            FUNC_2(VAR_4->pin_req.bda, 1, 4, VAR_6);
        }
        break;
    }
    default: {
        FUNC_1(VAR_2, "event: %d", VAR_3);
        break;
    }
    }
    return;
}
