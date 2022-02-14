
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {int * pb; TYPE_1__* priv_data; } ;
struct TYPE_8__ {int* data; int duration; int stream_index; int size; int flags; } ;
struct TYPE_7__ {int current_frame; int nb_frames; int got_audio; int audio_size; int* temp_audio_frame; int preload_count; int* blocks_count_table; size_t current_frame_block; size_t frame_blks; unsigned int* blocks_offset_table; int buffer_size; int* audio_frame; int max_audio_blks; int video_size; int* video_frame; int* frames_offset_table; } ;
typedef TYPE_1__ PAFDemuxContext ;
typedef TYPE_2__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int*,int) ;
 int FUNC_4 (int*,int*,int) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_6, AVPacket *VAR_7)
{
    PAFDemuxContext *VAR_8 = VAR_6->priv_data;
    AVIOContext *VAR_9 = VAR_6->pb;
    uint32_t VAR_10, VAR_11;
    int VAR_12, VAR_13;

    if (VAR_8->current_frame >= VAR_8->nb_frames)
        return VAR_0;

    if (FUNC_2(VAR_9))
        return VAR_0;

    if (VAR_8->got_audio) {
        if (FUNC_1(VAR_7, VAR_8->audio_size) < 0)
            return FUNC_0(VAR_3);

        FUNC_4(VAR_7->data, VAR_8->temp_audio_frame, VAR_8->audio_size);
        VAR_7->duration = VAR_5 * (VAR_8->audio_size / VAR_4);
        VAR_7->flags |= VAR_2;
        VAR_7->stream_index = 1;
        VAR_8->got_audio = 0;
        return VAR_7->size;
    }

    VAR_10 = (VAR_8->current_frame == 0) ? VAR_8->preload_count
                                    : VAR_8->blocks_count_table[VAR_8->current_frame - 1];
    for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
        if (VAR_8->current_frame_block >= VAR_8->frame_blks)
            return VAR_1;

        VAR_11 = VAR_8->blocks_offset_table[VAR_8->current_frame_block] & ~(1U << 31);
        if (VAR_8->blocks_offset_table[VAR_8->current_frame_block] & (1U << 31)) {
            if (VAR_11 > VAR_8->audio_size - VAR_8->buffer_size)
                return VAR_1;

            FUNC_3(VAR_9, VAR_8->audio_frame + VAR_11, VAR_8->buffer_size);
            if (VAR_11 == (VAR_8->max_audio_blks - 2) * VAR_8->buffer_size) {
                FUNC_4(VAR_8->temp_audio_frame, VAR_8->audio_frame, VAR_8->audio_size);
                VAR_8->got_audio = 1;
            }
        } else {
            if (VAR_11 > VAR_8->video_size - VAR_8->buffer_size)
                return VAR_1;

            FUNC_3(VAR_9, VAR_8->video_frame + VAR_11, VAR_8->buffer_size);
        }
        VAR_8->current_frame_block++;
    }

    if (VAR_8->frames_offset_table[VAR_8->current_frame] >= VAR_8->video_size)
        return VAR_1;

    VAR_12 = VAR_8->video_size - VAR_8->frames_offset_table[VAR_8->current_frame];

    if (FUNC_1(VAR_7, VAR_12) < 0)
        return FUNC_0(VAR_3);

    VAR_7->stream_index = 0;
    VAR_7->duration = 1;
    FUNC_4(VAR_7->data, VAR_8->video_frame + VAR_8->frames_offset_table[VAR_8->current_frame], VAR_12);
    if (VAR_7->data[0] & 0x20)
        VAR_7->flags |= VAR_2;
    VAR_8->current_frame++;

    return VAR_7->size;
}
