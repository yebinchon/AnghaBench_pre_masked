
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_42__ TYPE_9__ ;
typedef struct TYPE_41__ TYPE_8__ ;
typedef struct TYPE_40__ TYPE_7__ ;
typedef struct TYPE_39__ TYPE_6__ ;
typedef struct TYPE_38__ TYPE_5__ ;
typedef struct TYPE_37__ TYPE_4__ ;
typedef struct TYPE_36__ TYPE_3__ ;
typedef struct TYPE_35__ TYPE_2__ ;
typedef struct TYPE_34__ TYPE_21__ ;
typedef struct TYPE_33__ TYPE_1__ ;
typedef struct TYPE_32__ TYPE_18__ ;
typedef struct TYPE_31__ TYPE_14__ ;
typedef struct TYPE_30__ TYPE_13__ ;
typedef struct TYPE_29__ TYPE_12__ ;
typedef struct TYPE_28__ TYPE_11__ ;
typedef struct TYPE_27__ TYPE_10__ ;


typedef scalar_t__ int64_t ;
struct TYPE_37__ {scalar_t__ io_pattern; int usage_threaded; int additional_buffers; scalar_t__ sync_need; int async_depth; int impl_requested; } ;
struct TYPE_38__ {scalar_t__ decode; TYPE_4__ config; int codec_name; } ;
struct TYPE_42__ {int video_codec_opened; int * list_subtitle; int * frame; int parser; TYPE_8__* title; TYPE_21__* context; int threads; int * codec; TYPE_5__ qsv; TYPE_13__* job; int list; scalar_t__ next_pts; } ;
typedef TYPE_9__ hb_work_private_t ;
struct TYPE_27__ {int codec_param; TYPE_8__* title; TYPE_9__* private_data; } ;
typedef TYPE_10__ hb_work_object_t ;
struct TYPE_28__ {scalar_t__ source; scalar_t__ id; } ;
typedef TYPE_11__ hb_subtitle_t ;
typedef int hb_qsv_space ;
struct TYPE_29__ {int capabilities; int implementation; } ;
typedef TYPE_12__ hb_qsv_info_t ;
typedef int hb_qsv_context ;
struct TYPE_40__ {TYPE_18__* ctx; int async_depth; } ;
struct TYPE_30__ {int list_subtitle; TYPE_8__* title; TYPE_7__ qsv; int vcodec; } ;
typedef TYPE_13__ hb_job_t ;
struct TYPE_36__ {int den; int num; } ;
struct TYPE_41__ {int flags; size_t video_id; TYPE_3__ video_timebase; scalar_t__ opaque_priv; int has_resolution_change; } ;
struct TYPE_39__ {int is_init_done; } ;
struct TYPE_35__ {int den; int num; } ;
struct TYPE_34__ {int error_concealment; scalar_t__ codec_id; TYPE_2__ pkt_timebase; scalar_t__ hwaccel_context; int get_buffer2; int get_format; int err_recognition; int workaround_bugs; } ;
struct TYPE_33__ {int codecpar; } ;
struct TYPE_32__ {TYPE_6__* dec_space; } ;
struct TYPE_31__ {TYPE_1__** streams; } ;
typedef TYPE_14__ AVFormatContext ;
typedef int AVDictionary ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (int **,char*,char*,int ) ;
 int * FUNC_2 () ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 TYPE_21__* FUNC_5 (int *) ;
 int * FUNC_6 (int ) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (TYPE_21__*,int ) ;
 TYPE_9__* FUNC_9 (int,int) ;
 scalar_t__ FUNC_10 (TYPE_21__*,int *,int **,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int *,TYPE_11__*) ;
 scalar_t__ FUNC_14 (int ) ;
 int * FUNC_15 () ;
 TYPE_11__* FUNC_16 (int ,int ) ;
 int FUNC_17 (char*,...) ;
 int FUNC_18 (TYPE_18__*,int ) ;
 int FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (TYPE_13__*) ;
 scalar_t__ FUNC_21 (TYPE_13__*) ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_12__* FUNC_22 (int ) ;

__attribute__((used)) static int FUNC_23( hb_work_object_t * VAR_16, hb_job_t * VAR_17 )
{

    hb_work_private_t *VAR_18 = FUNC_9( 1, sizeof( hb_work_private_t ) );

    VAR_16->private_data = VAR_18;
    VAR_18->job = VAR_17;
    VAR_18->next_pts = (int64_t)VAR_2;
    if ( VAR_17 )
        VAR_18->title = VAR_17->title;
    else
        VAR_18->title = VAR_16->title;
    if (VAR_18->title->flags & VAR_8)
        VAR_18->next_pts = 0;
    FUNC_11(&VAR_18->list);
    if( VAR_18->job && VAR_18->job->title && !VAR_18->job->title->has_resolution_change )
    {
        VAR_18->threads = VAR_9;
    }
    {
        VAR_18->codec = FUNC_6(VAR_16->codec_param);
    }
    if ( VAR_18->codec == ((void*)0) )
    {
        FUNC_17( "decavcodecvInit: failed to find codec for id (%d)", VAR_16->codec_param );
        return 1;
    }

    VAR_18->context = FUNC_5( VAR_18->codec );
    VAR_18->context->workaround_bugs = VAR_4;
    VAR_18->context->err_recognition = VAR_1;
    VAR_18->context->error_concealment = VAR_6|VAR_5;

    if ( VAR_18->title->opaque_priv )
    {
        AVFormatContext *VAR_19 = (AVFormatContext*)VAR_18->title->opaque_priv;

        FUNC_8(VAR_18->context,
                                  VAR_19->streams[VAR_18->title->video_id]->codecpar);
        AVDictionary * VAR_20 = ((void*)0);
        FUNC_1( &VAR_20, "refcounted_frames", "1", 0 );
        if (VAR_18->title->flags & VAR_7)
        {
            FUNC_1( &VAR_20, "flags", "output_corrupt", 0 );
        }
        if ( FUNC_10( VAR_18->context, VAR_18->codec, &VAR_20, VAR_18->threads ) )
        {
            FUNC_0( &VAR_20 );
            FUNC_17( "decavcodecvInit: avcodec_open failed" );
            return 1;
        }
        VAR_18->context->pkt_timebase.num = VAR_18->title->video_timebase.num;
        VAR_18->context->pkt_timebase.den = VAR_18->title->video_timebase.den;
        FUNC_0( &VAR_20 );

        VAR_18->video_codec_opened = 1;
    }
    else
    {
        VAR_18->parser = FUNC_4( VAR_16->codec_param );
    }

    VAR_18->frame = FUNC_2();
    if (VAR_18->frame == ((void*)0))
    {
        FUNC_17("decavcodecvInit: av_frame_alloc failed");
        return 1;
    }





    if (VAR_17 != ((void*)0) && FUNC_14(VAR_17->list_subtitle) > 0)
    {
        hb_subtitle_t *VAR_21;
        int VAR_22 = 0;

        while ((VAR_21 = FUNC_16(VAR_17->list_subtitle, VAR_22++)) != ((void*)0))
        {
            if (VAR_21->source == VAR_3 &&
                VAR_21->id == VAR_11)
            {
                if (VAR_18->list_subtitle == ((void*)0))
                {
                    VAR_18->list_subtitle = FUNC_15();
                }
                FUNC_13(VAR_18->list_subtitle, VAR_21);
            }
        }
    }
    return 0;
}
