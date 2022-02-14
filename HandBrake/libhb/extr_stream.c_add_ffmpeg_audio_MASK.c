
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_9__ ;
typedef struct TYPE_38__ TYPE_8__ ;
typedef struct TYPE_37__ TYPE_7__ ;
typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;
typedef struct TYPE_30__ TYPE_15__ ;
typedef struct TYPE_29__ TYPE_14__ ;
typedef struct TYPE_28__ TYPE_13__ ;
typedef struct TYPE_27__ TYPE_12__ ;
typedef struct TYPE_26__ TYPE_11__ ;
typedef struct TYPE_25__ TYPE_10__ ;


struct TYPE_39__ {int iso639_2; } ;
typedef TYPE_9__ iso639_lang_t ;
struct TYPE_25__ {int list_audio; } ;
typedef TYPE_10__ hb_title_t ;
struct TYPE_26__ {TYPE_1__* ffmpeg_ic; } ;
typedef TYPE_11__ hb_stream_t ;
struct TYPE_32__ {int num; int den; } ;
struct TYPE_37__ {int track; int codec_param; int name; int codec; TYPE_2__ timebase; int encoder_delay; scalar_t__ bitrate; } ;
struct TYPE_36__ {int attributes; } ;
struct TYPE_38__ {TYPE_7__ in; TYPE_6__ lang; } ;
struct TYPE_33__ {int length; int bytes; } ;
struct TYPE_34__ {TYPE_3__ extradata; } ;
struct TYPE_35__ {TYPE_4__ config; } ;
struct TYPE_27__ {int id; TYPE_8__ config; TYPE_5__ priv; } ;
typedef TYPE_12__ hb_audio_t ;
struct TYPE_31__ {TYPE_13__** streams; } ;
struct TYPE_30__ {int codec_id; int extradata; int extradata_size; int profile; int initial_padding; } ;
struct TYPE_29__ {char* value; } ;
struct TYPE_28__ {int disposition; int metadata; TYPE_15__* codecpar; } ;
typedef TYPE_13__ AVStream ;
typedef TYPE_14__ AVDictionaryEntry ;
typedef TYPE_15__ AVCodecParameters ;
 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ) ;
 TYPE_14__* FUNC_1 (int ,char*,int *,int ) ;
 TYPE_12__* FUNC_2 (int,int) ;
 char* FUNC_3 (TYPE_13__*,int ) ;
 int FUNC_4 (int ,TYPE_12__*) ;
 TYPE_9__* FUNC_5 (char*) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (TYPE_12__*,TYPE_9__*) ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static void FUNC_9(hb_title_t *VAR_12, hb_stream_t *VAR_13, int VAR_14)
{
    AVStream *VAR_15 = VAR_13->ffmpeg_ic->streams[VAR_14];
    AVCodecParameters * VAR_16 = VAR_15->codecpar;
    AVDictionaryEntry * VAR_17 = FUNC_1(VAR_15->metadata, "language", ((void*)0), 0);
    iso639_lang_t * VAR_18 = FUNC_5(VAR_17 != ((void*)0) ?
                                              VAR_17->value : "und");
    const char * VAR_19 = FUNC_3(VAR_15, VAR_18->iso639_2);

    hb_audio_t *VAR_20 = FUNC_2(1, sizeof(*VAR_20));
    VAR_20->id = VAR_14;
    VAR_20->config.in.track = VAR_14;
    VAR_20->config.in.codec = VAR_7;
    VAR_20->config.in.codec_param = VAR_16->codec_id;

    VAR_20->config.in.bitrate = 0;
    VAR_20->config.in.encoder_delay = VAR_16->initial_padding;




    VAR_20->config.in.timebase.num = 1;
    VAR_20->config.in.timebase.den = 90000;


    switch (VAR_16->codec_id)
    {
        case 139:
        {
            int VAR_21 = FUNC_0(VAR_16->extradata_size, VAR_11);
            FUNC_6(VAR_20->priv.config.extradata.bytes, VAR_16->extradata, VAR_21);
            VAR_20->priv.config.extradata.length = VAR_21;
            VAR_20->config.in.codec = VAR_4;
        } break;

        case 138:
            VAR_20->config.in.codec = VAR_1;
            break;

        case 136:
            VAR_20->config.in.codec = VAR_5;
            break;

        case 133:
            VAR_20->config.in.codec = VAR_8;
            break;

        case 137:
        {
            switch (VAR_16->profile)
            {
                case 132:
                case 130:
                case 131:
                    VAR_20->config.in.codec = VAR_2;
                    break;

                case 128:
                case 129:
                    VAR_20->config.in.codec = VAR_3;
                    break;

                default:
                    break;
            }
        } break;

        case 135:
        {
            int VAR_22 = FUNC_0(VAR_16->extradata_size, VAR_11);
            FUNC_6(VAR_20->priv.config.extradata.bytes, VAR_16->extradata, VAR_22);
            VAR_20->priv.config.extradata.length = VAR_22;
            VAR_20->config.in.codec = VAR_6;
        } break;

        case 134:
            VAR_20->config.in.codec = VAR_9;
            break;

        default:
            break;
    }

    if (VAR_15->disposition & VAR_0)
    {
        VAR_20->config.lang.attributes |= VAR_10;
    }

    FUNC_7(VAR_20, VAR_18);
    if (VAR_19 != ((void*)0))
    {
        VAR_20->config.in.name = FUNC_8(VAR_19);
    }
    FUNC_4(VAR_12->list_audio, VAR_20);
}
