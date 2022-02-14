
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* p_inst_id; size_t next_idx; int* p_sub_code; } ;
typedef TYPE_1__ tBTM_BLE_MULTI_ADV_OPQ ;
typedef int UINT8 ;
struct TYPE_4__ {TYPE_1__ op_q; } ;


 int FUNC_0 () ;
 TYPE_2__ VAR_0 ;

void FUNC_1(UINT8 VAR_1, UINT8 VAR_2, UINT8 VAR_3)
{
    tBTM_BLE_MULTI_ADV_OPQ *VAR_4 = &VAR_0.op_q;

    VAR_4->p_inst_id[VAR_4->next_idx] = VAR_2;

    VAR_4->p_sub_code[VAR_4->next_idx] = (VAR_1 | (VAR_3 << 4));

    VAR_4->next_idx = (VAR_4->next_idx + 1) % FUNC_0();
}
