
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* sub_filter; scalar_t__ settings; } ;
typedef TYPE_1__ hb_filter_object_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int) ;

hb_filter_object_t * FUNC_3( hb_filter_object_t * VAR_0 )
{
    if( VAR_0 == ((void*)0) )
        return ((void*)0);

    hb_filter_object_t * VAR_1 = FUNC_1( sizeof( hb_filter_object_t ) );
    FUNC_2( VAR_1, VAR_0, sizeof( hb_filter_object_t ) );
    if( VAR_0->settings )
        VAR_1->settings = FUNC_0(VAR_0->settings);
    VAR_1->sub_filter = FUNC_3(VAR_0->sub_filter);
    return VAR_1;
}
