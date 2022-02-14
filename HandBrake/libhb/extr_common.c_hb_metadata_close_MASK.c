
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ list_coverart; struct TYPE_7__* data; struct TYPE_7__* long_description; struct TYPE_7__* description; struct TYPE_7__* genre; struct TYPE_7__* album_artist; struct TYPE_7__* album; struct TYPE_7__* comment; struct TYPE_7__* release_date; struct TYPE_7__* composer; struct TYPE_7__* artist; struct TYPE_7__* name; } ;
typedef TYPE_1__ hb_metadata_t ;
typedef TYPE_1__ hb_coverart_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__*) ;
 TYPE_1__* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,TYPE_1__*) ;

void FUNC_4( hb_metadata_t **VAR_0 )
{
    if ( VAR_0 && *VAR_0 )
    {
        hb_metadata_t *VAR_1 = *VAR_0;
        hb_coverart_t *VAR_2;

        FUNC_0( VAR_1->name );
        FUNC_0( VAR_1->artist );
        FUNC_0( VAR_1->composer );
        FUNC_0( VAR_1->release_date );
        FUNC_0( VAR_1->comment );
        FUNC_0( VAR_1->album );
        FUNC_0( VAR_1->album_artist );
        FUNC_0( VAR_1->genre );
        FUNC_0( VAR_1->description );
        FUNC_0( VAR_1->long_description );

        if ( VAR_1->list_coverart )
        {
            while( ( VAR_2 = FUNC_2( VAR_1->list_coverart, 0 ) ) )
            {
                FUNC_3( VAR_1->list_coverart, VAR_2 );
                FUNC_0( VAR_2->data );
                FUNC_0( VAR_2 );
            }
            FUNC_1( &VAR_1->list_coverart );
        }

        FUNC_0( VAR_1 );
        *VAR_0 = ((void*)0);
    }
}
