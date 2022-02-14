
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int * pb; TYPE_2__* priv_data; } ;
struct TYPE_14__ {int num; int den; } ;
struct TYPE_13__ {TYPE_1__* codecpar; } ;
struct TYPE_12__ {int audio_chunk_size; unsigned int video_chunk_size; int padding; } ;
struct TYPE_11__ {int sample_rate; int channels; int bits_per_coded_sample; int bit_rate; unsigned int width; unsigned int height; int format; int codec_id; int codec_type; int channel_layout; } ;
typedef TYPE_2__ TMVContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVRational ;
typedef int AVIOContext ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (TYPE_5__*,int ,char*,...) ;
 int FUNC_2 (int*,int*,int,int,int) ;
 TYPE_3__* FUNC_3 (TYPE_5__*,int *) ;
 unsigned int FUNC_4 (int *) ;
 void* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*,int,int,int) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_12)
{
    TMVContext *VAR_13 = VAR_12->priv_data;
    AVIOContext *VAR_14 = VAR_12->pb;
    AVStream *VAR_15, *VAR_16;
    AVRational VAR_17;
    unsigned VAR_18, VAR_19, VAR_20, VAR_21;

    if (FUNC_6(VAR_14) != VAR_11)
        return -1;

    if (!(VAR_15 = FUNC_3(VAR_12, ((void*)0))))
        return FUNC_0(VAR_8);

    if (!(VAR_16 = FUNC_3(VAR_12, ((void*)0))))
        return FUNC_0(VAR_8);

    VAR_16->codecpar->sample_rate = FUNC_5(VAR_14);
    if (!VAR_16->codecpar->sample_rate) {
        FUNC_1(VAR_12, VAR_6, "invalid sample rate\n");
        return -1;
    }

    VAR_13->audio_chunk_size = FUNC_5(VAR_14);
    if (!VAR_13->audio_chunk_size) {
        FUNC_1(VAR_12, VAR_6, "invalid audio chunk size\n");
        return -1;
    }

    VAR_18 = FUNC_4(VAR_14);
    if (VAR_18) {
        FUNC_1(VAR_12, VAR_6, "unsupported compression method %d\n",
               VAR_18);
        return -1;
    }

    VAR_19 = FUNC_4(VAR_14);
    VAR_20 = FUNC_4(VAR_14);
    VAR_13->video_chunk_size = VAR_19 * VAR_20 * 2;

    VAR_21 = FUNC_4(VAR_14);
    if (VAR_21 & ~(VAR_9 | VAR_10)) {
        FUNC_1(VAR_12, VAR_6, "unsupported features 0x%02x\n",
               VAR_21 & ~(VAR_9 | VAR_10));
        return -1;
    }

    VAR_16->codecpar->codec_type = VAR_0;
    VAR_16->codecpar->codec_id = VAR_4;
    if (VAR_21 & VAR_10) {
        VAR_16->codecpar->channels = 2;
        VAR_16->codecpar->channel_layout = VAR_3;
    } else {
        VAR_16->codecpar->channels = 1;
        VAR_16->codecpar->channel_layout = VAR_2;
    }
    VAR_16->codecpar->bits_per_coded_sample = 8;
    VAR_16->codecpar->bit_rate = VAR_16->codecpar->sample_rate *
                                           VAR_16->codecpar->bits_per_coded_sample;
    FUNC_7(VAR_16, 32, 1, VAR_16->codecpar->sample_rate);

    VAR_17.num = VAR_16->codecpar->sample_rate * VAR_16->codecpar->channels;
    VAR_17.den = VAR_13->audio_chunk_size;
    FUNC_2(&VAR_17.num, &VAR_17.den, VAR_17.num, VAR_17.den, 0xFFFFFFFFLL);

    VAR_15->codecpar->codec_type = VAR_1;
    VAR_15->codecpar->codec_id = VAR_5;
    VAR_15->codecpar->format = VAR_7;
    VAR_15->codecpar->width = VAR_19 * 8;
    VAR_15->codecpar->height = VAR_20 * 8;
    FUNC_7(VAR_15, 32, VAR_17.den, VAR_17.num);

    if (VAR_21 & VAR_9)
        VAR_13->padding =
            ((VAR_13->video_chunk_size + VAR_13->audio_chunk_size + 511) & ~511) -
             (VAR_13->video_chunk_size + VAR_13->audio_chunk_size);

    VAR_15->codecpar->bit_rate = ((VAR_13->video_chunk_size + VAR_13->padding) *
                               VAR_17.num * 8) / VAR_17.den;

    return 0;
}
