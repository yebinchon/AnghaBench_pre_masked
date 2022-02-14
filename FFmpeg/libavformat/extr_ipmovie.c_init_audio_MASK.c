
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* priv_data; } ;
struct TYPE_11__ {TYPE_1__* codecpar; int index; } ;
struct TYPE_10__ {int audio_sample_rate; scalar_t__ audio_type; int audio_channels; int audio_bits; int audio_stream_index; } ;
struct TYPE_9__ {scalar_t__ codec_id; int channels; int sample_rate; int bits_per_coded_sample; int bit_rate; int block_align; int channel_layout; scalar_t__ codec_tag; int codec_type; } ;
typedef TYPE_2__ IPMVEContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_1 (TYPE_4__*,int *) ;
 int FUNC_2 (TYPE_3__*,int,int,int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_5)
{
    IPMVEContext *VAR_6 = VAR_5->priv_data;
    AVStream *VAR_7 = FUNC_1(VAR_5, ((void*)0));
    if (!VAR_7)
        return FUNC_0(VAR_4);
    FUNC_2(VAR_7, 32, 1, VAR_6->audio_sample_rate);
    VAR_6->audio_stream_index = VAR_7->index;
    VAR_7->codecpar->codec_type = VAR_0;
    VAR_7->codecpar->codec_id = VAR_6->audio_type;
    VAR_7->codecpar->codec_tag = 0;
    VAR_7->codecpar->channels = VAR_6->audio_channels;
    VAR_7->codecpar->channel_layout = VAR_7->codecpar->channels == 1 ? VAR_1 :
                                                            VAR_2;
    VAR_7->codecpar->sample_rate = VAR_6->audio_sample_rate;
    VAR_7->codecpar->bits_per_coded_sample = VAR_6->audio_bits;
    VAR_7->codecpar->bit_rate = VAR_7->codecpar->channels * VAR_7->codecpar->sample_rate *
        VAR_7->codecpar->bits_per_coded_sample;
    if (VAR_7->codecpar->codec_id == VAR_3)
        VAR_7->codecpar->bit_rate /= 2;
    VAR_7->codecpar->block_align = VAR_7->codecpar->channels * VAR_7->codecpar->bits_per_coded_sample;

    return 0;
}
