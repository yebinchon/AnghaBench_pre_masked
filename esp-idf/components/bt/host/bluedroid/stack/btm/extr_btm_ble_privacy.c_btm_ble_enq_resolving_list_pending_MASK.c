
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t q_next; int * resolve_q_action; int * resolve_q_random_pseudo; } ;
typedef TYPE_2__ tBTM_BLE_RESOLVE_Q ;
typedef int UINT8 ;
struct TYPE_5__ {TYPE_2__ resolving_list_pend_q; } ;
struct TYPE_8__ {TYPE_1__ ble_ctr_cb; } ;
struct TYPE_7__ {size_t (* get_ble_resolving_list_max_size ) () ;} ;
typedef int BD_ADDR ;


 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (int ,int ,int ) ;
 size_t FUNC_2 () ;

void FUNC_3(BD_ADDR VAR_2, UINT8 VAR_3)
{
    tBTM_BLE_RESOLVE_Q *VAR_4 = &VAR_1.ble_ctr_cb.resolving_list_pend_q;

    FUNC_1(VAR_4->resolve_q_random_pseudo[VAR_4->q_next], VAR_2, VAR_0);
    VAR_4->resolve_q_action[VAR_4->q_next] = VAR_3;
    VAR_4->q_next ++;
    VAR_4->q_next %= FUNC_0()->get_ble_resolving_list_max_size();
}
