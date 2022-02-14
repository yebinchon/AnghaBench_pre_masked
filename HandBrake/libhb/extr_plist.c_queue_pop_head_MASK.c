
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* head; } ;
typedef TYPE_1__ queue_t ;
struct TYPE_6__ {struct TYPE_6__* next; void* value; } ;
typedef TYPE_2__ queue_item_t ;


 int FUNC_0 (TYPE_2__*) ;

void * FUNC_1(queue_t *VAR_0)
{
    void *VAR_1;
    queue_item_t *VAR_2;

    if (VAR_0->head == ((void*)0))
        return ((void*)0);

    VAR_2 = VAR_0->head;
    VAR_1 = VAR_2->value;
    VAR_0->head = VAR_2->next;
    FUNC_0(VAR_2);

    return VAR_1;
}
