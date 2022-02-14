
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* p_ref; } ;
typedef TYPE_1__ tBTM_BLE_MULTI_ADV_INST ;
typedef int UINT8 ;
struct TYPE_4__ {TYPE_1__* p_adv_inst; } ;


 int FUNC_0 () ;
 TYPE_2__ VAR_0 ;

void *FUNC_1(UINT8 VAR_1)
{
    tBTM_BLE_MULTI_ADV_INST *VAR_2 = ((void*)0);

    if (VAR_1 < FUNC_0()) {
        VAR_2 = &VAR_0.p_adv_inst[VAR_1 - 1];
        if (((void*)0) != VAR_2) {
            return VAR_2->p_ref;
        }
    }

    return ((void*)0);
}
