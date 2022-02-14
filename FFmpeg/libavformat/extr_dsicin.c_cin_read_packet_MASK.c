
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ int16_t ;
struct TYPE_15__ {int * pb; TYPE_2__* priv_data; } ;
struct TYPE_14__ {scalar_t__ pts; int* data; scalar_t__ duration; int stream_index; } ;
struct TYPE_12__ {int pal_colors_count; int video_frame_size; int video_frame_type; scalar_t__ audio_frame_size; } ;
struct TYPE_13__ {scalar_t__ audio_buffer_size; scalar_t__ audio_stream_pts; int audio_stream_index; int video_stream_pts; int video_stream_index; TYPE_1__ frame_header; } ;
typedef TYPE_1__ CinFrameHeader ;
typedef TYPE_2__ CinDemuxContext ;
typedef TYPE_3__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int *,TYPE_3__*,scalar_t__) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (int *,int*,int) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_0, AVPacket *VAR_1)
{
    CinDemuxContext *VAR_2 = VAR_0->priv_data;
    AVIOContext *VAR_3 = VAR_0->pb;
    CinFrameHeader *VAR_4 = &VAR_2->frame_header;
    int VAR_5, VAR_6, VAR_7;
    int VAR_8;

    if (VAR_2->audio_buffer_size == 0) {
        VAR_5 = FUNC_5(VAR_2, VAR_3);
        if (VAR_5)
            return VAR_5;

        if ((int16_t)VAR_4->pal_colors_count < 0) {
            VAR_4->pal_colors_count = -(int16_t)VAR_4->pal_colors_count;
            VAR_6 = 1;
        } else {
            VAR_6 = 0;
        }


        VAR_7 = (VAR_6 + 3) * VAR_4->pal_colors_count + VAR_4->video_frame_size;

        VAR_7 = FUNC_6(VAR_3, VAR_7);

        VAR_8 = FUNC_1(VAR_1, 4 + VAR_7);
        if (VAR_8 < 0)
            return VAR_8;

        VAR_1->stream_index = VAR_2->video_stream_index;
        VAR_1->pts = VAR_2->video_stream_pts++;

        VAR_1->data[0] = VAR_6;
        VAR_1->data[1] = VAR_4->pal_colors_count & 0xFF;
        VAR_1->data[2] = VAR_4->pal_colors_count >> 8;
        VAR_1->data[3] = VAR_4->video_frame_type;

        VAR_8 = FUNC_4(VAR_3, &VAR_1->data[4], VAR_7);
        if (VAR_8 < 0) {
            FUNC_2(VAR_1);
            return VAR_8;
        }
        if (VAR_8 < VAR_7)
            FUNC_3(VAR_1, 4 + VAR_8);


        VAR_2->audio_buffer_size = VAR_4->audio_frame_size;
        return 0;
    }


    VAR_8 = FUNC_0(VAR_3, VAR_1, VAR_2->audio_buffer_size);
    if (VAR_8 < 0)
        return VAR_8;

    VAR_1->stream_index = VAR_2->audio_stream_index;
    VAR_1->pts = VAR_2->audio_stream_pts;
    VAR_1->duration = VAR_2->audio_buffer_size - (VAR_1->pts == 0);
    VAR_2->audio_stream_pts += VAR_1->duration;
    VAR_2->audio_buffer_size = 0;
    return 0;
}
