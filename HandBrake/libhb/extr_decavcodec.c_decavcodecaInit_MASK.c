
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_45__ TYPE_9__ ;
typedef struct TYPE_44__ TYPE_8__ ;
typedef struct TYPE_43__ TYPE_7__ ;
typedef struct TYPE_42__ TYPE_6__ ;
typedef struct TYPE_41__ TYPE_5__ ;
typedef struct TYPE_40__ TYPE_4__ ;
typedef struct TYPE_39__ TYPE_3__ ;
typedef struct TYPE_38__ TYPE_2__ ;
typedef struct TYPE_37__ TYPE_1__ ;
typedef struct TYPE_36__ TYPE_16__ ;
typedef struct TYPE_35__ TYPE_15__ ;
typedef struct TYPE_34__ TYPE_14__ ;
typedef struct TYPE_33__ TYPE_13__ ;
typedef struct TYPE_32__ TYPE_12__ ;
typedef struct TYPE_31__ TYPE_11__ ;
typedef struct TYPE_30__ TYPE_10__ ;


typedef scalar_t__ int64_t ;
struct TYPE_45__ {int * frame; TYPE_6__* audio; TYPE_16__* context; int * resample; int parser; TYPE_3__* title; int list; scalar_t__ next_pts; int drop_samples; TYPE_11__* job; } ;
typedef TYPE_9__ hb_work_private_t ;
struct TYPE_30__ {int codec_param; TYPE_6__* audio; TYPE_3__* title; TYPE_9__* private_data; } ;
typedef TYPE_10__ hb_work_object_t ;
struct TYPE_31__ {TYPE_3__* title; } ;
typedef TYPE_11__ hb_job_t ;
typedef int drc_scale ;
struct TYPE_44__ {int codec; int mixdown; float dynamic_range_compression; int track; int normalize_mix_level; } ;
struct TYPE_38__ {int den; int num; } ;
struct TYPE_41__ {scalar_t__ channel_layout; TYPE_2__ timebase; int codec_param; int codec; int samplerate; int encoder_delay; } ;
struct TYPE_43__ {TYPE_5__ in; TYPE_8__ out; } ;
struct TYPE_42__ {size_t id; TYPE_7__ config; } ;
struct TYPE_40__ {int codecpar; } ;
struct TYPE_39__ {int * opaque_priv; } ;
struct TYPE_37__ {int den; int num; } ;
struct TYPE_36__ {int codec_id; TYPE_1__ pkt_timebase; int request_channel_layout; } ;
struct TYPE_35__ {int * priv_class; } ;
struct TYPE_34__ {int key; } ;
struct TYPE_33__ {TYPE_4__** streams; } ;
struct TYPE_32__ {float max; } ;
typedef TYPE_12__ AVOption ;
typedef TYPE_13__ AVFormatContext ;
typedef TYPE_14__ AVDictionaryEntry ;
typedef int AVDictionary ;
typedef TYPE_15__ AVCodec ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;


 int VAR_10 ;
 int FUNC_0 (int **) ;
 TYPE_14__* FUNC_1 (int *,char*,TYPE_14__*,int ) ;
 int FUNC_2 (int **,char*,char*,int ) ;
 int * FUNC_3 () ;
 TYPE_12__* FUNC_4 (void*,char*,int *,int,int ,int *) ;
 int FUNC_5 (int) ;
 TYPE_16__* FUNC_6 (TYPE_15__*) ;
 TYPE_15__* FUNC_7 (int) ;
 int FUNC_8 (TYPE_16__*,int ) ;
 TYPE_9__* FUNC_9 (int,int) ;
 scalar_t__ FUNC_10 (int ,int ,int ) ;
 int * FUNC_11 (int ,int ,int,int ) ;
 scalar_t__ FUNC_12 (TYPE_16__*,TYPE_15__*,int **,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int,int *) ;
 int FUNC_16 (TYPE_16__*,TYPE_15__*,int ) ;
 int FUNC_17 (char*,...) ;
 int FUNC_18 (char*,int,char*,float) ;

__attribute__((used)) static int FUNC_19( hb_work_object_t * VAR_11, hb_job_t * VAR_12 )
{
    AVCodec * VAR_13;

    hb_work_private_t * VAR_14 = FUNC_9( 1, sizeof( hb_work_private_t ) );
    VAR_11->private_data = VAR_14;

    VAR_14->job = VAR_12;
    VAR_14->audio = VAR_11->audio;
    VAR_14->drop_samples = VAR_11->audio->config.in.encoder_delay;
    VAR_14->next_pts = (int64_t)VAR_4;
    if (VAR_12)
        VAR_14->title = VAR_12->title;
    else
        VAR_14->title = VAR_11->title;
    FUNC_13(&VAR_14->list);

    VAR_13 = FUNC_7(VAR_11->codec_param);
    VAR_14->context = FUNC_6(VAR_13);

    if (VAR_14->title->opaque_priv != ((void*)0))
    {
        AVFormatContext *VAR_15 = (AVFormatContext*)VAR_14->title->opaque_priv;
        FUNC_8(VAR_14->context,
                                      VAR_15->streams[VAR_11->audio->id]->codecpar);







        VAR_14->context->codec_id = VAR_11->codec_param;
    }
    else
    {
        VAR_14->parser = FUNC_5(VAR_11->codec_param);
    }
    FUNC_16(VAR_14->context, VAR_13, VAR_8);


    if (!(VAR_11->audio->config.out.codec & VAR_9))
    {




        VAR_14->resample =
            FUNC_11(VAR_8,
                                   VAR_11->audio->config.in.samplerate,
                                   VAR_11->audio->config.out.mixdown,
                                   VAR_11->audio->config.out.normalize_mix_level);
        if (VAR_14->resample == ((void*)0))
        {
            FUNC_14("decavcodecaInit: hb_audio_resample_init() failed");
            return 1;
        }







        int VAR_16 = 0;
        switch (VAR_11->codec_param)
        {
            case 133:
            case 131:
                VAR_16 = VAR_11->audio->config.out.normalize_mix_level != 0;
                break;
            case 132:
                VAR_16 = VAR_11->audio->config.out.normalize_mix_level == 0;
                break;
            case 130:
                VAR_16 = (VAR_11->audio->config.out.normalize_mix_level == 0 ||
                                   VAR_11->audio->config.out.mixdown == VAR_10 ||
                                   VAR_11->audio->config.out.mixdown == 129 ||
                                   VAR_11->audio->config.out.mixdown == 128);
                break;
            default:
                break;
        }
        if (VAR_16)
        {
            switch (VAR_11->audio->config.out.mixdown)
            {

                case 129:
                case 128:
                    VAR_14->context->request_channel_layout = VAR_0;
                    break;

                default:
                    VAR_14->context->request_channel_layout =
                        FUNC_15(VAR_11->audio->config.out.mixdown, ((void*)0));
                    break;
            }
        }
    }



    if (VAR_11->codec_param == 130 &&
        VAR_11->audio->config.in.channel_layout == VAR_1)
    {
        VAR_14->context->request_channel_layout = VAR_2;
    }


    AVDictionary * VAR_17 = ((void*)0);
    FUNC_2( &VAR_17, "refcounted_frames", "1", 0 );


    if (VAR_11->audio->config.out.dynamic_range_compression >= 0.0f &&
        FUNC_10(VAR_11->audio->config.in.codec,
                               VAR_11->audio->config.in.codec_param, 0))
    {
        float VAR_18 = 1.0f;





        if (VAR_13 != ((void*)0) && VAR_13->priv_class != ((void*)0))
        {
            const AVOption *VAR_19;
            VAR_19 = FUNC_4((void*)&VAR_13->priv_class, "drc_scale", ((void*)0),
                               VAR_6|VAR_5,
                               VAR_7, ((void*)0));
            if (VAR_19 != ((void*)0))
            {
                VAR_18 = VAR_19->max;
            }
        }
        if (VAR_11->audio->config.out.dynamic_range_compression > VAR_18)
        {
            FUNC_17("decavcodecaInit: track %d, sanitizing out-of-range DRC %.2f to %.2f",
                   VAR_11->audio->config.out.track,
                   VAR_11->audio->config.out.dynamic_range_compression, VAR_18);
            VAR_11->audio->config.out.dynamic_range_compression = VAR_18;
        }

        char VAR_20[5];
        FUNC_18(VAR_20, sizeof(VAR_20), "%.2f",
                 VAR_11->audio->config.out.dynamic_range_compression);
        FUNC_2(&VAR_17, "drc_scale", VAR_20, 0);
    }

    if (FUNC_12(VAR_14->context, VAR_13, &VAR_17, 0))
    {
        FUNC_0( &VAR_17 );
        FUNC_17("decavcodecaInit: avcodec_open failed");
        return 1;
    }
    VAR_14->context->pkt_timebase.num = VAR_14->audio->config.in.timebase.num;
    VAR_14->context->pkt_timebase.den = VAR_14->audio->config.in.timebase.den;


    AVDictionaryEntry *VAR_21 = ((void*)0);
    while ((VAR_21 = FUNC_1(VAR_17, "", VAR_21, VAR_3)) != ((void*)0))
    {
            FUNC_17("decavcodecaInit: unknown option '%s'", VAR_21->key);
    }
    FUNC_0( &VAR_17 );

    VAR_14->frame = FUNC_3();
    if (VAR_14->frame == ((void*)0))
    {
        FUNC_17("decavcodecaInit: av_frame_alloc failed");
        return 1;
    }

    return 0;
}
