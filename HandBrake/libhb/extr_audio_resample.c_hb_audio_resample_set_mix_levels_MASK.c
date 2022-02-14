
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double lfe_mix_level; double center_mix_level; double surround_mix_level; } ;
struct TYPE_5__ {TYPE_1__ in; } ;
typedef TYPE_2__ hb_audio_resample_t ;



void FUNC_0(hb_audio_resample_t *VAR_0,
                                      double VAR_1,
                                      double VAR_2,
                                      double VAR_3)
{
    if (VAR_0 != ((void*)0))
    {
        VAR_0->in.lfe_mix_level = VAR_3;
        VAR_0->in.center_mix_level = VAR_2;
        VAR_0->in.surround_mix_level = VAR_1;
    }
}
