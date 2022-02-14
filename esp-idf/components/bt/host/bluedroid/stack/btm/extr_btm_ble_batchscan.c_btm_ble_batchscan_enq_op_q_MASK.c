
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTM_BLE_REF_VALUE ;
typedef int tBTM_BLE_BATCH_SCAN_STATE ;
typedef int UINT8 ;
struct TYPE_3__ {int* sub_code; size_t next_idx; int * ref_value; int * cur_state; } ;
struct TYPE_4__ {TYPE_1__ op_q; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int ,int ) ;
 TYPE_2__ VAR_1 ;

void FUNC_1(UINT8 VAR_2, tBTM_BLE_BATCH_SCAN_STATE VAR_3,
                                UINT8 VAR_4, tBTM_BLE_REF_VALUE VAR_5)
{
    VAR_1.op_q.sub_code[VAR_1.op_q.next_idx] = (VAR_2 | (VAR_4 << 4));
    VAR_1.op_q.cur_state[VAR_1.op_q.next_idx] = VAR_3;
    VAR_1.op_q.ref_value[VAR_1.op_q.next_idx] = VAR_5;
    FUNC_0("btm_ble_batchscan_enq_op_q: subcode:%d, Cur_state:%d, ref_value:%d",
                    VAR_1.op_q.sub_code[VAR_1.op_q.next_idx],
                    VAR_1.op_q.cur_state[VAR_1.op_q.next_idx],
                    VAR_1.op_q.ref_value[VAR_1.op_q.next_idx]);
    VAR_1.op_q.next_idx = (VAR_1.op_q.next_idx + 1)
                                     % VAR_0;
}
