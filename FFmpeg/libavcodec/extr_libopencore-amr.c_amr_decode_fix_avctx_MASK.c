
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ codec_id; int sample_rate; int channels; int sample_fmt; int channel_layout; } ;
typedef TYPE_1__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_4)
{
    const int VAR_5 = 1 + (VAR_4->codec_id == VAR_2);

    if (!VAR_4->sample_rate)
        VAR_4->sample_rate = 8000 * VAR_5;

    if (VAR_4->channels > 1) {
        FUNC_0(VAR_4, "multi-channel AMR");
        return VAR_0;
    }

    VAR_4->channels = 1;
    VAR_4->channel_layout = VAR_1;
    VAR_4->sample_fmt = VAR_3;
    return 0;
}
