
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; int wait_empty; int capacity; int thresh; int lock; int cond_full; scalar_t__ wait_full; TYPE_2__* first; int cond_empty; } ;
typedef TYPE_1__ hb_fifo_t ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_2__ hb_buffer_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

hb_buffer_t * FUNC_4( hb_fifo_t * VAR_1 )
{
    hb_buffer_t * VAR_2;

    FUNC_2( VAR_1->lock );
    if( VAR_1->size < 1 )
    {
        VAR_1->wait_empty = 1;
        FUNC_1( VAR_1->cond_empty, VAR_1->lock, VAR_0 );
        if( VAR_1->size < 1 )
        {
            FUNC_3( VAR_1->lock );
            return ((void*)0);
        }
    }
    VAR_2 = VAR_1->first;
    VAR_1->first = VAR_2->next;
    VAR_2->next = ((void*)0);
    VAR_1->size -= 1;
    if( VAR_1->wait_full && VAR_1->size == VAR_1->capacity - VAR_1->thresh )
    {
        VAR_1->wait_full = 0;
        FUNC_0( VAR_1->cond_full );
    }
    FUNC_3( VAR_1->lock );

    return VAR_2;
}
