
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ adv_mode; } ;
struct TYPE_5__ {int suspended_rl_state; int scan_activity; TYPE_1__ inq_var; } ;
typedef TYPE_2__ tBTM_BLE_CB ;
struct TYPE_6__ {TYPE_2__ ble_ctr_cb; } ;
typedef int BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 TYPE_3__ VAR_8 ;

BOOLEAN FUNC_6(void)
{
    tBTM_BLE_CB *VAR_9 = &VAR_8.ble_ctr_cb;




    if (VAR_9->suspended_rl_state != VAR_3) {
        return VAR_7;
    }


    if (FUNC_2() == VAR_0) {
        FUNC_1("resolving list can not be edited, EnQ now");
        return VAR_6;
    }

    VAR_9->suspended_rl_state = VAR_3;

    if (VAR_9->inq_var.adv_mode == VAR_1) {
        FUNC_3();
        VAR_9->suspended_rl_state |= VAR_2;
    }

    if (FUNC_0(VAR_9->scan_activity)) {
        FUNC_4();
        VAR_9->suspended_rl_state |= VAR_5;
    }

    if (FUNC_5()) {
        VAR_9->suspended_rl_state |= VAR_4;
    }

    return VAR_7;
}
