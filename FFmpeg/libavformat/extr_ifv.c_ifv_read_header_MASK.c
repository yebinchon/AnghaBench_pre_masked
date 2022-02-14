
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int pb; TYPE_2__* priv_data; } ;
struct TYPE_13__ {int index; TYPE_1__* codecpar; scalar_t__ start_time; } ;
struct TYPE_12__ {scalar_t__ next_audio_index; scalar_t__ next_video_index; scalar_t__ is_audio_present; int audio_stream_index; int sample_rate; int video_stream_index; int height; int width; } ;
struct TYPE_11__ {int channels; int sample_rate; int channel_layout; int codec_id; void* codec_type; int height; int width; } ;
typedef TYPE_2__ IFVContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__* FUNC_1 (TYPE_4__*,int *) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (TYPE_3__*,int,int,int) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,void*,int ) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_7)
{
    IFVContext *VAR_8 = VAR_7->priv_data;
    AVStream *VAR_9;
    int VAR_10;

    VAR_10 = FUNC_4(VAR_7);
    if (VAR_10 < 0)
        return VAR_10;

    VAR_9 = FUNC_1(VAR_7, ((void*)0));
    if (!VAR_9)
        return FUNC_0(VAR_5);

    VAR_9->codecpar->codec_type = VAR_1;
    VAR_9->codecpar->codec_id = VAR_3;
    VAR_9->codecpar->width = VAR_8->width;
    VAR_9->codecpar->height = VAR_8->height;
    VAR_9->start_time = 0;
    VAR_8->video_stream_index = VAR_9->index;

    FUNC_3(VAR_9, 32, 1, 1000);

    if (VAR_8->is_audio_present) {
        VAR_9 = FUNC_1(VAR_7, ((void*)0));
        if (!VAR_9)
            return FUNC_0(VAR_5);

        VAR_9->codecpar->codec_type = VAR_0;
        VAR_9->codecpar->codec_id = VAR_4;
        VAR_9->codecpar->channels = 1;
        VAR_9->codecpar->channel_layout = VAR_2;
        VAR_9->codecpar->sample_rate = VAR_8->sample_rate;
        VAR_8->audio_stream_index = VAR_9->index;

        FUNC_3(VAR_9, 32, 1, 1000);
    }


    FUNC_2(VAR_7->pb, 0xf8, VAR_6);

    VAR_10 = FUNC_5(VAR_7, VAR_1, 0);
    if (VAR_10 < 0)
        return VAR_10;

    if (VAR_8->is_audio_present) {

        FUNC_2(VAR_7->pb, 0x14918, VAR_6);

        VAR_10 = FUNC_5(VAR_7, VAR_0, 0);
        if (VAR_10 < 0)
            return VAR_10;
    }

    VAR_8->next_video_index = 0;
    VAR_8->next_audio_index = 0;

    return 0;
}
