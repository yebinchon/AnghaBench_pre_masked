
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t q_pending; size_t q_next; size_t* resolve_q_action; int * resolve_q_random_pseudo; } ;
typedef TYPE_2__ tBTM_BLE_RESOLVE_Q ;
typedef size_t UINT8 ;
struct TYPE_5__ {TYPE_2__ resolving_list_pend_q; } ;
struct TYPE_8__ {TYPE_1__ ble_ctr_cb; } ;
struct TYPE_7__ {size_t (* get_ble_resolving_list_max_size ) () ;} ;
typedef int BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;
 TYPE_3__* FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 size_t FUNC_2 () ;

BOOLEAN FUNC_3(BD_ADDR VAR_4, UINT8 VAR_5)
{
    tBTM_BLE_RESOLVE_Q *VAR_6 = &VAR_3.ble_ctr_cb.resolving_list_pend_q;

    for (UINT8 VAR_7 = VAR_6->q_pending; VAR_7 != VAR_6->q_next;) {
        if (FUNC_1(VAR_6->resolve_q_random_pseudo[VAR_7], VAR_4, VAR_0) == 0 &&
                VAR_5 == VAR_6->resolve_q_action[VAR_7]) {
            return VAR_2;
        }

        VAR_7 ++;
        VAR_7 %= FUNC_0()->get_ble_resolving_list_max_size();
    }
    return VAR_1;
}
