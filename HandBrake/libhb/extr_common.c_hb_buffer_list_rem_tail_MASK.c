
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; scalar_t__ size; } ;
typedef TYPE_1__ hb_buffer_t ;
struct TYPE_6__ {scalar_t__ size; scalar_t__ count; TYPE_1__* tail; TYPE_1__* head; } ;
typedef TYPE_2__ hb_buffer_list_t ;



hb_buffer_t* FUNC_0(hb_buffer_list_t *VAR_0)
{
    if (VAR_0 == ((void*)0))
    {
        return ((void*)0);
    }
    hb_buffer_t *VAR_1 = VAR_0->tail;

    if (VAR_0->head == VAR_0->tail)
    {
        VAR_0->head = VAR_0->tail = ((void*)0);
        VAR_0->count = 0;
        VAR_0->size = 0;
    }
    else if (VAR_0->tail != ((void*)0))
    {
        hb_buffer_t *VAR_2 = VAR_0->head;
        while (VAR_2->next != VAR_0->tail)
        {
            VAR_2 = VAR_2->next;
        }
        VAR_2->next = ((void*)0);
        VAR_0->tail = VAR_2;
        VAR_0->count--;
        VAR_0->size -= VAR_1->size;
    }
    if (VAR_1 != ((void*)0))
    {
        VAR_1->next = ((void*)0);
    }
    return VAR_1;
}
