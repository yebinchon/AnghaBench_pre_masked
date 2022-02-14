
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ctx_flags; int * pb; TYPE_1__* priv_data; } ;
struct TYPE_4__ {int audio_stream_index; int video_stream_index; scalar_t__ audio_frame_count; scalar_t__ video_pts; scalar_t__ audio_channels; scalar_t__ height; scalar_t__ width; int frame_rate; } ;
typedef TYPE_1__ RoqDemuxContext ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (unsigned char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,unsigned char*,int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_3)
{
    RoqDemuxContext *VAR_4 = VAR_3->priv_data;
    AVIOContext *VAR_5 = VAR_3->pb;
    unsigned char VAR_6[VAR_2];


    if (FUNC_2(VAR_5, VAR_6, VAR_2) !=
        VAR_2)
        return FUNC_0(VAR_1);
    VAR_4->frame_rate = FUNC_1(&VAR_6[6]);


    VAR_4->width = VAR_4->height = VAR_4->audio_channels = VAR_4->video_pts =
    VAR_4->audio_frame_count = 0;
    VAR_4->audio_stream_index = -1;
    VAR_4->video_stream_index = -1;

    VAR_3->ctx_flags |= VAR_0;

    return 0;
}
