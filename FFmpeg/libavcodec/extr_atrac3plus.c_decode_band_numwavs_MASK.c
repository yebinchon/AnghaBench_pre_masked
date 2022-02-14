
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {int bits; int table; } ;
struct TYPE_14__ {int frame_number; } ;
struct TYPE_13__ {TYPE_2__* waves_info; TYPE_1__* channels; } ;
struct TYPE_12__ {int num_wavs; int start_index; } ;
struct TYPE_11__ {int num_tone_bands; int tones_index; } ;
struct TYPE_10__ {TYPE_3__* tones_info; } ;
typedef int GetBitContext ;
typedef TYPE_3__ Atrac3pWavesData ;
typedef TYPE_4__ Atrac3pChanUnitCtx ;
typedef TYPE_5__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*,int ,char*,int,int ) ;
 void* FUNC_1 (int *,int) ;
 void* FUNC_2 (int *,int ,int ,int) ;
 int FUNC_3 (int,int) ;
 TYPE_6__* VAR_2 ;

__attribute__((used)) static int FUNC_4(GetBitContext *VAR_3, Atrac3pChanUnitCtx *VAR_4,
                               int VAR_5, int VAR_6[],
                               AVCodecContext *VAR_7)
{
    int VAR_8, VAR_9, VAR_10;
    Atrac3pWavesData *VAR_11 = VAR_4->channels[VAR_5].tones_info;
    Atrac3pWavesData *VAR_12 = VAR_4->channels[0].tones_info;

    VAR_8 = FUNC_1(VAR_3, VAR_5 + 1);
    switch (VAR_8) {
    case 0:
        for (VAR_9 = 0; VAR_9 < VAR_4->waves_info->num_tone_bands; VAR_9++)
            if (VAR_6[VAR_9])
                VAR_11[VAR_9].num_wavs = FUNC_1(VAR_3, 4);
        break;
    case 1:
        for (VAR_9 = 0; VAR_9 < VAR_4->waves_info->num_tone_bands; VAR_9++)
            if (VAR_6[VAR_9])
                VAR_11[VAR_9].num_wavs =
                    FUNC_2(VAR_3, VAR_2[1].table,
                             VAR_2[1].bits, 1);
        break;
    case 2:
        for (VAR_9 = 0; VAR_9 < VAR_4->waves_info->num_tone_bands; VAR_9++)
            if (VAR_6[VAR_9]) {
                VAR_10 = FUNC_2(VAR_3, VAR_2[2].table,
                                 VAR_2[2].bits, 1);
                VAR_10 = FUNC_3(VAR_10, 3);
                VAR_11[VAR_9].num_wavs = (VAR_12[VAR_9].num_wavs + VAR_10) & 0xF;
            }
        break;
    case 3:
        for (VAR_9 = 0; VAR_9 < VAR_4->waves_info->num_tone_bands; VAR_9++)
            if (VAR_6[VAR_9])
                VAR_11[VAR_9].num_wavs = VAR_12[VAR_9].num_wavs;
        break;
    }


    for (VAR_9 = 0; VAR_9 < VAR_4->waves_info->num_tone_bands; VAR_9++)
        if (VAR_6[VAR_9]) {
            if (VAR_4->waves_info->tones_index + VAR_11[VAR_9].num_wavs > 48) {
                FUNC_0(VAR_7, VAR_1,
                       "Too many tones: %d (max. 48), frame: %d!\n",
                       VAR_4->waves_info->tones_index + VAR_11[VAR_9].num_wavs,
                       VAR_7->frame_number);
                return VAR_0;
            }
            VAR_11[VAR_9].start_index = VAR_4->waves_info->tones_index;
            VAR_4->waves_info->tones_index += VAR_11[VAR_9].num_wavs;
        }

    return 0;
}
