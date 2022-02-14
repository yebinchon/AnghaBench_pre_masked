
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* items; } ;
typedef TYPE_1__ hb_list_t ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1( hb_list_t ** VAR_0 )
{
    hb_list_t * VAR_1 = *VAR_0;

    if (VAR_1 == ((void*)0))
    {
        return;
    }

    FUNC_0( VAR_1->items );
    FUNC_0( VAR_1 );

    *VAR_0 = ((void*)0);
}
