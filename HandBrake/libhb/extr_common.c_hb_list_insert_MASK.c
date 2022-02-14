
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int items_count; int items_alloc; void** items; } ;
typedef TYPE_1__ hb_list_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void**,void**,int) ;
 void** FUNC_1 (void**,int) ;

void FUNC_2( hb_list_t * VAR_1, int VAR_2, void * VAR_3 )
{
    if( !VAR_3 )
    {
        return;
    }

    if( VAR_1->items_count == VAR_1->items_alloc )
    {

        VAR_1->items_alloc += VAR_0;
        VAR_1->items = FUNC_1( VAR_1->items,
                                   VAR_1->items_alloc * sizeof( void * ) );
    }

    if ( VAR_1->items_count != VAR_2 )
    {

        FUNC_0( &VAR_1->items[VAR_2+1], &VAR_1->items[VAR_2],
                 ( VAR_1->items_count - VAR_2 ) * sizeof( void * ) );
    }


    VAR_1->items[VAR_2] = VAR_3;
    (VAR_1->items_count)++;
}
