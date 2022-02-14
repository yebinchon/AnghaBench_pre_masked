
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; int capacity; int thresh; int lock; int cond_full; scalar_t__ wait_full; TYPE_2__* first; } ;
typedef TYPE_1__ hb_fifo_t ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_2__ hb_buffer_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

hb_buffer_t * FUNC_3( hb_fifo_t * VAR_0 )
{
    hb_buffer_t * VAR_1;

    FUNC_1( VAR_0->lock );
    if( VAR_0->size < 1 )
    {
        FUNC_2( VAR_0->lock );
        return ((void*)0);
    }
    VAR_1 = VAR_0->first;
    VAR_0->first = VAR_1->next;
    VAR_1->next = ((void*)0);
    VAR_0->size -= 1;
    if( VAR_0->wait_full && VAR_0->size == VAR_0->capacity - VAR_0->thresh )
    {
        VAR_0->wait_full = 0;
        FUNC_0( VAR_0->cond_full );
    }
    FUNC_2( VAR_0->lock );

    return VAR_1;
}
