
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_68__ TYPE_9__ ;
typedef struct TYPE_67__ TYPE_8__ ;
typedef struct TYPE_66__ TYPE_7__ ;
typedef struct TYPE_65__ TYPE_6__ ;
typedef struct TYPE_64__ TYPE_5__ ;
typedef struct TYPE_63__ TYPE_4__ ;
typedef struct TYPE_62__ TYPE_3__ ;
typedef struct TYPE_61__ TYPE_2__ ;
typedef struct TYPE_60__ TYPE_1__ ;
typedef struct TYPE_59__ TYPE_19__ ;
typedef struct TYPE_58__ TYPE_18__ ;
typedef struct TYPE_57__ TYPE_17__ ;
typedef struct TYPE_56__ TYPE_16__ ;
typedef struct TYPE_55__ TYPE_15__ ;
typedef struct TYPE_54__ TYPE_14__ ;
typedef struct TYPE_53__ TYPE_13__ ;
typedef struct TYPE_52__ TYPE_12__ ;
typedef struct TYPE_51__ TYPE_11__ ;
typedef struct TYPE_50__ TYPE_10__ ;


struct TYPE_68__ {scalar_t__ context; } ;
typedef TYPE_9__ hb_work_private_t ;
struct TYPE_50__ {scalar_t__ codec_param; TYPE_2__* title; TYPE_13__* audio; TYPE_9__* private_data; } ;
typedef TYPE_10__ hb_work_object_t ;
struct TYPE_60__ {scalar_t__ num; int den; } ;
struct TYPE_51__ {int bitrate; scalar_t__ channel_layout; int mode; int * channel_map; int level; int profile; void* matrix_encoding; TYPE_1__ rate; int sample_bit_depth; int samples_per_frame; int name; } ;
typedef TYPE_11__ hb_work_info_t ;
struct TYPE_67__ {int start; } ;
struct TYPE_52__ {int size; unsigned char* data; struct TYPE_52__* next; TYPE_8__ s; } ;
typedef TYPE_12__ hb_buffer_t ;
struct TYPE_64__ {int den; int num; } ;
struct TYPE_65__ {TYPE_5__ timebase; } ;
struct TYPE_66__ {TYPE_6__ in; } ;
struct TYPE_53__ {size_t id; TYPE_7__ config; } ;
typedef TYPE_13__ hb_audio_t ;
typedef int codec_name ;
struct TYPE_63__ {int den; int num; } ;
struct TYPE_62__ {int codecpar; } ;
struct TYPE_61__ {int * opaque_priv; } ;
struct TYPE_59__ {int id; int name; } ;
struct TYPE_58__ {scalar_t__ codec_id; scalar_t__ channel_layout; scalar_t__ sample_rate; scalar_t__ bit_rate; scalar_t__ audio_service_type; scalar_t__ extradata_size; int level; int profile; int bits_per_raw_sample; scalar_t__ request_channel_layout; TYPE_4__ pkt_timebase; } ;
struct TYPE_57__ {TYPE_3__** streams; } ;
struct TYPE_56__ {scalar_t__ sample_rate; scalar_t__ channel_layout; int channels; int nb_samples; } ;
struct TYPE_55__ {void** data; } ;
struct TYPE_54__ {unsigned char* data; int size; } ;
typedef TYPE_14__ AVPacket ;
typedef TYPE_15__ AVFrameSideData ;
typedef TYPE_16__ AVFrame ;
typedef TYPE_17__ AVFormatContext ;
typedef int AVDictionary ;
typedef int AVCodecParserContext ;
typedef TYPE_18__ AVCodecContext ;
typedef TYPE_19__ AVCodec ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (int **,char*,char*,int ) ;
 TYPE_16__* FUNC_2 () ;
 int FUNC_3 (TYPE_16__**) ;
 TYPE_15__* FUNC_4 (TYPE_16__*,int ) ;
 int FUNC_5 (TYPE_16__*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (TYPE_14__*) ;
 int FUNC_10 (TYPE_14__*) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int ) ;
 int FUNC_13 (int *,TYPE_18__*,unsigned char**,int*,unsigned char*,int,int ,int ,int ) ;
 TYPE_18__* FUNC_14 (TYPE_19__*) ;
 TYPE_19__* FUNC_15 (scalar_t__) ;
 int FUNC_16 (TYPE_18__*,int ) ;
 int FUNC_17 (TYPE_18__*,TYPE_16__*) ;
 int FUNC_18 (TYPE_18__*,TYPE_14__*) ;
 int FUNC_19 (TYPE_10__*,TYPE_11__*) ;
 int FUNC_20 (TYPE_18__**) ;
 scalar_t__ FUNC_21 (TYPE_18__*,TYPE_19__*,int **,int ) ;
 int FUNC_22 (TYPE_18__*,TYPE_19__*,int ) ;
 int VAR_14 ;
 int FUNC_23 (char*) ;
 int FUNC_24 (TYPE_11__*,int ,int) ;
 int FUNC_25 (TYPE_13__*,TYPE_18__*,TYPE_14__*) ;
 int FUNC_26 (char*,int ,int) ;

__attribute__((used)) static int FUNC_27( hb_work_object_t *VAR_15, const hb_buffer_t *VAR_16,
                             hb_work_info_t *VAR_17 )
{
    hb_work_private_t *VAR_18 = VAR_15->private_data;
    int VAR_19 = 0, VAR_20 = 0;
    hb_audio_t *VAR_21 = VAR_15->audio;

    FUNC_24( VAR_17, 0, sizeof(*VAR_17) );

    if ( VAR_18 && VAR_18->context )
    {
        return FUNC_19( VAR_15, VAR_17 );
    }

    AVCodec *VAR_22 = FUNC_15( VAR_15->codec_param );
    if ( ! VAR_22 )
    {

        return -1;
    }

    static char VAR_23[64];
    VAR_17->name = FUNC_26( VAR_23, VAR_22->name, sizeof(VAR_23)-1 );

    AVCodecContext *VAR_24 = FUNC_14(VAR_22);
    AVCodecParserContext *VAR_25 = ((void*)0);

    if (VAR_15->title && VAR_15->title->opaque_priv != ((void*)0))
    {
        AVFormatContext *VAR_26 = (AVFormatContext*)VAR_15->title->opaque_priv;
        FUNC_16(VAR_24,
                                      VAR_26->streams[VAR_21->id]->codecpar);







        VAR_24->codec_id = VAR_15->codec_param;
    }
    else
    {
        VAR_25 = FUNC_12(VAR_22->id);
    }

    FUNC_22( VAR_24, VAR_22, VAR_13 );

    AVDictionary * VAR_27 = ((void*)0);
    FUNC_1( &VAR_27, "err_detect", "crccheck+explode", 0 );
    if ( FUNC_21( VAR_24, VAR_22, &VAR_27, 0 ) )
    {
        FUNC_0( &VAR_27 );
        return -1;
    }
    if (VAR_21 != ((void*)0))
    {
        VAR_24->pkt_timebase.num = VAR_21->config.in.timebase.num;
        VAR_24->pkt_timebase.den = VAR_21->config.in.timebase.den;
    }

    FUNC_0( &VAR_27 );
    unsigned char *VAR_28;
    int VAR_29, VAR_30;

    while (VAR_16 != ((void*)0) && !VAR_20)
    {
        VAR_29 = 0;
        while (VAR_29 < VAR_16->size && !VAR_20)
        {
            int VAR_31, VAR_32 = 0, VAR_33;

            if (VAR_25 != ((void*)0))
            {
                VAR_31 = FUNC_13(VAR_25, VAR_24,
                                &VAR_28, &VAR_30,
                                VAR_16->data + VAR_29, VAR_16->size - VAR_29,
                                VAR_16->s.start, VAR_16->s.start, 0);
            }
            else
            {
                VAR_28 = VAR_16->data + VAR_29;
                VAR_31 = VAR_30 = VAR_16->size - VAR_29;
            }

            if (VAR_30 == 0)
            {
                VAR_29 += VAR_31;
                continue;
            }



            if (VAR_24->codec_id == VAR_8 &&
                VAR_24->channel_layout == VAR_2)
            {
                VAR_32 = 1;
                VAR_24->request_channel_layout = VAR_3;
            }
            else
            {
                VAR_24->request_channel_layout = 0;
            }

            AVPacket VAR_34;
            FUNC_9(&VAR_34);
            VAR_34.data = VAR_28;
            VAR_34.size = VAR_30;

            VAR_33 = FUNC_18(VAR_24, &VAR_34);
            if (VAR_33 < 0 && VAR_33 != VAR_0)
            {
                VAR_29 += VAR_31;
                FUNC_10(&VAR_34);
                continue;
            }

            AVFrame *VAR_35 = ((void*)0);
            do
            {
                if (VAR_35 == ((void*)0))
                {
                    VAR_35 = FUNC_2();
                }
                VAR_33 = FUNC_17(VAR_24, VAR_35);
                if (VAR_33 >= 0)
                {

                    if (VAR_35->sample_rate != 0)
                    {
                        VAR_17->rate.num = VAR_35->sample_rate;
                    }
                    else
                    {
                        VAR_17->rate.num = VAR_24->sample_rate;
                        FUNC_23("decavcodecaBSInfo: warning: invalid frame sample_rate! Using context sample_rate.");
                    }
                    VAR_17->rate.den = 1;
                    VAR_17->samples_per_frame = VAR_35->nb_samples;
                    VAR_17->sample_bit_depth = VAR_24->bits_per_raw_sample;

                    int VAR_36 = FUNC_6(VAR_24->codec_id);
                    int VAR_37;
                    if (VAR_35->channel_layout != 0)
                    {
                        VAR_37 = FUNC_7(
                                                        VAR_35->channel_layout);
                    }
                    else
                    {
                        VAR_37 = VAR_35->channels;
                    }

                    VAR_17->bitrate = VAR_36 * VAR_37 * VAR_17->rate.num;
                    if (VAR_17->bitrate <= 0)
                    {
                        if (VAR_24->bit_rate > 0)
                        {
                            VAR_17->bitrate = VAR_24->bit_rate;
                        }
                        else
                        {
                            VAR_17->bitrate = 1;
                        }
                    }

                    if (VAR_32)
                    {
                        VAR_17->channel_layout = VAR_2;
                        VAR_17->matrix_encoding = VAR_12;
                    }
                    else
                    {
                        AVFrameSideData *VAR_38;
                        if ((VAR_38 =
                             FUNC_4(VAR_35,
                                                    VAR_9)) != ((void*)0))
                        {
                            VAR_17->matrix_encoding = *VAR_38->data;
                        }
                        else
                        {
                            VAR_17->matrix_encoding = VAR_12;
                        }
                        if (VAR_17->matrix_encoding == VAR_10 ||
                            VAR_17->matrix_encoding == VAR_11)
                        {
                            VAR_17->channel_layout = VAR_4;
                        }
                        else
                        {
                            VAR_17->channel_layout = VAR_35->channel_layout;
                        }
                    }
                    if (VAR_17->channel_layout == 0)
                    {


                        VAR_17->channel_layout = FUNC_8(
                                                            VAR_35->channels);
                    }
                    if (VAR_24->codec_id == VAR_6 ||
                        VAR_24->codec_id == VAR_7)
                    {
                        if (VAR_24->audio_service_type == VAR_1)
                        {
                            VAR_17->mode = 7;
                        }
                        else
                        {
                            VAR_17->mode = VAR_24->audio_service_type;
                        }
                    }
                    else if (VAR_24->codec_id == VAR_5 &&
                             VAR_24->extradata_size == 0)
                    {



                        FUNC_25(VAR_21, VAR_24, &VAR_34);
                    }

                    VAR_19 = 1;
                    VAR_20 = 1;
                    FUNC_5(VAR_35);
                    break;
                }
            } while (VAR_33 >= 0);
            FUNC_10(&VAR_34);
            FUNC_3(&VAR_35);
            VAR_29 += VAR_31;
        }
        VAR_16 = VAR_16->next;
    }

    VAR_17->profile = VAR_24->profile;
    VAR_17->level = VAR_24->level;
    VAR_17->channel_map = &VAR_14;

    if ( VAR_25 != ((void*)0) )
        FUNC_11( VAR_25 );
    FUNC_20(&VAR_24);
    return VAR_19;
}
