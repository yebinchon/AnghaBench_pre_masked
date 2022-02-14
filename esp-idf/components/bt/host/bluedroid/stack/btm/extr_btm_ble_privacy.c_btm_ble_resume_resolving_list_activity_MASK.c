
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int suspended_rl_state; } ;
typedef TYPE_1__ tBTM_BLE_CB ;
struct TYPE_4__ {TYPE_1__ ble_ctr_cb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_2__ VAR_4 ;

void FUNC_3(void)
{
    tBTM_BLE_CB *VAR_5 = &VAR_4.ble_ctr_cb;

    if (VAR_5->suspended_rl_state & VAR_0) {
        FUNC_1();
    }

    if (VAR_5->suspended_rl_state & VAR_3) {
        FUNC_2();
    }

    if (VAR_5->suspended_rl_state & VAR_2) {
        FUNC_0();
    }

    VAR_5->suspended_rl_state = VAR_1;
}
