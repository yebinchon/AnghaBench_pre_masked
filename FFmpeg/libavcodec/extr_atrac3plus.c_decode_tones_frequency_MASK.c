
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int bits; int table; } ;
struct TYPE_12__ {TYPE_2__* waves_info; TYPE_1__* channels; } ;
struct TYPE_11__ {int freq_index; } ;
struct TYPE_10__ {int num_wavs; size_t start_index; } ;
struct TYPE_9__ {int num_tone_bands; TYPE_4__* waves; } ;
struct TYPE_8__ {TYPE_3__* tones_info; } ;
typedef int GetBitContext ;
typedef TYPE_3__ Atrac3pWavesData ;
typedef TYPE_4__ Atrac3pWaveParam ;
typedef TYPE_5__ Atrac3pChanUnitCtx ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int) ;
 int FUNC_4 (int,int) ;
 TYPE_6__* VAR_0 ;

__attribute__((used)) static void FUNC_5(GetBitContext *VAR_1, Atrac3pChanUnitCtx *VAR_2,
                                   int VAR_3, int VAR_4[])
{
    int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
    Atrac3pWaveParam *VAR_11, *VAR_12;
    Atrac3pWavesData *VAR_13 = VAR_2->channels[VAR_3].tones_info;
    Atrac3pWavesData *VAR_14 = VAR_2->channels[0].tones_info;

    if (!VAR_3 || !FUNC_2(VAR_1)) {
        for (VAR_5 = 0; VAR_5 < VAR_2->waves_info->num_tone_bands; VAR_5++) {
            if (!VAR_4[VAR_5] || !VAR_13[VAR_5].num_wavs)
                continue;
            VAR_11 = &VAR_2->waves_info->waves[VAR_13[VAR_5].start_index];
            VAR_7 = (VAR_13[VAR_5].num_wavs > 1) ? FUNC_2(VAR_1) : 0;
            if (VAR_7) {
                if (VAR_13[VAR_5].num_wavs)
                    VAR_11[VAR_13[VAR_5].num_wavs - 1].freq_index = FUNC_1(VAR_1, 10);
                for (VAR_6 = VAR_13[VAR_5].num_wavs - 2; VAR_6 >= 0 ; VAR_6--) {
                    VAR_8 = FUNC_0(VAR_11[VAR_6+1].freq_index) + 1;
                    VAR_11[VAR_6].freq_index = FUNC_1(VAR_1, VAR_8);
                }
            } else {
                for (VAR_6 = 0; VAR_6 < VAR_13[VAR_5].num_wavs; VAR_6++) {
                    if (!VAR_6 || VAR_11[VAR_6 - 1].freq_index < 512)
                        VAR_11[VAR_6].freq_index = FUNC_1(VAR_1, 10);
                    else {
                        VAR_8 = FUNC_0(1023 - VAR_11[VAR_6 - 1].freq_index) + 1;
                        VAR_11[VAR_6].freq_index = FUNC_1(VAR_1, VAR_8) +
                                             1024 - (1 << VAR_8);
                    }
                }
            }
        }
    } else {
        for (VAR_5 = 0; VAR_5 < VAR_2->waves_info->num_tone_bands; VAR_5++) {
            if (!VAR_4[VAR_5] || !VAR_13[VAR_5].num_wavs)
                continue;
            VAR_11 = &VAR_2->waves_info->waves[VAR_14[VAR_5].start_index];
            VAR_12 = &VAR_2->waves_info->waves[VAR_13[VAR_5].start_index];
            for (VAR_6 = 0; VAR_6 < VAR_13[VAR_5].num_wavs; VAR_6++) {
                VAR_10 = FUNC_3(VAR_1, VAR_0[6].table,
                                 VAR_0[6].bits, 1);
                VAR_10 = FUNC_4(VAR_10, 8);
                VAR_9 = (VAR_6 < VAR_14[VAR_5].num_wavs) ? VAR_11[VAR_6].freq_index :
                        (VAR_14[VAR_5].num_wavs ? VAR_11[VAR_14[VAR_5].num_wavs - 1].freq_index : 0);
                VAR_12[VAR_6].freq_index = (VAR_9 + VAR_10) & 0x3FF;
            }
        }
    }
}
