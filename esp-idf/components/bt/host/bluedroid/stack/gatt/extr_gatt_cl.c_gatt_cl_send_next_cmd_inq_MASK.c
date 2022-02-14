
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t pending_cl_req; scalar_t__ next_slot_inq; TYPE_2__* cl_cmd_q; } ;
typedef TYPE_1__ tGATT_TCB ;
typedef scalar_t__ tGATT_STATUS ;
struct TYPE_8__ {scalar_t__ op_code; int clcb_idx; int * p_cmd; void* to_send; } ;
typedef TYPE_2__ tGATT_CMD_Q ;
typedef int tGATT_CLCB ;
typedef int UINT8 ;
typedef void* BOOLEAN ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;
 void* VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *) ;
 int * FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int *,scalar_t__,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 int FUNC_6 (int *) ;

BOOLEAN FUNC_7(tGATT_TCB *VAR_6)
{
    tGATT_CMD_Q *VAR_7 = &VAR_6->cl_cmd_q[VAR_6->pending_cl_req];
    BOOLEAN VAR_8 = VAR_0;
    UINT8 VAR_9;
    tGATT_CLCB *VAR_10 = ((void*)0);
    tGATT_STATUS VAR_11 = VAR_4;

    while (!VAR_8 &&
            VAR_6->pending_cl_req != VAR_6->next_slot_inq &&
            VAR_7->to_send && VAR_7->p_cmd != ((void*)0)) {
        VAR_11 = FUNC_1(VAR_6, VAR_7->p_cmd);

        if (VAR_11 == VAR_4 || VAR_11 == VAR_2) {
            VAR_8 = VAR_5;
            VAR_7->to_send = VAR_0;
            if(VAR_7->p_cmd) {
                FUNC_6(VAR_7->p_cmd);
                VAR_7->p_cmd = ((void*)0);
            }


            if (VAR_7->op_code != VAR_1 && VAR_7->op_code != VAR_3) {
                FUNC_4 (VAR_7->clcb_idx);
            } else {
                VAR_10 = FUNC_2(VAR_6, &VAR_9);


                if (VAR_11 == VAR_4) {
                    VAR_8 = VAR_0;
                }

                VAR_7 = &VAR_6->cl_cmd_q[VAR_6->pending_cl_req];

                FUNC_3(VAR_10, VAR_11, ((void*)0));
            }
        } else {
            FUNC_0("gatt_cl_send_next_cmd_inq: L2CAP sent error");

            FUNC_5(VAR_7, 0, sizeof(tGATT_CMD_Q));
            VAR_6->pending_cl_req ++;
            VAR_7 = &VAR_6->cl_cmd_q[VAR_6->pending_cl_req];
        }

    }
    return VAR_8;
}
