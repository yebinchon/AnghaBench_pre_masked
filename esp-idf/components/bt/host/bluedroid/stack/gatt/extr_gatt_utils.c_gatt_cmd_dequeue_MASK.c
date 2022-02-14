
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t pending_cl_req; size_t next_slot_inq; TYPE_2__* cl_cmd_q; } ;
typedef TYPE_1__ tGATT_TCB ;
struct TYPE_6__ {size_t clcb_idx; int op_code; } ;
typedef TYPE_2__ tGATT_CMD_Q ;
typedef int tGATT_CLCB ;
typedef int UINT8 ;
struct TYPE_7__ {int * clcb; } ;


 size_t VAR_0 ;
 TYPE_4__ VAR_1 ;

tGATT_CLCB *FUNC_0(tGATT_TCB *VAR_2, UINT8 *VAR_3)
{
    tGATT_CMD_Q *VAR_4 = &VAR_2->cl_cmd_q[VAR_2->pending_cl_req];
    tGATT_CLCB *VAR_5 = ((void*)0);

    if (VAR_2->pending_cl_req != VAR_2->next_slot_inq) {
        VAR_5 = &VAR_1.clcb[VAR_4->clcb_idx];

        *VAR_3 = VAR_4->op_code;

        VAR_2->pending_cl_req ++;
        VAR_2->pending_cl_req %= VAR_0;
    }

    return VAR_5;
}
