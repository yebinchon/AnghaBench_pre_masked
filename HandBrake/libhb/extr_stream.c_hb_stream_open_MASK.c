
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int flags; } ;
typedef TYPE_1__ hb_title_t ;
struct TYPE_14__ {int has_IDRs; int scan; struct TYPE_14__* path; int * file_handle; TYPE_1__* title; int * h; } ;
typedef TYPE_2__ hb_stream_t ;
typedef int hb_handle_t ;
typedef int FILE ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_1__*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int * FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (TYPE_2__*) ;
 TYPE_2__* FUNC_9 (char const*) ;

hb_stream_t *
FUNC_10(hb_handle_t *VAR_1, const char *VAR_2, hb_title_t *VAR_3, int VAR_4)
{
    if (VAR_3 == ((void*)0))
    {
        FUNC_5("hb_stream_open: title is null");
        return ((void*)0);
    }

    FILE *VAR_5 = FUNC_4(VAR_2, "rb");
    if ( VAR_5 == ((void*)0) )
    {
        FUNC_5( "hb_stream_open: open %s failed", VAR_2 );
        return ((void*)0);
    }

    hb_stream_t *VAR_6 = FUNC_0( sizeof( hb_stream_t ), 1 );
    if ( VAR_6 == ((void*)0) )
    {
        FUNC_1( VAR_5 );
        FUNC_5( "hb_stream_open: can't allocate space for %s stream state", VAR_2 );
        return ((void*)0);
    }

    if (!(VAR_3->flags & VAR_0))
    {
        VAR_6->has_IDRs = 1;
    }





    VAR_6->h = VAR_1;
    VAR_6->file_handle = VAR_5;
    VAR_6->title = VAR_3;
    VAR_6->scan = VAR_4;
    VAR_6->path = FUNC_9( VAR_2 );
    if (VAR_6->path != ((void*)0) )
    {
        if (FUNC_6( VAR_6 ) != 0)
        {
            if( !VAR_4 )
            {
                FUNC_8( VAR_6 );
            }


            FUNC_7( VAR_6, 0. );
            return VAR_6;
        }
        FUNC_1( VAR_6->file_handle );
        VAR_6->file_handle = ((void*)0);
        if ( FUNC_2( VAR_6, VAR_3, VAR_4 ) )
        {
            return VAR_6;
        }
    }
    if ( VAR_6->file_handle )
    {
        FUNC_1( VAR_6->file_handle );
    }
    if (VAR_6->path)
    {
        FUNC_3( VAR_6->path );
    }
    FUNC_5( "hb_stream_open: open %s failed", VAR_2 );
    FUNC_3( VAR_6 );
    return ((void*)0);
}
