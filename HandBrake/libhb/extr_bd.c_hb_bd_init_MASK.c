
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int hb_handle_t ;
struct TYPE_4__ {int title_count; int * bd; int path; int disc_info; int * title_info; int * h; } ;
typedef TYPE_1__ hb_bd_t ;
typedef int BLURAY_TITLE_INFO ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int * FUNC_4 (char const*,int *) ;
 void* FUNC_5 (int,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *,int,int,int ) ;
 int FUNC_9 (char const*) ;
 int VAR_1 ;

hb_bd_t * FUNC_10( hb_handle_t *VAR_2, const char * VAR_3 )
{
    hb_bd_t * VAR_4;
    int VAR_5;

    VAR_4 = FUNC_5( sizeof( hb_bd_t ), 1 );
    VAR_4->h = VAR_2;


    VAR_4->bd = FUNC_4( VAR_3, ((void*)0) );
    if( VAR_4->bd == ((void*)0) )
    {



        FUNC_7( "bd: not a bd - trying as a stream/file instead" );
        goto fail;
    }

    VAR_4->title_count = FUNC_3( VAR_4->bd, VAR_0, 0 );
    if ( VAR_4->title_count == 0 )
    {
        FUNC_7( "bd: not a bd - trying as a stream/file instead" );
        goto fail;
    }
    VAR_4->title_info = FUNC_5( sizeof( BLURAY_TITLE_INFO* ) , VAR_4->title_count );
    for ( VAR_5 = 0; VAR_5 < VAR_4->title_count; VAR_5++ )
    {
        VAR_4->title_info[VAR_5] = FUNC_2( VAR_4->bd, VAR_5, 0 );
    }
    FUNC_8(VAR_4->title_info, VAR_4->title_count, sizeof( BLURAY_TITLE_INFO* ), VAR_1 );
    VAR_4->disc_info = FUNC_1(VAR_4->bd);
    VAR_4->path = FUNC_9( VAR_3 );

    return VAR_4;

fail:
    if( VAR_4->bd ) FUNC_0( VAR_4->bd );
    FUNC_6( VAR_4 );
    return ((void*)0);
}
