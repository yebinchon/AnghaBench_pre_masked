
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTM_BLE_REF_VALUE ;
typedef int tBTM_BLE_BATCH_SCAN_STATE ;
typedef int UINT8 ;
struct TYPE_3__ {int* sub_code; size_t pending_idx; int * cur_state; int * ref_value; } ;
struct TYPE_4__ {TYPE_1__ op_q; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;

void FUNC_0(UINT8 *VAR_3, tBTM_BLE_BATCH_SCAN_STATE *VAR_4,
                                UINT8 *VAR_5, tBTM_BLE_REF_VALUE *VAR_6)
{
    *VAR_5 = (VAR_2.op_q.sub_code[VAR_2.op_q.pending_idx] >> 4);
    *VAR_3 = (VAR_2.op_q.sub_code[VAR_2.op_q.pending_idx]
                 & VAR_1);
    *VAR_6 = VAR_2.op_q.ref_value[VAR_2.op_q.pending_idx];
    *VAR_4 = (VAR_2.op_q.cur_state[VAR_2.op_q.pending_idx]);
    VAR_2.op_q.pending_idx = (VAR_2.op_q.pending_idx + 1)
                                        % VAR_0;
}
