
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; int capacity; int lock; int cond_empty; scalar_t__ wait_empty; TYPE_2__* last; TYPE_2__* first; int * cond_alert_full; } ;
typedef TYPE_1__ hb_fifo_t ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_2__ hb_buffer_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4( hb_fifo_t * VAR_0, hb_buffer_t * VAR_1 )
{
    if( !VAR_1 )
    {
        return;
    }

    FUNC_2( VAR_0->lock );
    if (VAR_0->size >= VAR_0->capacity &&
        VAR_0->cond_alert_full != ((void*)0))
    {
        FUNC_0( VAR_0->cond_alert_full );
    }
    if( VAR_0->size > 0 )
    {
        VAR_0->last->next = VAR_1;
    }
    else
    {
        VAR_0->first = VAR_1;
    }
    VAR_0->last = VAR_1;
    VAR_0->size += 1;
    while( VAR_0->last->next )
    {
        VAR_0->size += 1;
        VAR_0->last = VAR_0->last->next;
    }
    if( VAR_0->wait_empty && VAR_0->size >= 1 )
    {
        VAR_0->wait_empty = 0;
        FUNC_1( VAR_0->cond_empty );
    }
    FUNC_3( VAR_0->lock );
}
