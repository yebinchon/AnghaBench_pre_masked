
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * resolve_q_action; int * resolve_q_random_pseudo; } ;
typedef TYPE_2__ tBTM_BLE_RESOLVE_Q ;
struct TYPE_5__ {int * irk_list_mask; TYPE_2__ resolving_list_pend_q; } ;
struct TYPE_8__ {TYPE_1__ ble_ctr_cb; } ;
struct TYPE_7__ {int (* set_ble_resolving_list_max_size ) (int ) ;} ;


 TYPE_4__ VAR_0 ;
 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

void FUNC_3(void)
{
    tBTM_BLE_RESOLVE_Q *VAR_1 = &VAR_0.ble_ctr_cb.resolving_list_pend_q;

    if (VAR_1->resolve_q_random_pseudo) {
        FUNC_1(VAR_1->resolve_q_random_pseudo);
        VAR_1->resolve_q_random_pseudo = ((void*)0);
    }

    if (VAR_1->resolve_q_action) {
        FUNC_1(VAR_1->resolve_q_action);
        VAR_1->resolve_q_action = ((void*)0);
    }

    FUNC_0()->set_ble_resolving_list_max_size(0);
    if (VAR_0.ble_ctr_cb.irk_list_mask) {
        FUNC_1(VAR_0.ble_ctr_cb.irk_list_mask);
        VAR_0.ble_ctr_cb.irk_list_mask = ((void*)0);
    }

}
