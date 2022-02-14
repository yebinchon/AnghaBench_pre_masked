
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int raddr_timer_ent; int in_use; } ;
typedef TYPE_1__ tBTM_BLE_MULTI_ADV_INST ;
typedef int UINT8 ;
struct TYPE_5__ {TYPE_1__* p_adv_inst; } ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_2__ VAR_1 ;
 int FUNC_2 (int *) ;

void FUNC_3(BOOLEAN VAR_2)
{
    UINT8 VAR_3;
    tBTM_BLE_MULTI_ADV_INST *VAR_4 = &VAR_1.p_adv_inst[0];

    for (VAR_3 = 0; VAR_3 < FUNC_0() - 1; VAR_3 ++, VAR_4++) {
        VAR_4->in_use = VAR_0;
        if (VAR_2) {
            FUNC_1 (VAR_4);
        } else {
            FUNC_2(&VAR_4->raddr_timer_ent);
        }
    }
}
