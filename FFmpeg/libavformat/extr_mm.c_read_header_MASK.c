
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int * pb; TYPE_2__* priv_data; } ;
struct TYPE_11__ {TYPE_1__* codecpar; } ;
struct TYPE_10__ {scalar_t__ video_pts; scalar_t__ audio_pts; } ;
struct TYPE_9__ {unsigned int width; unsigned int height; int channels; int sample_rate; int channel_layout; int codec_id; scalar_t__ codec_tag; int codec_type; } ;
typedef TYPE_2__ MmDemuxContext ;
typedef TYPE_3__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 TYPE_3__* FUNC_1 (TYPE_4__*,int *) ;
 unsigned int FUNC_2 (int *) ;
 unsigned int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned int) ;
 int FUNC_5 (TYPE_3__*,int,int,int) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_9)
{
    MmDemuxContext *VAR_10 = VAR_9->priv_data;
    AVIOContext *VAR_11 = VAR_9->pb;
    AVStream *VAR_12;

    unsigned int VAR_13, VAR_14;
    unsigned int VAR_15, VAR_16, VAR_17;

    VAR_13 = FUNC_2(VAR_11);
    VAR_14 = FUNC_3(VAR_11);

    if (VAR_13 != VAR_8)
        return VAR_0;


    FUNC_2(VAR_11);
    VAR_15 = FUNC_2(VAR_11);
    FUNC_2(VAR_11);
    VAR_16 = FUNC_2(VAR_11);
    VAR_17 = FUNC_2(VAR_11);
    FUNC_4(VAR_11, VAR_14 - 10);


    VAR_12 = FUNC_1(VAR_9, ((void*)0));
    if (!VAR_12)
        return FUNC_0(VAR_6);
    VAR_12->codecpar->codec_type = VAR_2;
    VAR_12->codecpar->codec_id = VAR_4;
    VAR_12->codecpar->codec_tag = 0;
    VAR_12->codecpar->width = VAR_16;
    VAR_12->codecpar->height = VAR_17;
    FUNC_5(VAR_12, 64, 1, VAR_15);


    if (VAR_14 == VAR_7) {
        VAR_12 = FUNC_1(VAR_9, ((void*)0));
        if (!VAR_12)
            return FUNC_0(VAR_6);
        VAR_12->codecpar->codec_type = VAR_1;
        VAR_12->codecpar->codec_tag = 0;
        VAR_12->codecpar->codec_id = VAR_5;
        VAR_12->codecpar->channels = 1;
        VAR_12->codecpar->channel_layout = VAR_3;
        VAR_12->codecpar->sample_rate = 8000;
        FUNC_5(VAR_12, 64, 1, 8000);
    }

    VAR_10->audio_pts = 0;
    VAR_10->video_pts = 0;
    return 0;
}
