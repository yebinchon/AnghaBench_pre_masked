
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sample_fmt; } ;
struct TYPE_5__ {TYPE_1__ in; } ;
typedef TYPE_2__ hb_audio_resample_t ;
typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;



void FUNC_0(hb_audio_resample_t *VAR_0,
                                      enum AVSampleFormat VAR_1)
{
    if (VAR_0 != ((void*)0))
    {
        VAR_0->in.sample_fmt = VAR_1;
    }
}
