
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int * pb; TYPE_2__* priv_data; } ;
struct TYPE_14__ {TYPE_1__* codecpar; int index; scalar_t__ start_time; } ;
struct TYPE_13__ {int audio_stream_index; int video_stream_index; scalar_t__ audio_buffer_full; scalar_t__ current_frame_pts; scalar_t__ current_frame_offs; } ;
struct TYPE_12__ {int channels; int sample_rate; int bits_per_coded_sample; int bit_rate; int block_align; int channel_layout; scalar_t__ codec_tag; int codec_id; int codec_type; int height; int width; } ;
typedef TYPE_2__ SeqDemuxContext ;
typedef TYPE_3__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


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
 int VAR_9 ;
 TYPE_3__* FUNC_1 (TYPE_4__*,int *) ;
 int FUNC_2 (TYPE_3__*,int,int,int) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_10)
{
    int VAR_11, VAR_12;
    SeqDemuxContext *VAR_13 = VAR_10->priv_data;
    AVIOContext *VAR_14 = VAR_10->pb;
    AVStream *VAR_15;


    VAR_12 = FUNC_3(VAR_13, VAR_14);
    if (VAR_12) {
        FUNC_5(VAR_10);
        return VAR_12;
    }

    VAR_13->current_frame_offs = 0;


    for (VAR_11 = 1; VAR_11 <= 100; VAR_11++) {
        VAR_12 = FUNC_4(VAR_13, VAR_14);
        if (VAR_12) {
            FUNC_5(VAR_10);
            return VAR_12;
        }
    }

    VAR_13->current_frame_pts = 0;

    VAR_13->audio_buffer_full = 0;


    VAR_15 = FUNC_1(VAR_10, ((void*)0));
    if (!VAR_15) {
        FUNC_5(VAR_10);
        return FUNC_0(VAR_5);
    }

    FUNC_2(VAR_15, 32, 1, VAR_7);
    VAR_13->video_stream_index = VAR_15->index;
    VAR_15->codecpar->codec_type = VAR_1;
    VAR_15->codecpar->codec_id = VAR_4;
    VAR_15->codecpar->codec_tag = 0;
    VAR_15->codecpar->width = VAR_8;
    VAR_15->codecpar->height = VAR_6;


    VAR_15 = FUNC_1(VAR_10, ((void*)0));
    if (!VAR_15) {
        FUNC_5(VAR_10);
        return FUNC_0(VAR_5);
    }

    VAR_15->start_time = 0;
    FUNC_2(VAR_15, 32, 1, VAR_9);
    VAR_13->audio_stream_index = VAR_15->index;
    VAR_15->codecpar->codec_type = VAR_0;
    VAR_15->codecpar->codec_id = VAR_3;
    VAR_15->codecpar->codec_tag = 0;
    VAR_15->codecpar->channels = 1;
    VAR_15->codecpar->channel_layout = VAR_2;
    VAR_15->codecpar->sample_rate = VAR_9;
    VAR_15->codecpar->bits_per_coded_sample = 16;
    VAR_15->codecpar->bit_rate = VAR_15->codecpar->sample_rate * VAR_15->codecpar->bits_per_coded_sample * VAR_15->codecpar->channels;
    VAR_15->codecpar->block_align = VAR_15->codecpar->channels * VAR_15->codecpar->bits_per_coded_sample / 8;

    return 0;
}
