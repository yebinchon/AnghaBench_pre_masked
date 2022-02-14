
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_18__ {int nb_streams; int ctx_flags; TYPE_2__** streams; TYPE_4__* priv_data; } ;
struct TYPE_17__ {int avg_frame_rate; TYPE_3__* codecpar; } ;
struct TYPE_16__ {int last_keyframe_stream_index; int framerate; int missing_streams; int video_bit_rate; int audio_bit_rate; } ;
struct TYPE_15__ {int codec_type; int bit_rate; } ;
struct TYPE_14__ {TYPE_1__* codecpar; } ;
struct TYPE_13__ {scalar_t__ codec_type; } ;
typedef TYPE_4__ FLVContext ;
typedef TYPE_5__ AVStream ;
typedef TYPE_6__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_6__*) ;
 TYPE_5__* FUNC_1 (TYPE_6__*,int *) ;
 int FUNC_2 (TYPE_5__*,int,int,int) ;

__attribute__((used)) static AVStream *FUNC_3(AVFormatContext *VAR_7, int VAR_8)
{
    FLVContext *VAR_9 = VAR_7->priv_data;
    AVStream *VAR_10 = FUNC_1(VAR_7, ((void*)0));
    if (!VAR_10)
        return ((void*)0);
    VAR_10->codecpar->codec_type = VAR_8;
    if (VAR_7->nb_streams>=3 ||( VAR_7->nb_streams==2
                           && VAR_7->streams[0]->codecpar->codec_type != VAR_3
                           && VAR_7->streams[1]->codecpar->codec_type != VAR_3
                           && VAR_7->streams[0]->codecpar->codec_type != VAR_2
                           && VAR_7->streams[1]->codecpar->codec_type != VAR_2))
        VAR_7->ctx_flags &= ~VAR_0;
    if (VAR_8 == VAR_1) {
        VAR_10->codecpar->bit_rate = VAR_9->audio_bit_rate;
        VAR_9->missing_streams &= ~VAR_5;
    }
    if (VAR_8 == VAR_4) {
        VAR_10->codecpar->bit_rate = VAR_9->video_bit_rate;
        VAR_9->missing_streams &= ~VAR_6;
        VAR_10->avg_frame_rate = VAR_9->framerate;
    }


    FUNC_2(VAR_10, 32, 1, 1000);
    VAR_9->last_keyframe_stream_index = VAR_7->nb_streams - 1;
    FUNC_0(VAR_7);
    return VAR_10;
}
