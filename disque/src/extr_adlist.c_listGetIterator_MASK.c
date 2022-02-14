
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int direction; int next; } ;
typedef TYPE_1__ listIter ;
struct TYPE_7__ {int tail; int head; } ;
typedef TYPE_2__ list ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;

listIter *FUNC_1(list *VAR_1, int VAR_2)
{
    listIter *VAR_3;

    if ((VAR_3 = FUNC_0(sizeof(*VAR_3))) == ((void*)0)) return ((void*)0);
    if (VAR_2 == VAR_0)
        VAR_3->next = VAR_1->head;
    else
        VAR_3->next = VAR_1->tail;
    VAR_3->direction = VAR_2;
    return VAR_3;
}
