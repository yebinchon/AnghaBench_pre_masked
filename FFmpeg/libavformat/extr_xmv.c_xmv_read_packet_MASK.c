
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ current_frame; scalar_t__ frame_count; } ;
struct TYPE_9__ {scalar_t__ current_stream; scalar_t__ stream_count; TYPE_1__ video; } ;
typedef TYPE_2__ XMVDemuxContext ;
struct TYPE_10__ {TYPE_2__* priv_data; } ;
typedef int AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (TYPE_3__*,int *,scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int *) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_0,
                           AVPacket *VAR_1)
{
    XMVDemuxContext *VAR_2 = VAR_0->priv_data;
    int VAR_3;

    if (VAR_2->video.current_frame == VAR_2->video.frame_count) {


        VAR_3 = FUNC_1(VAR_0);
        if (VAR_3)
            return VAR_3;
    }

    if (VAR_2->current_stream == 0) {


        VAR_3 = FUNC_2(VAR_0, VAR_1);
    } else {


        VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2->current_stream - 1);
    }
    if (VAR_3) {
        VAR_2->current_stream = 0;
        VAR_2->video.current_frame = VAR_2->video.frame_count;
        return VAR_3;
    }



    if (++VAR_2->current_stream >= VAR_2->stream_count) {
        VAR_2->current_stream = 0;
        VAR_2->video.current_frame += 1;
    }

    return 0;
}
