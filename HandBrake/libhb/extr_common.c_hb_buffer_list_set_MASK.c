
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ size; struct TYPE_6__* next; } ;
typedef TYPE_1__ hb_buffer_t ;
struct TYPE_7__ {int count; int size; TYPE_1__* tail; TYPE_1__* head; } ;
typedef TYPE_2__ hb_buffer_list_t ;



hb_buffer_t* FUNC_0(hb_buffer_list_t *VAR_0, hb_buffer_t *VAR_1)
{
    int VAR_2 = 0;
    int VAR_3 = 0;

    if (VAR_0 == ((void*)0))
    {
        return ((void*)0);
    }

    hb_buffer_t *VAR_4 = VAR_0->head;
    hb_buffer_t *VAR_5 = VAR_1;
    if (VAR_5 != ((void*)0))
    {
        VAR_2++;
        VAR_3 += VAR_5->size;
        while (VAR_5->next != ((void*)0))
        {
            VAR_5 = VAR_5->next;
            VAR_2++;
            VAR_3 += VAR_5->size;
        }
    }
    VAR_0->head = VAR_1;
    VAR_0->tail = VAR_5;
    VAR_0->count = VAR_2;
    VAR_0->size = VAR_3;
    return VAR_4;
}
