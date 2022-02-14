
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int * pb; TYPE_1__* priv_data; } ;
struct TYPE_8__ {int stream_index; } ;
struct TYPE_7__ {int video_frame_size; int (* get_int ) (int *) ;int audio_size_left; int audio_size_counter; int audio_frame_size; } ;
typedef TYPE_1__ MviDemuxContext ;
typedef TYPE_2__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,TYPE_2__*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_4, AVPacket *VAR_5)
{
    int VAR_6, VAR_7;
    MviDemuxContext *VAR_8 = VAR_4->priv_data;
    AVIOContext *VAR_9 = VAR_4->pb;

    if (VAR_8->video_frame_size == 0) {
        VAR_8->video_frame_size = (VAR_8->get_int)(VAR_9);
        if (VAR_8->audio_size_left == 0)
            return FUNC_0(VAR_0);
        VAR_7 = (VAR_8->audio_size_counter + VAR_8->audio_frame_size + 512) >> VAR_2;
        if (VAR_7 > VAR_8->audio_size_left)
            VAR_7 = VAR_8->audio_size_left;
        if ((VAR_6 = FUNC_1(VAR_9, VAR_5, VAR_7)) < 0)
            return VAR_6;
        VAR_5->stream_index = VAR_1;
        VAR_8->audio_size_left -= VAR_7;
        VAR_8->audio_size_counter += VAR_8->audio_frame_size - (VAR_7 << VAR_2);
    } else {
        if ((VAR_6 = FUNC_1(VAR_9, VAR_5, VAR_8->video_frame_size)) < 0)
            return VAR_6;
        VAR_5->stream_index = VAR_3;
        VAR_8->video_frame_size = 0;
    }
    return 0;
}
