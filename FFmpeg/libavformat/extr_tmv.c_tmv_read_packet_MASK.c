
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int * pb; TYPE_1__* priv_data; } ;
struct TYPE_8__ {int stream_index; int flags; } ;
struct TYPE_7__ {int stream_index; int audio_chunk_size; int video_chunk_size; int padding; } ;
typedef TYPE_1__ TMVContext ;
typedef TYPE_2__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_2, AVPacket *VAR_3)
{
    TMVContext *VAR_4 = VAR_2->priv_data;
    AVIOContext *VAR_5 = VAR_2->pb;
    int VAR_6, VAR_7 = VAR_4->stream_index ?
                        VAR_4->audio_chunk_size : VAR_4->video_chunk_size;

    if (FUNC_1(VAR_5))
        return VAR_0;

    VAR_6 = FUNC_0(VAR_5, VAR_3, VAR_7);

    if (VAR_4->stream_index)
        FUNC_2(VAR_5, VAR_4->padding);

    VAR_3->stream_index = VAR_4->stream_index;
    VAR_4->stream_index ^= 1;
    VAR_3->flags |= VAR_1;

    return VAR_6;
}
