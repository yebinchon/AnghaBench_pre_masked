
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned long len; int value; int (* free ) (int ) ;struct TYPE_5__* next; struct TYPE_5__* head; } ;
typedef TYPE_1__ listNode ;
typedef TYPE_1__ list ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(list *VAR_0)
{
    unsigned long VAR_1;
    listNode *VAR_2, *VAR_3;

    VAR_2 = VAR_0->head;
    VAR_1 = VAR_0->len;
    while(VAR_1--) {
        VAR_3 = VAR_2->next;
        if (VAR_0->free) VAR_0->free(VAR_2->value);
        FUNC_1(VAR_2);
        VAR_2 = VAR_3;
    }
    FUNC_1(VAR_0);
}
