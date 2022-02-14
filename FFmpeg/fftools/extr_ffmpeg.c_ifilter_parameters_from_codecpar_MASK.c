
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int sample_aspect_ratio; int height; int width; int channel_layout; int channels; int sample_rate; int format; } ;
struct TYPE_5__ {int sample_aspect_ratio; int height; int width; int channel_layout; int channels; int sample_rate; int format; } ;
typedef TYPE_1__ InputFilter ;
typedef TYPE_2__ AVCodecParameters ;



__attribute__((used)) static void FUNC_0(InputFilter *VAR_0, AVCodecParameters *VAR_1)
{


    VAR_0->format = VAR_1->format;
    VAR_0->sample_rate = VAR_1->sample_rate;
    VAR_0->channels = VAR_1->channels;
    VAR_0->channel_layout = VAR_1->channel_layout;
    VAR_0->width = VAR_1->width;
    VAR_0->height = VAR_1->height;
    VAR_0->sample_aspect_ratio = VAR_1->sample_aspect_ratio;
}
