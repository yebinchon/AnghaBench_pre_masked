
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t next_slot_inq; size_t pending_cl_req; TYPE_2__* cl_cmd_q; } ;
typedef TYPE_1__ tGATT_TCB ;
struct TYPE_5__ {int clcb_idx; int * p_cmd; int op_code; int to_send; } ;
typedef TYPE_2__ tGATT_CMD_Q ;
typedef int UINT8 ;
typedef int UINT16 ;
typedef int BT_HDR ;
typedef int BOOLEAN ;


 size_t VAR_0 ;
 int VAR_1 ;

BOOLEAN FUNC_0(tGATT_TCB *VAR_2, UINT16 VAR_3, BOOLEAN VAR_4, UINT8 VAR_5, BT_HDR *VAR_6)
{
    tGATT_CMD_Q *VAR_7 = &VAR_2->cl_cmd_q[VAR_2->next_slot_inq];

    VAR_7->to_send = VAR_4;
    VAR_7->op_code = VAR_5;
    VAR_7->p_cmd = VAR_6;
    VAR_7->clcb_idx = VAR_3;

    if (!VAR_4) {
        VAR_2->pending_cl_req = VAR_2->next_slot_inq;
    }

    VAR_2->next_slot_inq ++;
    VAR_2->next_slot_inq %= VAR_0;

    return VAR_1;
}
