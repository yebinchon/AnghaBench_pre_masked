
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ind_count; } ;
typedef TYPE_1__ tGATT_TCB ;
struct TYPE_6__ {scalar_t__ param; } ;
typedef TYPE_2__ TIMER_LIST_ENT ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int *) ;

void FUNC_2(TIMER_LIST_ENT *VAR_1)
{
    tGATT_TCB *VAR_2 = (tGATT_TCB *)VAR_1->param;

    FUNC_0("gatt_ind_ack_timeout send ack now");

    if (VAR_2 != ((void*)0)) {
        VAR_2->ind_count = 0;
    }

    FUNC_1(((tGATT_TCB *)VAR_1->param), 0, VAR_0, ((void*)0));
}
