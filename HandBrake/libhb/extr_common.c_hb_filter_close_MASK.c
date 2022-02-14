
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int settings; struct TYPE_4__* sub_filter; } ;
typedef TYPE_1__ hb_filter_object_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

void FUNC_2( hb_filter_object_t ** VAR_0 )
{
    hb_filter_object_t * VAR_1 = *VAR_0;

    if (VAR_1 == ((void*)0))
    {
        return;
    }
    FUNC_2(&VAR_1->sub_filter);
    FUNC_1(&VAR_1->settings);

    FUNC_0( VAR_1 );
    *VAR_0 = ((void*)0);
}
