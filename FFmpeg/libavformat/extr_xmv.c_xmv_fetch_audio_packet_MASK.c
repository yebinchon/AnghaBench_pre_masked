
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_9__ {scalar_t__ current_frame; scalar_t__ frame_count; } ;
struct TYPE_10__ {TYPE_1__ video; TYPE_3__* audio; } ;
typedef TYPE_2__ XMVDemuxContext ;
struct TYPE_11__ {scalar_t__ data_offset; size_t data_size; size_t block_align; size_t block_count; int stream_index; int frame_size; } ;
typedef TYPE_3__ XMVAudioPacket ;
struct TYPE_13__ {int * pb; TYPE_2__* priv_data; } ;
struct TYPE_12__ {size_t duration; size_t pts; int dts; int stream_index; } ;
typedef TYPE_4__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (int ,size_t) ;
 int VAR_2 ;
 int FUNC_2 (int *,TYPE_4__*,size_t) ;
 scalar_t__ FUNC_3 (int *,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_3,
                                  AVPacket *VAR_4, uint32_t VAR_5)
{
    XMVDemuxContext *VAR_6 = VAR_3->priv_data;
    AVIOContext *VAR_7 = VAR_3->pb;
    XMVAudioPacket *VAR_8 = &VAR_6->audio[VAR_5];

    uint32_t VAR_9;
    uint32_t VAR_10;
    int VAR_11;


    if (FUNC_3(VAR_7, VAR_8->data_offset, VAR_2) != VAR_8->data_offset)
        return FUNC_0(VAR_1);

    if ((VAR_6->video.current_frame + 1) < VAR_6->video.frame_count)

        VAR_9 = FUNC_1(VAR_8->frame_size, VAR_8->data_size);
    else

        VAR_9 = VAR_8->data_size;


    VAR_11 = FUNC_2(VAR_7, VAR_4, VAR_9);
    if (VAR_11 <= 0)
        return VAR_11;

    VAR_4->stream_index = VAR_8->stream_index;



    VAR_10 = VAR_9 / VAR_8->block_align;

    VAR_4->duration = VAR_10;
    VAR_4->pts = VAR_8->block_count;
    VAR_4->dts = VAR_0;

    VAR_8->block_count += VAR_10;


    VAR_8->data_size -= VAR_9;
    VAR_8->data_offset += VAR_9;

    return 0;
}
