
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* next; scalar_t__ size; } ;
typedef TYPE_1__ hb_buffer_t ;
struct TYPE_9__ {TYPE_1__* tail; int size; int count; TYPE_1__* head; } ;
typedef TYPE_2__ hb_buffer_list_t ;


 TYPE_1__* FUNC_0 (TYPE_2__*) ;

hb_buffer_t* FUNC_1(hb_buffer_list_t *VAR_0, hb_buffer_t * VAR_1)
{
    hb_buffer_t * VAR_2;

    if (VAR_0 == ((void*)0))
    {
        return ((void*)0);
    }
    if (VAR_1 == VAR_0->head)
    {
        return FUNC_0(VAR_0);
    }
    VAR_2 = VAR_0->head;
    while (VAR_2 != ((void*)0) && VAR_2->next != VAR_1)
    {
        VAR_2 = VAR_2->next;
    }
    if (VAR_2 == ((void*)0))
    {

        return ((void*)0);
    }
    VAR_0->count--;
    VAR_0->size -= VAR_1->size;
    VAR_2->next = VAR_1->next;
    if (VAR_0->tail == VAR_1)
    {
        VAR_0->tail = VAR_2;
    }
    VAR_1->next = ((void*)0);

    return VAR_1;
}
