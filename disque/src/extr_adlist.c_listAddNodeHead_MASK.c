
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* prev; struct TYPE_6__* next; void* value; } ;
typedef TYPE_1__ listNode ;
struct TYPE_7__ {scalar_t__ len; TYPE_1__* head; TYPE_1__* tail; } ;
typedef TYPE_2__ list ;


 TYPE_1__* FUNC_0 (int) ;

list *FUNC_1(list *VAR_0, void *VAR_1)
{
    listNode *VAR_2;

    if ((VAR_2 = FUNC_0(sizeof(*VAR_2))) == ((void*)0))
        return ((void*)0);
    VAR_2->value = VAR_1;
    if (VAR_0->len == 0) {
        VAR_0->head = VAR_0->tail = VAR_2;
        VAR_2->prev = VAR_2->next = ((void*)0);
    } else {
        VAR_2->prev = ((void*)0);
        VAR_2->next = VAR_0->head;
        VAR_0->head->prev = VAR_2;
        VAR_0->head = VAR_2;
    }
    VAR_0->len++;
    return VAR_0;
}
