
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_15__ {TYPE_2__* priv_data; } ;
struct TYPE_14__ {scalar_t__ start_time; int index; TYPE_1__* codecpar; } ;
struct TYPE_13__ {int num_channels; int sample_rate; int bytes; int audio_stream_index; scalar_t__ audio_codec; int alpha; int video; } ;
struct TYPE_12__ {int channels; int sample_rate; int bits_per_coded_sample; int bit_rate; int block_align; scalar_t__ codec_tag; scalar_t__ codec_id; int codec_type; } ;
typedef TYPE_2__ EaDemuxContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_4__*,int ,char*,int) ;
 TYPE_3__* FUNC_2 (TYPE_4__*,int *) ;
 int FUNC_3 (TYPE_3__*,int,int,int) ;
 scalar_t__ FUNC_4 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_6)
{
    EaDemuxContext *VAR_7 = VAR_6->priv_data;
    AVStream *VAR_8;

    if (FUNC_5(VAR_6)<=0)
        return FUNC_0(VAR_4);

    if (FUNC_4(VAR_6, &VAR_7->video) || FUNC_4(VAR_6, &VAR_7->alpha))
        return FUNC_0(VAR_5);

    if (VAR_7->audio_codec) {
        if (VAR_7->num_channels <= 0 || VAR_7->num_channels > 2) {
            FUNC_1(VAR_6, VAR_3,
                   "Unsupported number of channels: %d\n", VAR_7->num_channels);
            VAR_7->audio_codec = 0;
            return 1;
        }
        if (VAR_7->sample_rate <= 0) {
            FUNC_1(VAR_6, VAR_2,
                   "Unsupported sample rate: %d\n", VAR_7->sample_rate);
            VAR_7->audio_codec = 0;
            return 1;
        }
        if (VAR_7->bytes <= 0 || VAR_7->bytes > 2) {
            FUNC_1(VAR_6, VAR_2,
                   "Invalid number of bytes per sample: %d\n", VAR_7->bytes);
            VAR_7->audio_codec = VAR_1;
            return 1;
        }


        VAR_8 = FUNC_2(VAR_6, ((void*)0));
        if (!VAR_8)
            return FUNC_0(VAR_5);
        FUNC_3(VAR_8, 33, 1, VAR_7->sample_rate);
        VAR_8->codecpar->codec_type = VAR_0;
        VAR_8->codecpar->codec_id = VAR_7->audio_codec;
        VAR_8->codecpar->codec_tag = 0;
        VAR_8->codecpar->channels = VAR_7->num_channels;
        VAR_8->codecpar->sample_rate = VAR_7->sample_rate;
        VAR_8->codecpar->bits_per_coded_sample = VAR_7->bytes * 8;
        VAR_8->codecpar->bit_rate = (int64_t)VAR_8->codecpar->channels *
                                              VAR_8->codecpar->sample_rate *
                                              VAR_8->codecpar->bits_per_coded_sample / 4;
        VAR_8->codecpar->block_align = VAR_8->codecpar->channels *
                                              VAR_8->codecpar->bits_per_coded_sample;
        VAR_7->audio_stream_index = VAR_8->index;
        VAR_8->start_time = 0;
    }

    return 1;
}
