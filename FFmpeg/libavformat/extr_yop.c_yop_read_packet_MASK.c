
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int stream_index; int* data; int size; int pos; int flags; int * buf; } ;
struct TYPE_10__ {int frame_size; int audio_block_length; int palette_size; int odd_frame; TYPE_2__ video_packet; } ;
typedef TYPE_1__ YopDecContext ;
struct TYPE_12__ {int * pb; TYPE_1__* priv_data; } ;
typedef TYPE_2__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int *,int*,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_2, AVPacket *VAR_3)
{
    YopDecContext *VAR_4 = VAR_2->priv_data;
    AVIOContext *VAR_5 = VAR_2->pb;

    int VAR_6;
    int VAR_7 = VAR_4->frame_size -
                                 VAR_4->audio_block_length - VAR_4->palette_size;

    VAR_4->video_packet.stream_index = 1;

    if (VAR_4->video_packet.data) {
        *VAR_3 = VAR_4->video_packet;
        VAR_4->video_packet.data = ((void*)0);
        VAR_4->video_packet.buf = ((void*)0);
        VAR_4->video_packet.size = 0;
        VAR_3->data[0] = VAR_4->odd_frame;
        VAR_3->flags |= VAR_1;
        VAR_4->odd_frame ^= 1;
        return VAR_3->size;
    }
    VAR_6 = FUNC_1(&VAR_4->video_packet,
                        VAR_4->frame_size - VAR_4->audio_block_length);
    if (VAR_6 < 0)
        return VAR_6;

    VAR_4->video_packet.pos = FUNC_6(VAR_5);

    VAR_6 = FUNC_4(VAR_5, VAR_4->video_packet.data, VAR_4->palette_size);
    if (VAR_6 < 0) {
        goto err_out;
    }else if (VAR_6 < VAR_4->palette_size) {
        VAR_6 = VAR_0;
        goto err_out;
    }

    VAR_6 = FUNC_0(VAR_5, VAR_3, 920);
    if (VAR_6 < 0)
        goto err_out;


    VAR_3->pos = VAR_4->video_packet.pos;

    FUNC_5(VAR_5, VAR_4->audio_block_length - VAR_6);

    VAR_6 = FUNC_4(VAR_5, VAR_4->video_packet.data + VAR_4->palette_size,
                     VAR_7);
    if (VAR_6 < 0)
        goto err_out;
    else if (VAR_6 < VAR_7)
        FUNC_3(&VAR_4->video_packet, VAR_4->palette_size + VAR_6);


    return VAR_4->audio_block_length;

err_out:
    FUNC_2(&VAR_4->video_packet);
    return VAR_6;
}
