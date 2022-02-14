
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ size; scalar_t__ capacity; int lock; TYPE_2__* first; TYPE_2__* last; int * cond_alert_full; } ;
typedef TYPE_1__ hb_fifo_t ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_2__ hb_buffer_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3( hb_fifo_t * VAR_0, hb_buffer_t * VAR_1 )
{
    hb_buffer_t * VAR_2;
    uint32_t VAR_3 = 0;

    if( !VAR_1 )
    {
        return;
    }

    FUNC_1( VAR_0->lock );
    if (VAR_0->size >= VAR_0->capacity &&
        VAR_0->cond_alert_full != ((void*)0))
    {
        FUNC_0( VAR_0->cond_alert_full );
    }




    VAR_2 = VAR_1;
    while( VAR_2->next )
    {
        VAR_2 = VAR_2->next;
        VAR_3 += 1;
    }

    if( VAR_0->size > 0 )
    {
        VAR_2->next = VAR_0->first;
    }
    else
    {
        VAR_0->last = VAR_2;
    }

    VAR_0->first = VAR_1;
    VAR_0->size += ( VAR_3 + 1 );

    FUNC_2( VAR_0->lock );
}
