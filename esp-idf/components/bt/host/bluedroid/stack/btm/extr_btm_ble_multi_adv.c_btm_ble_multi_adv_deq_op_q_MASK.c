
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* p_inst_id; size_t pending_idx; int* p_sub_code; } ;
typedef TYPE_1__ tBTM_BLE_MULTI_ADV_OPQ ;
typedef int UINT8 ;
struct TYPE_4__ {TYPE_1__ op_q; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_2__ VAR_1 ;

void FUNC_1(UINT8 *VAR_2, UINT8 *VAR_3, UINT8 *VAR_4)
{
    tBTM_BLE_MULTI_ADV_OPQ *VAR_5 = &VAR_1.op_q;

    *VAR_3 = VAR_5->p_inst_id[VAR_5->pending_idx] & 0x7F;
    *VAR_4 = (VAR_5->p_sub_code[VAR_5->pending_idx] >> 4);
    *VAR_2 = (VAR_5->p_sub_code[VAR_5->pending_idx] & VAR_0);

    VAR_5->pending_idx = (VAR_5->pending_idx + 1) % FUNC_0();
}
