
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


typedef char* esp_bt_pin_code_t ;
struct TYPE_14__ {int passkey; } ;
struct TYPE_13__ {int bda; int num_val; } ;
struct TYPE_12__ {int bda; int min_16_digit; } ;
struct TYPE_11__ {int stat; int bda; int device_name; } ;
struct TYPE_10__ {int num_prop; int bda; TYPE_1__* prop; } ;
struct TYPE_15__ {TYPE_6__ key_notif; TYPE_5__ cfm_req; TYPE_4__ pin_req; TYPE_3__ auth_cmpl; TYPE_2__ disc_res; } ;
typedef TYPE_7__ esp_bt_gap_cb_param_t ;
typedef int esp_bt_gap_cb_event_t ;
struct TYPE_9__ {int val; int type; } ;


 int VAR_0 ;


 int VAR_1 ;







 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int,int,char*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_12(esp_bt_gap_cb_event_t VAR_8, esp_bt_gap_cb_param_t *VAR_9)
{
    switch(VAR_8){
    case 134:
        FUNC_1(VAR_3, "ESP_BT_GAP_DISC_RES_EVT");
        FUNC_6(VAR_3, VAR_9->disc_res.bda, VAR_0);
        for (int VAR_10 = 0; VAR_10 < VAR_9->disc_res.num_prop; VAR_10++){
            if (VAR_9->disc_res.prop[VAR_10].type == VAR_1
                && FUNC_8(VAR_9->disc_res.prop[VAR_10].val, VAR_5, &VAR_6)){
                FUNC_5(VAR_3, VAR_5, VAR_6);
                if (FUNC_10(VAR_7) == VAR_6
                    && FUNC_11(VAR_5, VAR_7, VAR_6) == 0) {
                    FUNC_9(VAR_4, VAR_9->disc_res.bda, VAR_0);
                    FUNC_7(VAR_4);
                    FUNC_2();
                }
            }
        }
        break;
    case 133:
        FUNC_1(VAR_3, "ESP_BT_GAP_DISC_STATE_CHANGED_EVT");
        break;
    case 129:
        FUNC_1(VAR_3, "ESP_BT_GAP_RMT_SRVCS_EVT");
        break;
    case 128:
        FUNC_1(VAR_3, "ESP_BT_GAP_RMT_SRVC_REC_EVT");
        break;
    case 136:{
        if (VAR_9->auth_cmpl.stat == VAR_2) {
            FUNC_1(VAR_3, "authentication success: %s", VAR_9->auth_cmpl.device_name);
            FUNC_6(VAR_3, VAR_9->auth_cmpl.bda, VAR_0);
        } else {
            FUNC_0(VAR_3, "authentication failed, status:%d", VAR_9->auth_cmpl.stat);
        }
        break;
    }
    case 130:{
        FUNC_1(VAR_3, "ESP_BT_GAP_PIN_REQ_EVT min_16_digit:%d", VAR_9->pin_req.min_16_digit);
        if (VAR_9->pin_req.min_16_digit) {
            FUNC_1(VAR_3, "Input pin code: 0000 0000 0000 0000");
            esp_bt_pin_code_t VAR_11 = {0};
            FUNC_3(VAR_9->pin_req.bda, 1, 16, VAR_11);
        } else {
            FUNC_1(VAR_3, "Input pin code: 1234");
            esp_bt_pin_code_t VAR_12;
            VAR_12[0] = '1';
            VAR_12[1] = '2';
            VAR_12[2] = '3';
            VAR_12[3] = '4';
            FUNC_3(VAR_9->pin_req.bda, 1, 4, VAR_12);
        }
        break;
    }
    default:
        break;
    }
}
