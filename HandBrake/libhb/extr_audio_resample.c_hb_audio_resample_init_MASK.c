
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_8__ {int sample_fmt; int sample_rate; void* surround_mix_level; void* center_mix_level; int lfe_mix_level; int channel_layout; } ;
struct TYPE_7__ {int matrix_encoding; int sample_fmt; int sample_rate; double maxval; int channel_layout; int sample_size; int channels; } ;
struct TYPE_9__ {int dual_mono_downmix; int dual_mono_right_only; scalar_t__ resample_needed; TYPE_2__ in; TYPE_1__ out; int * swresample; } ;
typedef TYPE_3__ hb_audio_resample_t ;
typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 TYPE_3__* FUNC_4 (int,int) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int,int*) ;

hb_audio_resample_t* FUNC_8(enum AVSampleFormat VAR_5,
                                            int VAR_6,
                                            int VAR_7, int VAR_8)
{
    hb_audio_resample_t *VAR_9 = FUNC_4(1, sizeof(hb_audio_resample_t));
    if (VAR_9 == ((void*)0))
    {
        FUNC_6("hb_audio_resample_init: failed to allocate resample");
        goto fail;
    }


    VAR_9->swresample = ((void*)0);


    if (FUNC_3(VAR_5))
    {
        FUNC_6("hb_audio_resample_init: planar output not supported ('%s')",
                 FUNC_2(VAR_5));
        goto fail;
    }


    int VAR_10;
    uint64_t VAR_11 = FUNC_7(VAR_7, &VAR_10);





    if (VAR_7 == VAR_1 || VAR_7 == VAR_2)
    {
        VAR_11 = VAR_0;
        VAR_9->dual_mono_downmix = 1;
        VAR_9->dual_mono_right_only = (VAR_7 == VAR_2);
    }
    else
    {
        VAR_9->dual_mono_downmix = 0;
    }


    VAR_9->out.channels = FUNC_1(VAR_11);
    VAR_9->out.channel_layout = VAR_11;
    VAR_9->out.matrix_encoding = VAR_10;
    VAR_9->out.sample_fmt = VAR_5;
    VAR_9->out.sample_rate = VAR_6;
    if (VAR_8)
    {
        VAR_9->out.maxval = 1.0;
    }
    else
    {
        VAR_9->out.maxval = 1000;
    }
    VAR_9->out.sample_size = FUNC_0(VAR_5);


    VAR_9->in.sample_fmt = VAR_9->out.sample_fmt;
    VAR_9->in.sample_rate = VAR_9->out.sample_rate;
    VAR_9->in.channel_layout = VAR_9->out.channel_layout;
    VAR_9->in.lfe_mix_level = VAR_4;
    VAR_9->in.center_mix_level = VAR_3;
    VAR_9->in.surround_mix_level = VAR_3;


    VAR_9->resample_needed = 0;
    return VAR_9;

fail:
    FUNC_5(VAR_9);
    return ((void*)0);
}
