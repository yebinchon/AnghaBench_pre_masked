
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nb_channels; int sub_sampling; int**** tone_level_idx_hi1; int** tone_level_idx_hi2; int*** tone_level_idx_mid; int ** quantized_coeffs; } ;
typedef TYPE_1__ QDM2Context ;
typedef int GetBitContext ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int *,int *,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_6(QDM2Context *VAR_3, GetBitContext *VAR_4)
{
    int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

    for (VAR_9 = 0; VAR_9 < VAR_3->nb_channels; VAR_9++) {
        FUNC_3(VAR_3->quantized_coeffs[VAR_9][0], VAR_4);

        if (FUNC_2(VAR_4) < 16) {
            FUNC_4(VAR_3->quantized_coeffs[VAR_9][0], 0, 8);
            break;
        }
    }

    VAR_8 = VAR_3->sub_sampling + 1;

    for (VAR_5 = 0; VAR_5 < VAR_8; VAR_5++)
        for (VAR_9 = 0; VAR_9 < VAR_3->nb_channels; VAR_9++)
            for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
                if (FUNC_2(VAR_4) < 1)
                    break;
                if (FUNC_1(VAR_4)) {
                    for (VAR_7=0; VAR_7 < 8; VAR_7++) {
                        if (FUNC_2(VAR_4) < 16)
                            break;
                        VAR_3->tone_level_idx_hi1[VAR_9][VAR_5][VAR_6][VAR_7] = FUNC_5(VAR_4, &VAR_0, 0, 2);
                    }
                } else {
                    for (VAR_7=0; VAR_7 < 8; VAR_7++)
                        VAR_3->tone_level_idx_hi1[VAR_9][VAR_5][VAR_6][VAR_7] = 0;
                }
            }

    VAR_8 = FUNC_0(VAR_3->sub_sampling) - 4;

    for (VAR_5 = 0; VAR_5 < VAR_8; VAR_5++)
        for (VAR_9 = 0; VAR_9 < VAR_3->nb_channels; VAR_9++) {
            if (FUNC_2(VAR_4) < 16)
                break;
            VAR_3->tone_level_idx_hi2[VAR_9][VAR_5] = FUNC_5(VAR_4, &VAR_1, 0, 2);
            if (VAR_5 > 19)
                VAR_3->tone_level_idx_hi2[VAR_9][VAR_5] -= 16;
            else
                for (VAR_6 = 0; VAR_6 < 8; VAR_6++)
                    VAR_3->tone_level_idx_mid[VAR_9][VAR_5][VAR_6] = -16;
        }

    VAR_8 = FUNC_0(VAR_3->sub_sampling) - 5;

    for (VAR_5 = 0; VAR_5 < VAR_8; VAR_5++)
        for (VAR_9 = 0; VAR_9 < VAR_3->nb_channels; VAR_9++)
            for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
                if (FUNC_2(VAR_4) < 16)
                    break;
                VAR_3->tone_level_idx_mid[VAR_9][VAR_5][VAR_6] = FUNC_5(VAR_4, &VAR_2, 0, 2) - 32;
            }
}
