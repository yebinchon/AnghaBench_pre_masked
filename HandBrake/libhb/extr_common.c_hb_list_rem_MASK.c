
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int items_count; void** items; } ;
typedef TYPE_1__ hb_list_t ;


 int FUNC_0 (void**,void**,int) ;

void FUNC_1( hb_list_t * VAR_0, void * VAR_1 )
{
    int VAR_2;


    for( VAR_2 = 0; VAR_2 < VAR_0->items_count; VAR_2++ )
    {
        if( VAR_0->items[VAR_2] == VAR_1 )
        {

            FUNC_0( &VAR_0->items[VAR_2], &VAR_0->items[VAR_2+1],
                     ( VAR_0->items_count - VAR_2 - 1 ) * sizeof( void * ) );

            (VAR_0->items_count)--;
            break;
        }
    }
}
