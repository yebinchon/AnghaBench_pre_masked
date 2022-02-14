
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTA_AG_SCB ;
struct TYPE_5__ {int layer_specific; int event; } ;
struct TYPE_4__ {scalar_t__ param; int event; } ;
typedef TYPE_1__ TIMER_LIST_ENT ;
typedef TYPE_2__ BT_HDR ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
    BT_HDR *VAR_1;
    TIMER_LIST_ENT *VAR_2 = (TIMER_LIST_ENT *) VAR_0;

    if ((VAR_1 = (BT_HDR *) FUNC_2(sizeof(BT_HDR))) != ((void*)0)) {
        VAR_1->event = VAR_2->event;
        VAR_1->layer_specific = FUNC_0((tBTA_AG_SCB *) VAR_2->param);
        FUNC_1(VAR_1);
    }
}
