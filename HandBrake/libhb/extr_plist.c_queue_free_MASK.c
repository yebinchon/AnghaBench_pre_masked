
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; struct TYPE_5__* head; } ;
typedef TYPE_1__ queue_t ;
typedef TYPE_1__ queue_item_t ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(queue_t **VAR_0)
{
    queue_t *VAR_1 = *VAR_0;
    if (VAR_1 == ((void*)0))
        return;

    queue_item_t *VAR_2, *VAR_3 = VAR_1->head;
    while (VAR_3 != ((void*)0))
    {
        VAR_2 = VAR_3->next;
        FUNC_0(VAR_3);
        VAR_3 = VAR_2;
    }
    FUNC_0(VAR_1);
    *VAR_0 = ((void*)0);
}
