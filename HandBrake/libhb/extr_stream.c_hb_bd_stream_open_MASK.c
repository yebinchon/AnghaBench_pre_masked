
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_19__ {int video_id; int video_stream_type; int flags; int list_subtitle; int list_audio; } ;
typedef TYPE_5__ hb_title_t ;
struct TYPE_20__ {int id; int stream_type; } ;
typedef TYPE_6__ hb_subtitle_t ;
struct TYPE_18__ {int count; TYPE_3__* list; int * packet; } ;
struct TYPE_21__ {int packetsize; TYPE_4__ ts; int hb_stream_type; int * path; TYPE_5__* title; int * file_handle; int * h; } ;
typedef TYPE_7__ hb_stream_t ;
typedef int hb_handle_t ;
struct TYPE_15__ {int substream_type; int stream_type; } ;
struct TYPE_16__ {TYPE_1__ in; } ;
struct TYPE_22__ {int id; TYPE_2__ config; } ;
typedef TYPE_8__ hb_audio_t ;
struct TYPE_17__ {TYPE_10__* buf; } ;
struct TYPE_14__ {scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_7__* FUNC_0 (int,int) ;
 TYPE_10__* FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 void* FUNC_3 (int ,int) ;
 int VAR_6 ;
 int FUNC_4 (TYPE_7__*,int,int,int,int ,int *) ;

hb_stream_t * FUNC_5( hb_handle_t *VAR_7, hb_title_t *VAR_8 )
{
    int VAR_9;

    hb_stream_t *VAR_10 = FUNC_0( sizeof( hb_stream_t ), 1 );
    if ( VAR_10 == ((void*)0) )
    {
        FUNC_2( "hb_bd_stream_open: can't allocate space for stream state" );
        return ((void*)0);
    }

    VAR_10->h = VAR_7;
    VAR_10->file_handle = ((void*)0);
    VAR_10->title = VAR_8;
    VAR_10->path = ((void*)0);
    VAR_10->ts.packet = ((void*)0);

    int VAR_11 = VAR_8->video_id;
    int VAR_12 = VAR_8->video_stream_type;
    FUNC_4( VAR_10, VAR_11, 0, VAR_12, VAR_5, ((void*)0) );

    hb_audio_t * VAR_13;
    for ( VAR_9 = 0; ( VAR_13 = FUNC_3( VAR_8->list_audio, VAR_9 ) ); ++VAR_9 )
    {
        int VAR_14 = VAR_13->config.in.substream_type;
        VAR_11 = VAR_13->id & 0xFFFF;
        VAR_12 = VAR_13->config.in.stream_type;

        FUNC_4( VAR_10, VAR_11, VAR_14, VAR_12, VAR_0, ((void*)0) );
    }

    hb_subtitle_t * VAR_15;
    for ( VAR_9 = 0; ( VAR_15 = FUNC_3( VAR_8->list_subtitle, VAR_9 ) ); ++VAR_9 )
    {



        if (VAR_15->id != VAR_2)
        {
            VAR_11 = VAR_15->id & 0xFFFF;
            VAR_12 = VAR_15->stream_type;

            FUNC_4( VAR_10, VAR_11, 0, VAR_12, VAR_4, ((void*)0) );
        }
    }




    if ( VAR_8->flags & VAR_1 )
    {







        FUNC_4( VAR_10, 0x1001, 0, -1, VAR_3, ((void*)0) );
    }

    VAR_10->packetsize = 192;
    VAR_10->hb_stream_type = VAR_6;

    for ( VAR_9 = 0; VAR_9 < VAR_10->ts.count; VAR_9++ )
    {
        VAR_10->ts.list[VAR_9].buf = FUNC_1(VAR_10->packetsize);
        VAR_10->ts.list[VAR_9].buf->size = 0;
    }

    return VAR_10;
}
