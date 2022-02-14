
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int items_count; int items_alloc; void** items; } ;
typedef TYPE_1__ hb_list_t ;


 scalar_t__ VAR_0 ;
 void** FUNC_0 (void**,int) ;

void FUNC_1( hb_list_t * VAR_1, void * VAR_2 )
{
    if( !VAR_2 )
    {
        return;
    }

    if( VAR_1->items_count == VAR_1->items_alloc )
    {

        VAR_1->items_alloc += VAR_0;
        VAR_1->items = FUNC_0( VAR_1->items,
                                   VAR_1->items_alloc * sizeof( void * ) );
    }

    VAR_1->items[VAR_1->items_count] = VAR_2;
    (VAR_1->items_count)++;
}
