
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ hb_stream_type; scalar_t__ frames; scalar_t__ errors; } ;
typedef TYPE_1__ hb_stream_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__,double) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3( hb_stream_t ** VAR_1 )
{
    hb_stream_t *VAR_2 = * VAR_1;

    if (VAR_2 == ((void*)0))
    {
        return;
    }

    if ( VAR_2->hb_stream_type == VAR_0 )
    {
        FUNC_0( VAR_2 );
        FUNC_2( VAR_2 );
        *VAR_1 = ((void*)0);
        return;
    }

    if ( VAR_2->frames )
    {
        FUNC_1( "stream: %d good frames, %d errors (%.0f%%)", VAR_2->frames,
                VAR_2->errors, (double)VAR_2->errors * 100. /
                (double)VAR_2->frames );
    }

    FUNC_2( VAR_2 );
    *VAR_1 = ((void*)0);
}
