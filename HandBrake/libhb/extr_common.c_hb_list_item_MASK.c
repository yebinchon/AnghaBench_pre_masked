
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int items_count; void** items; } ;
typedef TYPE_1__ hb_list_t ;



void * FUNC_0( const hb_list_t * VAR_0, int VAR_1 )
{
    if( VAR_0 == ((void*)0) || VAR_1 < 0 || VAR_1 >= VAR_0->items_count )
    {
        return ((void*)0);
    }

    return VAR_0->items[VAR_1];
}
