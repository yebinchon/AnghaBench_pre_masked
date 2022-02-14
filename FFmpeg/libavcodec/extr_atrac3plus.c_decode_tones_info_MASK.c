
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int bits; int table; } ;
struct TYPE_13__ {TYPE_2__* channels; TYPE_1__* waves_info; } ;
struct TYPE_12__ {int * tones_info; } ;
struct TYPE_11__ {int num_tone_bands; scalar_t__* tone_master; scalar_t__* tone_sharing; scalar_t__ tones_index; scalar_t__* invert_phase; void* amplitude_mode; int * waves; void* tones_present; } ;
typedef int GetBitContext ;
typedef TYPE_3__ Atrac3pChanUnitCtx ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,TYPE_3__*,int,int*,int *) ;
 int FUNC_3 (int *,TYPE_3__*,int,int*) ;
 int FUNC_4 (int *,TYPE_3__*,int,int*) ;
 int FUNC_5 (int *,TYPE_3__*,int,int*) ;
 int FUNC_6 (int *,TYPE_3__*,int,int*) ;
 void* FUNC_7 (int *) ;
 int FUNC_8 (int *,scalar_t__*,int) ;
 int FUNC_9 (int *,int ,int ,int) ;
 int FUNC_10 (int *,int ,int) ;
 TYPE_4__* VAR_3 ;

__attribute__((used)) static int FUNC_11(GetBitContext *VAR_4, Atrac3pChanUnitCtx *VAR_5,
                             int VAR_6, AVCodecContext *VAR_7)
{
    int VAR_8, VAR_9, VAR_10;
    int VAR_11[16];

    for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
        FUNC_10(VAR_5->channels[VAR_8].tones_info, 0,
               sizeof(*VAR_5->channels[VAR_8].tones_info) * VAR_0);

    VAR_5->waves_info->tones_present = FUNC_7(VAR_4);
    if (!VAR_5->waves_info->tones_present)
        return 0;

    FUNC_10(VAR_5->waves_info->waves, 0, sizeof(VAR_5->waves_info->waves));

    VAR_5->waves_info->amplitude_mode = FUNC_7(VAR_4);
    if (!VAR_5->waves_info->amplitude_mode) {
        FUNC_1(VAR_7, "GHA amplitude mode 0");
        return VAR_1;
    }

    VAR_5->waves_info->num_tone_bands =
        FUNC_9(VAR_4, VAR_3[0].table,
                 VAR_3[0].bits, 1) + 1;

    if (VAR_6 == 2) {
        FUNC_8(VAR_4, VAR_5->waves_info->tone_sharing, VAR_5->waves_info->num_tone_bands);
        FUNC_8(VAR_4, VAR_5->waves_info->tone_master, VAR_5->waves_info->num_tone_bands);
        FUNC_8(VAR_4, VAR_5->waves_info->invert_phase, VAR_5->waves_info->num_tone_bands);
    }

    VAR_5->waves_info->tones_index = 0;

    for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
        for (VAR_9 = 0; VAR_9 < VAR_5->waves_info->num_tone_bands; VAR_9++)
            VAR_11[VAR_9] = !VAR_8 ? 1 : !VAR_5->waves_info->tone_sharing[VAR_9];

        FUNC_4(VAR_4, VAR_5, VAR_8, VAR_11);
        if ((VAR_10 = FUNC_2(VAR_4, VAR_5, VAR_8, VAR_11,
                                       VAR_7)) < 0)
            return VAR_10;

        FUNC_5(VAR_4, VAR_5, VAR_8, VAR_11);
        FUNC_3(VAR_4, VAR_5, VAR_8, VAR_11);
        FUNC_6(VAR_4, VAR_5, VAR_8, VAR_11);
    }

    if (VAR_6 == 2) {
        for (VAR_9 = 0; VAR_9 < VAR_5->waves_info->num_tone_bands; VAR_9++) {
            if (VAR_5->waves_info->tone_sharing[VAR_9])
                VAR_5->channels[1].tones_info[VAR_9] = VAR_5->channels[0].tones_info[VAR_9];

            if (VAR_5->waves_info->tone_master[VAR_9])
                FUNC_0(VAR_2, VAR_5->channels[0].tones_info[VAR_9],
                       VAR_5->channels[1].tones_info[VAR_9]);
        }
    }

    return 0;
}
