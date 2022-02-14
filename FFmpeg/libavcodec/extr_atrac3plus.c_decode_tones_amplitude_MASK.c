
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
struct TYPE_11__ {int amp_sf; scalar_t__ freq_index; } ;
struct TYPE_10__ {int num_wavs; size_t start_index; } ;
struct TYPE_9__ {int num_tone_bands; TYPE_4__* waves; int amplitude_mode; } ;
struct TYPE_8__ {TYPE_3__* tones_info; } ;
typedef int GetBitContext ;
typedef TYPE_3__ Atrac3pWavesData ;
typedef TYPE_4__ Atrac3pWaveParam ;
typedef TYPE_5__ Atrac3pChanUnitCtx ;


 int FUNC_0 (scalar_t__) ;
 void* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int ,int) ;
 int FUNC_3 (int,int) ;
 TYPE_6__* VAR_0 ;

__attribute__((used)) static void FUNC_4(GetBitContext *VAR_1, Atrac3pChanUnitCtx *VAR_2,
                                   int VAR_3, int VAR_4[])
{
    int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    Atrac3pWaveParam *VAR_14, *VAR_15;
    int VAR_16[48] = { 0 };
    Atrac3pWavesData *VAR_17 = VAR_2->channels[VAR_3].tones_info;
    Atrac3pWavesData *VAR_18 = VAR_2->channels[0].tones_info;

    if (VAR_3) {
        for (VAR_6 = 0; VAR_6 < VAR_2->waves_info->num_tone_bands; VAR_6++) {
            if (!VAR_4[VAR_6] || !VAR_17[VAR_6].num_wavs)
                continue;
            VAR_14 = &VAR_2->waves_info->waves[VAR_17[VAR_6].start_index];
            VAR_15 = &VAR_2->waves_info->waves[VAR_18[VAR_6].start_index];
            for (VAR_7 = 0; VAR_7 < VAR_17[VAR_6].num_wavs; VAR_7++) {
                for (VAR_8 = 0, VAR_11 = 0, VAR_10 = 1024; VAR_8 < VAR_18[VAR_6].num_wavs; VAR_8++) {
                    VAR_9 = FUNC_0(VAR_14[VAR_7].freq_index - VAR_15[VAR_8].freq_index);
                    if (VAR_9 < VAR_10) {
                        VAR_10 = VAR_9;
                        VAR_11 = VAR_8;
                    }
                }

                if (VAR_10 < 8)
                    VAR_16[VAR_17[VAR_6].start_index + VAR_7] = VAR_11 + VAR_18[VAR_6].start_index;
                else if (VAR_7 < VAR_18[VAR_6].num_wavs)
                    VAR_16[VAR_17[VAR_6].start_index + VAR_7] = VAR_7 + VAR_18[VAR_6].start_index;
                else
                    VAR_16[VAR_17[VAR_6].start_index + VAR_7] = -1;
            }
        }
    }

    VAR_5 = FUNC_1(VAR_1, VAR_3 + 1);

    switch (VAR_5) {
    case 0:
        for (VAR_6 = 0; VAR_6 < VAR_2->waves_info->num_tone_bands; VAR_6++) {
            if (!VAR_4[VAR_6] || !VAR_17[VAR_6].num_wavs)
                continue;
            if (VAR_2->waves_info->amplitude_mode)
                for (VAR_8 = 0; VAR_8 < VAR_17[VAR_6].num_wavs; VAR_8++)
                    VAR_2->waves_info->waves[VAR_17[VAR_6].start_index + VAR_8].amp_sf = FUNC_1(VAR_1, 6);
            else
                VAR_2->waves_info->waves[VAR_17[VAR_6].start_index].amp_sf = FUNC_1(VAR_1, 6);
        }
        break;
    case 1:
        for (VAR_6 = 0; VAR_6 < VAR_2->waves_info->num_tone_bands; VAR_6++) {
            if (!VAR_4[VAR_6] || !VAR_17[VAR_6].num_wavs)
                continue;
            if (VAR_2->waves_info->amplitude_mode)
                for (VAR_8 = 0; VAR_8 < VAR_17[VAR_6].num_wavs; VAR_8++)
                    VAR_2->waves_info->waves[VAR_17[VAR_6].start_index + VAR_8].amp_sf =
                        FUNC_2(VAR_1, VAR_0[3].table,
                                 VAR_0[3].bits, 1) + 20;
            else
                VAR_2->waves_info->waves[VAR_17[VAR_6].start_index].amp_sf =
                    FUNC_2(VAR_1, VAR_0[4].table,
                             VAR_0[4].bits, 1) + 24;
        }
        break;
    case 2:
        for (VAR_6 = 0; VAR_6 < VAR_2->waves_info->num_tone_bands; VAR_6++) {
            if (!VAR_4[VAR_6] || !VAR_17[VAR_6].num_wavs)
                continue;
            for (VAR_8 = 0; VAR_8 < VAR_17[VAR_6].num_wavs; VAR_8++) {
                VAR_12 = FUNC_2(VAR_1, VAR_0[5].table,
                                 VAR_0[5].bits, 1);
                VAR_12 = FUNC_3(VAR_12, 5);
                VAR_13 = VAR_16[VAR_17[VAR_6].start_index + VAR_8] >= 0 ?
                        VAR_2->waves_info->waves[VAR_16[VAR_17[VAR_6].start_index + VAR_8]].amp_sf : 34;
                VAR_2->waves_info->waves[VAR_17[VAR_6].start_index + VAR_8].amp_sf = (VAR_13 + VAR_12) & 0x3F;
            }
        }
        break;
    case 3:
        for (VAR_6 = 0; VAR_6 < VAR_2->waves_info->num_tone_bands; VAR_6++) {
            if (!VAR_4[VAR_6])
                continue;
            for (VAR_8 = 0; VAR_8 < VAR_17[VAR_6].num_wavs; VAR_8++)
                VAR_2->waves_info->waves[VAR_17[VAR_6].start_index + VAR_8].amp_sf =
                    VAR_16[VAR_17[VAR_6].start_index + VAR_8] >= 0
                    ? VAR_2->waves_info->waves[VAR_16[VAR_17[VAR_6].start_index + VAR_8]].amp_sf
                    : 32;
        }
        break;
    }
}
