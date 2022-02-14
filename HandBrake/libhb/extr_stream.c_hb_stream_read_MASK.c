
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ hb_stream_type; } ;
typedef TYPE_1__ hb_stream_t ;
typedef int hb_buffer_t ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;

hb_buffer_t * FUNC_3( hb_stream_t * VAR_2 )
{
    if ( VAR_2->hb_stream_type == VAR_0 )
    {
        return FUNC_0( VAR_2 );
    }
    if ( VAR_2->hb_stream_type == VAR_1 )
    {
        return FUNC_1( VAR_2 );
    }
    return FUNC_2( VAR_2 );
}
