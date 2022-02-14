
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ in_use; scalar_t__ adv_evt; int p_ref; int inst_id; int (* p_cback ) (int ,int ,int ,int ) ;} ;
typedef TYPE_1__ tBTM_BLE_MULTI_ADV_INST ;
typedef int UINT8 ;
struct TYPE_4__ {TYPE_1__* p_adv_inst; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,int ,int ) ;
 TYPE_2__ VAR_4 ;
 int FUNC_1 (int ,int ,int ,int ) ;

void FUNC_2(UINT8 VAR_5)
{
    tBTM_BLE_MULTI_ADV_INST *VAR_6 = &VAR_4.p_adv_inst[VAR_5 - 1];

    if (VAR_3 == VAR_6->in_use) {
        if (VAR_6->adv_evt != VAR_0) {
            FUNC_0 (VAR_3, VAR_6->inst_id, 0);
        } else

        {
            (VAR_6->p_cback)(VAR_1, VAR_6->inst_id, VAR_6->p_ref, 0);
            VAR_6->in_use = VAR_2;
        }
    }
}
