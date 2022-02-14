
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tGATT_TCB ;
typedef int tGATT_EXEC_FLAG ;
typedef int tGATT_CL_MSG ;
struct TYPE_4__ {int clcb_idx; } ;
typedef TYPE_1__ tGATT_CLCB ;
typedef scalar_t__ UINT8 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int *) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,int *) ;

void FUNC_3 (tGATT_TCB *VAR_2, tGATT_CLCB *VAR_3, tGATT_EXEC_FLAG VAR_4)
{
    UINT8 VAR_5 ;

    FUNC_0("gatt_send_queue_write_cancel ");

    VAR_5 = FUNC_1(VAR_2, VAR_3->clcb_idx, VAR_0, (tGATT_CL_MSG *)&VAR_4);

    if (VAR_5 != VAR_1) {
        FUNC_2(VAR_3, VAR_5, ((void*)0));
    }
}
