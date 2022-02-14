
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ state; } ;
typedef TYPE_2__ tBTM_BLE_INQ_CB ;
struct TYPE_4__ {TYPE_2__ inq_var; } ;
struct TYPE_6__ {TYPE_1__ ble_ctr_cb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_3__ VAR_2 ;

void FUNC_3(void)
{
    tBTM_BLE_INQ_CB *VAR_3 = &VAR_2.ble_ctr_cb.inq_var;

    if (VAR_3->state == VAR_0) {
        FUNC_2();
        FUNC_0();
    } else if (VAR_3->state == VAR_1) {
        FUNC_1();
    }

    return;
}
