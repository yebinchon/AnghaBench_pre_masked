
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_26__ {int pb; TYPE_3__** streams; TYPE_5__* priv_data; } ;
struct TYPE_25__ {int stream_index; int duration; int pos; int pts; int flags; } ;
struct TYPE_19__ {int den; int num; } ;
struct TYPE_24__ {int index; TYPE_4__* priv_data; TYPE_2__* codecpar; TYPE_1__ avg_frame_rate; } ;
struct TYPE_23__ {int type; int video_stream_index; int video_codec; int audio_stream_index; int audio_codec; int last_good_pos; int sample_rate; int audio_channels; int frame_rate; int height; int width; } ;
struct TYPE_22__ {void* last_timestamp; } ;
struct TYPE_21__ {int priv_data; } ;
struct TYPE_20__ {int sample_rate; int channels; void* codec_id; int codec_type; int height; int width; } ;
typedef TYPE_4__ DHAVStream ;
typedef TYPE_5__ DHAVContext ;
typedef TYPE_6__ AVStream ;
typedef TYPE_7__ AVPacket ;
typedef TYPE_8__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_1 (char,char,char,char) ;
 int FUNC_2 (int ,TYPE_7__*,int) ;
 TYPE_4__* FUNC_3 (int) ;
 TYPE_6__* FUNC_4 (TYPE_8__*,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (TYPE_8__*,char*,int) ;
 int FUNC_8 (TYPE_6__*,int,int,int) ;
 int FUNC_9 (TYPE_8__*,int ) ;
 int FUNC_10 (TYPE_8__*) ;

__attribute__((used)) static int FUNC_11(AVFormatContext *VAR_17, AVPacket *VAR_18)
{
    DHAVContext *VAR_19 = VAR_17->priv_data;
    int VAR_20, VAR_21;

retry:
    while ((VAR_20 = FUNC_10(VAR_17)) == 0)
        ;

    if (VAR_20 < 0)
        return VAR_20;

    if (VAR_19->type == 0xfd && VAR_19->video_stream_index == -1) {
        AVStream *VAR_22 = FUNC_4(VAR_17, ((void*)0));
        DHAVStream *VAR_23;

        if (!VAR_22)
            return FUNC_0(VAR_16);

        VAR_22->codecpar->codec_type = VAR_1;
        switch (VAR_19->video_codec) {
        case 0x1: VAR_22->codecpar->codec_id = VAR_9; break;
        case 0x3: VAR_22->codecpar->codec_id = VAR_6; break;
        case 0x2:
        case 0x4:
        case 0x8: VAR_22->codecpar->codec_id = VAR_4; break;
        case 0xc: VAR_22->codecpar->codec_id = VAR_5; break;
        default: FUNC_7(VAR_17, "Unknown video codec %X\n", VAR_19->video_codec);
        }
        VAR_22->codecpar->width = VAR_19->width;
        VAR_22->codecpar->height = VAR_19->height;
        VAR_22->avg_frame_rate.num = VAR_19->frame_rate;
        VAR_22->avg_frame_rate.den = 1;
        VAR_22->priv_data = VAR_23 = FUNC_3(sizeof(DHAVStream));
        if (!VAR_22->priv_data)
            return FUNC_0(VAR_16);
        VAR_23->last_timestamp = VAR_14;
        VAR_19->video_stream_index = VAR_22->index;

        FUNC_8(VAR_22, 64, 1, 1000);
    } else if (VAR_19->type == 0xf0 && VAR_19->audio_stream_index == -1) {
        AVStream *VAR_24 = FUNC_4(VAR_17, ((void*)0));
        DHAVStream *VAR_25;

        if (!VAR_24)
            return FUNC_0(VAR_16);

        VAR_24->codecpar->codec_type = VAR_0;
        switch (VAR_19->audio_codec) {
        case 0x07: VAR_24->codecpar->codec_id = VAR_13; break;
        case 0x0c: VAR_24->codecpar->codec_id = VAR_12; break;
        case 0x10: VAR_24->codecpar->codec_id = VAR_12; break;
        case 0x0a: VAR_24->codecpar->codec_id = VAR_11; break;
        case 0x16: VAR_24->codecpar->codec_id = VAR_11; break;
        case 0x0e: VAR_24->codecpar->codec_id = VAR_10; break;
        case 0x1a: VAR_24->codecpar->codec_id = VAR_2; break;
        case 0x1f: VAR_24->codecpar->codec_id = VAR_7; break;
        case 0x21: VAR_24->codecpar->codec_id = VAR_8; break;
        case 0x0d: VAR_24->codecpar->codec_id = VAR_3; break;
        default: FUNC_7(VAR_17, "Unknown audio codec %X\n", VAR_19->audio_codec);
        }
        VAR_24->codecpar->channels = VAR_19->audio_channels;
        VAR_24->codecpar->sample_rate = VAR_19->sample_rate;
        VAR_24->priv_data = VAR_25 = FUNC_3(sizeof(DHAVStream));
        if (!VAR_24->priv_data)
            return FUNC_0(VAR_16);
        VAR_25->last_timestamp = VAR_14;
        VAR_19->audio_stream_index = VAR_24->index;

        FUNC_8(VAR_24, 64, 1, 1000);
    }

    VAR_21 = VAR_19->type == 0xf0 ? VAR_19->audio_stream_index : VAR_19->video_stream_index;
    if (VAR_21 < 0) {
        FUNC_6(VAR_17->pb, VAR_20);
        if (FUNC_5(VAR_17->pb) == FUNC_1('d','h','a','v'))
            FUNC_6(VAR_17->pb, 4);
        goto retry;
    }

    VAR_20 = FUNC_2(VAR_17->pb, VAR_18, VAR_20);
    if (VAR_20 < 0)
        return VAR_20;
    VAR_18->stream_index = VAR_21;
    if (VAR_19->type != 0xfc)
        VAR_18->flags |= VAR_15;
    if (VAR_18->stream_index >= 0)
        VAR_18->pts = FUNC_9(VAR_17, VAR_17->streams[VAR_18->stream_index]->priv_data);
    VAR_18->duration = 1;
    VAR_18->pos = VAR_19->last_good_pos;
    if (FUNC_5(VAR_17->pb) == FUNC_1('d','h','a','v'))
        FUNC_6(VAR_17->pb, 4);

    return VAR_20;
}
