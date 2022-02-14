
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; int capacity; int wait_full; int lock; int cond_empty; scalar_t__ wait_empty; TYPE_2__* last; TYPE_2__* first; int cond_full; int * cond_alert_full; } ;
typedef TYPE_1__ hb_fifo_t ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_2__ hb_buffer_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void FUNC_5( hb_fifo_t * VAR_1, hb_buffer_t * VAR_2 )
{
    if( !VAR_2 )
    {
        return;
    }

    FUNC_3( VAR_1->lock );
    if( VAR_1->size >= VAR_1->capacity )
    {
        VAR_1->wait_full = 1;
        if (VAR_1->cond_alert_full != ((void*)0))
            FUNC_0( VAR_1->cond_alert_full );
        FUNC_2( VAR_1->cond_full, VAR_1->lock, VAR_0 );
    }
    if( VAR_1->size > 0 )
    {
        VAR_1->last->next = VAR_2;
    }
    else
    {
        VAR_1->first = VAR_2;
    }
    VAR_1->last = VAR_2;
    VAR_1->size += 1;
    while( VAR_1->last->next )
    {
        VAR_1->size += 1;
        VAR_1->last = VAR_1->last->next;
    }
    if( VAR_1->wait_empty && VAR_1->size >= 1 )
    {
        VAR_1->wait_empty = 0;
        FUNC_1( VAR_1->cond_empty );
    }
    FUNC_4( VAR_1->lock );
}
