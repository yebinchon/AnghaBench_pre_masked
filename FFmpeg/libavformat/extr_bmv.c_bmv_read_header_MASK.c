
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* priv_data; } ;
struct TYPE_11__ {TYPE_1__* codecpar; } ;
struct TYPE_10__ {int get_next; scalar_t__ audio_pos; } ;
struct TYPE_9__ {int width; int height; int channels; int sample_rate; int channel_layout; int codec_id; int codec_type; int format; } ;
typedef TYPE_2__ BMVContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__* FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_3__*,int,int,int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_7)
{
    AVStream *VAR_8, *VAR_9;
    BMVContext *VAR_10 = VAR_7->priv_data;

    VAR_8 = FUNC_1(VAR_7, 0);
    if (!VAR_8)
        return FUNC_0(VAR_6);
    VAR_8->codecpar->codec_type = VAR_1;
    VAR_8->codecpar->codec_id = VAR_4;
    VAR_8->codecpar->width = 640;
    VAR_8->codecpar->height = 429;
    VAR_8->codecpar->format = VAR_5;
    FUNC_2(VAR_8, 16, 1, 12);
    VAR_9 = FUNC_1(VAR_7, 0);
    if (!VAR_9)
        return FUNC_0(VAR_6);
    VAR_9->codecpar->codec_type = VAR_0;
    VAR_9->codecpar->codec_id = VAR_3;
    VAR_9->codecpar->channels = 2;
    VAR_9->codecpar->channel_layout = VAR_2;
    VAR_9->codecpar->sample_rate = 22050;
    FUNC_2(VAR_9, 16, 1, 22050);

    VAR_10->get_next = 1;
    VAR_10->audio_pos = 0;
    return 0;
}
