
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ operation; scalar_t__ op_subtype; scalar_t__ retry_count; int * p_tcb; } ;
typedef TYPE_1__ tGATT_CLCB ;
typedef int UINT8 ;
struct TYPE_7__ {scalar_t__ param; } ;
typedef TYPE_2__ TIMER_LIST_ENT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(TIMER_LIST_ENT *VAR_3)
{
    tGATT_CLCB *VAR_4 = (tGATT_CLCB *)VAR_3->param;
    if (VAR_4 == ((void*)0) || VAR_4->p_tcb == ((void*)0)) {
        FUNC_1("gatt_rsp_timeout clcb is already deleted");
        return;
    }
    if (VAR_4->operation == VAR_0 &&
            VAR_4->op_subtype == VAR_1 &&
            VAR_4->retry_count < VAR_2) {
        UINT8 VAR_5;
        FUNC_1("gatt_rsp_timeout retry discovery primary service");
        if (VAR_4 != FUNC_3(VAR_4->p_tcb, &VAR_5)) {
            FUNC_0("gatt_rsp_timeout command queue out of sync, disconnect");
        } else {
            VAR_4->retry_count++;

            FUNC_2(VAR_4);

            return;
        }
    }

    FUNC_1("gatt_rsp_timeout disconnecting...");
    FUNC_4 (VAR_4->p_tcb);
}
