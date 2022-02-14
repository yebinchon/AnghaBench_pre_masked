
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; struct TYPE_5__* next; } ;
typedef TYPE_1__ hb_buffer_t ;
struct TYPE_6__ {int count; int size; TYPE_1__* tail; TYPE_1__* head; } ;
typedef TYPE_2__ hb_buffer_list_t ;



void FUNC_0(hb_buffer_list_t *VAR_0, hb_buffer_t *VAR_1)
{
    int VAR_2 = 1;
    int VAR_3 = 0;
    hb_buffer_t *VAR_4 = VAR_1;

    if (VAR_1 == ((void*)0))
    {
        return;
    }


    VAR_3 += VAR_1->size;
    while (VAR_4 != ((void*)0) && VAR_4->next != ((void*)0))
    {
        VAR_4 = VAR_4->next;
        VAR_3 += VAR_4->size;
        VAR_2++;
    }
    if (VAR_0->tail == ((void*)0))
    {
        VAR_0->head = VAR_1;
        VAR_0->tail = VAR_4;
    }
    else
    {
        VAR_0->tail->next = VAR_1;
        VAR_0->tail = VAR_4;
    }
    VAR_0->count += VAR_2;
    VAR_0->size += VAR_3;
}
