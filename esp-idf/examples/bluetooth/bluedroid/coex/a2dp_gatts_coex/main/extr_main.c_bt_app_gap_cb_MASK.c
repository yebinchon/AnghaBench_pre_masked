
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int passkey; } ;
struct TYPE_6__ {int num_val; int bda; } ;
struct TYPE_8__ {int device_name; int stat; int bda; } ;
struct TYPE_9__ {TYPE_2__ key_notif; TYPE_1__ cfm_req; TYPE_3__ auth_cmpl; } ;
typedef TYPE_4__ esp_bt_gap_cb_param_t ;
typedef int esp_bt_gap_cb_event_t ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int ) ;

void FUNC_4(esp_bt_gap_cb_event_t VAR_3, esp_bt_gap_cb_param_t *VAR_4)
{
    switch (VAR_3) {
    case 131: {
        if (VAR_4->auth_cmpl.stat == VAR_2) {
            FUNC_1(VAR_0, "authentication success: %s", VAR_4->auth_cmpl.device_name);
            FUNC_3(VAR_0, VAR_4->auth_cmpl.bda, VAR_1);
        } else {
            FUNC_0(VAR_0, "authentication failed, status:%d", VAR_4->auth_cmpl.stat);
        }
        break;
    }
    default: {
        FUNC_1(VAR_0, "event: %d", VAR_3);
        break;
    }
    }
    return;
}
