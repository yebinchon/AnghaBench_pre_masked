
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int * pb; TYPE_1__* priv_data; } ;
struct TYPE_10__ {int* data; int stream_index; int pts; } ;
struct TYPE_9__ {int audio_buffer_full; int current_pal_data_size; scalar_t__ current_video_data_size; scalar_t__ current_frame_offs; scalar_t__ current_pal_data_offs; scalar_t__ current_audio_data_offs; int current_frame_pts; int audio_stream_index; int current_audio_data_size; int video_stream_index; int current_video_data_ptr; } ;
typedef TYPE_1__ SeqDemuxContext ;
typedef TYPE_2__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,scalar_t__) ;
 int FUNC_3 (int *,int*,int) ;
 int FUNC_4 (int *,scalar_t__,int ) ;
 int FUNC_5 (int*,int ,scalar_t__) ;
 int FUNC_6 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_3, AVPacket *VAR_4)
{
    int VAR_5;
    SeqDemuxContext *VAR_6 = VAR_3->priv_data;
    AVIOContext *VAR_7 = VAR_3->pb;

    if (!VAR_6->audio_buffer_full) {
        VAR_5 = FUNC_6(VAR_6, VAR_7);
        if (VAR_5)
            return VAR_5;


        if (VAR_6->current_pal_data_size + VAR_6->current_video_data_size != 0) {
            if (FUNC_2(VAR_4, 1 + VAR_6->current_pal_data_size + VAR_6->current_video_data_size))
                return FUNC_0(VAR_1);

            VAR_4->data[0] = 0;
            if (VAR_6->current_pal_data_size) {
                VAR_4->data[0] |= 1;
                FUNC_4(VAR_7, VAR_6->current_frame_offs + VAR_6->current_pal_data_offs, VAR_2);
                if (FUNC_3(VAR_7, &VAR_4->data[1], VAR_6->current_pal_data_size) != VAR_6->current_pal_data_size)
                    return FUNC_0(VAR_0);
            }
            if (VAR_6->current_video_data_size) {
                VAR_4->data[0] |= 2;
                FUNC_5(&VAR_4->data[1 + VAR_6->current_pal_data_size],
                  VAR_6->current_video_data_ptr,
                  VAR_6->current_video_data_size);
            }
            VAR_4->stream_index = VAR_6->video_stream_index;
            VAR_4->pts = VAR_6->current_frame_pts;


            VAR_6->audio_buffer_full = 1;
            return 0;
       }
    }


    if (VAR_6->current_audio_data_offs == 0)
        return FUNC_0(VAR_0);

    FUNC_4(VAR_7, VAR_6->current_frame_offs + VAR_6->current_audio_data_offs, VAR_2);
    VAR_5 = FUNC_1(VAR_7, VAR_4, VAR_6->current_audio_data_size);
    if (VAR_5 < 0)
        return VAR_5;

    VAR_4->stream_index = VAR_6->audio_stream_index;
    VAR_6->current_frame_pts++;

    VAR_6->audio_buffer_full = 0;
    return 0;
}
