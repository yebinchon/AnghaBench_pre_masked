
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hb_buffer_t ;
struct TYPE_3__ {scalar_t__ size; scalar_t__ count; int * tail; int * head; } ;
typedef TYPE_1__ hb_buffer_list_t ;



hb_buffer_t* FUNC_0(hb_buffer_list_t *VAR_0)
{
    if (VAR_0 == ((void*)0))
    {
        return ((void*)0);
    }
    hb_buffer_t *VAR_1 = VAR_0->head;
    VAR_0->head = VAR_0->tail = ((void*)0);
    VAR_0->count = 0;
    VAR_0->size = 0;
    return VAR_1;
}
