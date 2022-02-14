
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* waves_info; TYPE_2__* channels; } ;
struct TYPE_10__ {int phase_index; } ;
struct TYPE_9__ {size_t start_index; int num_wavs; } ;
struct TYPE_8__ {TYPE_3__* tones_info; } ;
struct TYPE_7__ {int num_tone_bands; TYPE_4__* waves; } ;
typedef int GetBitContext ;
typedef TYPE_3__ Atrac3pWavesData ;
typedef TYPE_4__ Atrac3pWaveParam ;
typedef TYPE_5__ Atrac3pChanUnitCtx ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1(GetBitContext *VAR_0, Atrac3pChanUnitCtx *VAR_1,
                               int VAR_2, int VAR_3[])
{
    int VAR_4, VAR_5;
    Atrac3pWaveParam *VAR_6;
    Atrac3pWavesData *VAR_7 = VAR_1->channels[VAR_2].tones_info;

    for (VAR_4 = 0; VAR_4 < VAR_1->waves_info->num_tone_bands; VAR_4++) {
        if (!VAR_3[VAR_4])
            continue;
        VAR_6 = &VAR_1->waves_info->waves[VAR_7[VAR_4].start_index];
        for (VAR_5 = 0; VAR_5 < VAR_7[VAR_4].num_wavs; VAR_5++)
            VAR_6[VAR_5].phase_index = FUNC_0(VAR_0, 5);
    }
}
