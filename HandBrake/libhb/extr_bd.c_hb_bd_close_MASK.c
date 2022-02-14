
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int title_count; struct TYPE_5__* path; scalar_t__ bd; scalar_t__ stream; struct TYPE_5__* title_info; } ;
typedef TYPE_1__ hb_bd_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__*) ;

void FUNC_4( hb_bd_t ** VAR_0 )
{
    hb_bd_t * VAR_1 = *VAR_0;
    int VAR_2;

    if ( VAR_1->title_info )
    {
        for ( VAR_2 = 0; VAR_2 < VAR_1->title_count; VAR_2++ )
            FUNC_1( VAR_1->title_info[VAR_2] );
        FUNC_2( VAR_1->title_info );
    }
    if( VAR_1->stream ) FUNC_3( &VAR_1->stream );
    if( VAR_1->bd ) FUNC_0( VAR_1->bd );
    if( VAR_1->path ) FUNC_2( VAR_1->path );

    FUNC_2( VAR_1 );
    *VAR_0 = ((void*)0);
}
