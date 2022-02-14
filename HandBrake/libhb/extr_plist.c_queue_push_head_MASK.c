
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


 TYPE_2__* FUNC_0 (int,int) ;

void FUNC_1(queue_t *VAR_0, void *VAR_1)
{
    queue_item_t *VAR_2 = FUNC_0(1, sizeof(queue_item_t));
    VAR_2->value = VAR_1;
    VAR_2->next = VAR_0->head;
    VAR_0->head = VAR_2;
}
