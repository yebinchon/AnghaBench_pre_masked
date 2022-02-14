
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_14__ {int * pb; TYPE_2__* priv_data; } ;
struct TYPE_13__ {int nb_frames; int duration; TYPE_1__* codecpar; scalar_t__ start_time; } ;
struct TYPE_12__ {int nb_frames; int buffer_size; int preload_count; int frame_blks; int start_offset; int max_video_blks; int max_audio_blks; int video_size; int audio_size; scalar_t__ current_frame_block; scalar_t__ current_frame; scalar_t__ got_audio; void* blocks_offset_table; void* frames_offset_table; void* blocks_count_table; void* temp_audio_frame; void* audio_frame; void* video_frame; } ;
struct TYPE_11__ {int channels; int sample_rate; int channel_layout; int codec_id; scalar_t__ codec_tag; int codec_type; void* height; void* width; } ;
typedef TYPE_2__ PAFDemuxContext ;
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
 void* FUNC_1 (int) ;
 TYPE_3__* FUNC_2 (TYPE_4__*,int ) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (TYPE_3__*,int,int,int) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*,void*,int) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_9)
{
    PAFDemuxContext *VAR_10 = VAR_9->priv_data;
    AVIOContext *VAR_11 = VAR_9->pb;
    AVStream *VAR_12, *VAR_13;
    int VAR_14 = 0;

    FUNC_5(VAR_11, 132);

    VAR_13 = FUNC_2(VAR_9, 0);
    if (!VAR_13)
        return FUNC_0(VAR_6);

    VAR_13->start_time = 0;
    VAR_13->nb_frames =
    VAR_13->duration =
    VAR_10->nb_frames = FUNC_3(VAR_11);
    FUNC_5(VAR_11, 4);

    VAR_13->codecpar->width = FUNC_3(VAR_11);
    VAR_13->codecpar->height = FUNC_3(VAR_11);
    FUNC_5(VAR_11, 4);

    VAR_13->codecpar->codec_type = VAR_2;
    VAR_13->codecpar->codec_tag = 0;
    VAR_13->codecpar->codec_id = VAR_5;
    FUNC_6(VAR_13, 64, 1, 10);

    VAR_12 = FUNC_2(VAR_9, 0);
    if (!VAR_12)
        return FUNC_0(VAR_6);

    VAR_12->start_time = 0;
    VAR_12->codecpar->codec_type = VAR_1;
    VAR_12->codecpar->codec_tag = 0;
    VAR_12->codecpar->codec_id = VAR_4;
    VAR_12->codecpar->channels = 2;
    VAR_12->codecpar->channel_layout = VAR_3;
    VAR_12->codecpar->sample_rate = 22050;
    FUNC_6(VAR_12, 64, 1, 22050);

    VAR_10->buffer_size = FUNC_3(VAR_11);
    VAR_10->preload_count = FUNC_3(VAR_11);
    VAR_10->frame_blks = FUNC_3(VAR_11);
    VAR_10->start_offset = FUNC_3(VAR_11);
    VAR_10->max_video_blks = FUNC_3(VAR_11);
    VAR_10->max_audio_blks = FUNC_3(VAR_11);
    if (VAR_10->buffer_size < 175 ||
        VAR_10->max_audio_blks < 2 ||
        VAR_10->max_video_blks < 1 ||
        VAR_10->frame_blks < 1 ||
        VAR_10->nb_frames < 1 ||
        VAR_10->preload_count < 1 ||
        VAR_10->buffer_size > 2048 ||
        VAR_10->max_video_blks > 2048 ||
        VAR_10->max_audio_blks > 2048 ||
        VAR_10->nb_frames > VAR_7 / sizeof(uint32_t) ||
        VAR_10->frame_blks > VAR_7 / sizeof(uint32_t))
        return VAR_0;

    VAR_10->blocks_count_table = FUNC_1(VAR_10->nb_frames *
                                        sizeof(*VAR_10->blocks_count_table));
    VAR_10->frames_offset_table = FUNC_1(VAR_10->nb_frames *
                                        sizeof(*VAR_10->frames_offset_table));
    VAR_10->blocks_offset_table = FUNC_1(VAR_10->frame_blks *
                                        sizeof(*VAR_10->blocks_offset_table));

    VAR_10->video_size = VAR_10->max_video_blks * VAR_10->buffer_size;
    VAR_10->video_frame = FUNC_1(VAR_10->video_size);

    VAR_10->audio_size = VAR_10->max_audio_blks * VAR_10->buffer_size;
    VAR_10->audio_frame = FUNC_1(VAR_10->audio_size);
    VAR_10->temp_audio_frame = FUNC_1(VAR_10->audio_size);

    if (!VAR_10->blocks_count_table ||
        !VAR_10->frames_offset_table ||
        !VAR_10->blocks_offset_table ||
        !VAR_10->video_frame ||
        !VAR_10->audio_frame ||
        !VAR_10->temp_audio_frame) {
        VAR_14 = FUNC_0(VAR_6);
        goto fail;
    }

    FUNC_4(VAR_11, VAR_10->buffer_size, VAR_8);

    FUNC_8(VAR_9, VAR_10->blocks_count_table, VAR_10->nb_frames);
    FUNC_8(VAR_9, VAR_10->frames_offset_table, VAR_10->nb_frames);
    FUNC_8(VAR_9, VAR_10->blocks_offset_table, VAR_10->frame_blks);

    VAR_10->got_audio = 0;
    VAR_10->current_frame = 0;
    VAR_10->current_frame_block = 0;

    FUNC_4(VAR_11, VAR_10->start_offset, VAR_8);

    return 0;

fail:
    FUNC_7(VAR_9);

    return VAR_14;
}
