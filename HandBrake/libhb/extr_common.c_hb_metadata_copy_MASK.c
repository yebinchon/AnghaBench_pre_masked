
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ list_coverart; void* long_description; void* description; void* genre; void* album; void* comment; void* release_date; void* composer; void* album_artist; void* artist; void* name; } ;
typedef TYPE_1__ hb_metadata_t ;
struct TYPE_9__ {int type; int size; int data; } ;
typedef TYPE_2__ hb_coverart_t ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_2__* FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ) ;
 void* FUNC_4 (void*) ;

hb_metadata_t *FUNC_5( const hb_metadata_t *VAR_0 )
{
    hb_metadata_t *VAR_1 = ((void*)0);

    if ( VAR_0 )
    {
        VAR_1 = FUNC_0( 1, sizeof(*VAR_1) );
        if ( VAR_0->name )
        {
            VAR_1->name = FUNC_4(VAR_0->name);
        }
        if ( VAR_0->artist )
        {
            VAR_1->artist = FUNC_4(VAR_0->artist);
        }
        if ( VAR_0->album_artist )
        {
            VAR_1->album_artist = FUNC_4(VAR_0->album_artist);
        }
        if ( VAR_0->composer )
        {
            VAR_1->composer = FUNC_4(VAR_0->composer);
        }
        if ( VAR_0->release_date )
        {
            VAR_1->release_date = FUNC_4(VAR_0->release_date);
        }
        if ( VAR_0->comment )
        {
            VAR_1->comment = FUNC_4(VAR_0->comment);
        }
        if ( VAR_0->album )
        {
            VAR_1->album = FUNC_4(VAR_0->album);
        }
        if ( VAR_0->genre )
        {
            VAR_1->genre = FUNC_4(VAR_0->genre);
        }
        if ( VAR_0->description )
        {
            VAR_1->description = FUNC_4(VAR_0->description);
        }
        if ( VAR_0->long_description )
        {
            VAR_1->long_description = FUNC_4(VAR_0->long_description);
        }
        if ( VAR_0->list_coverart )
        {
            int VAR_2;
            for ( VAR_2 = 0; VAR_2 < FUNC_1( VAR_0->list_coverart ); VAR_2++ )
            {
                hb_coverart_t *VAR_3 = FUNC_2( VAR_0->list_coverart, VAR_2 );
                FUNC_3(
                        VAR_1, VAR_3->data, VAR_3->size, VAR_3->type );
            }
        }
    }
    return VAR_1;
}
