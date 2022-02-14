
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nb_channels; size_t coeff_per_sb_select; int*** quantized_coeffs; int*** tone_level_idx_base; scalar_t__ superblocktype_2_3; int*** tone_level_idx; int**** tone_level_idx_hi1; int*** tone_level_idx_mid; int** tone_level_idx_hi2; void**** tone_level; int sub_sampling; } ;
typedef TYPE_1__ QDM2Context ;


 int FUNC_0 (int ) ;
 int** VAR_0 ;
 int*** VAR_1 ;
 void*** VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static void FUNC_1(QDM2Context *VAR_4, int VAR_5)
{
    int VAR_6, VAR_7, VAR_8, VAR_9;
    int VAR_10, VAR_11;

    for (VAR_8 = 0; VAR_8 < VAR_4->nb_channels; VAR_8++)
        for (VAR_7 = 0; VAR_7 < 30; VAR_7++)
            for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
                if ((VAR_11=VAR_0[VAR_4->coeff_per_sb_select][VAR_7]) < (VAR_3[VAR_4->coeff_per_sb_select] - 1))
                    VAR_10 = VAR_4->quantized_coeffs[VAR_8][VAR_11 + 1][VAR_6] * VAR_1[VAR_4->coeff_per_sb_select][VAR_11 + 1][VAR_7]+
                          VAR_4->quantized_coeffs[VAR_8][VAR_11][VAR_6] * VAR_1[VAR_4->coeff_per_sb_select][VAR_11][VAR_7];
                else
                    VAR_10 = VAR_4->quantized_coeffs[VAR_8][VAR_11][VAR_6] * VAR_1[VAR_4->coeff_per_sb_select][VAR_11][VAR_7];
                if(VAR_10 < 0)
                    VAR_10 += 0xff;
                VAR_4->tone_level_idx_base[VAR_8][VAR_7][VAR_6] = (VAR_10 / 256) & 0xff;
            }

    VAR_9 = FUNC_0(VAR_4->sub_sampling);

    if ((VAR_4->superblocktype_2_3 != 0) && !VAR_5) {
        for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++)
            for (VAR_8 = 0; VAR_8 < VAR_4->nb_channels; VAR_8++)
                for (VAR_6 = 0; VAR_6 < 64; VAR_6++) {
                    VAR_4->tone_level_idx[VAR_8][VAR_7][VAR_6] = VAR_4->tone_level_idx_base[VAR_8][VAR_7][VAR_6 / 8];
                    if (VAR_4->tone_level_idx[VAR_8][VAR_7][VAR_6] < 0)
                        VAR_4->tone_level[VAR_8][VAR_7][VAR_6] = 0;
                    else
                        VAR_4->tone_level[VAR_8][VAR_7][VAR_6] = VAR_2[0][VAR_4->tone_level_idx[VAR_8][VAR_7][VAR_6] & 0x3f];
                }
    } else {
        VAR_11 = VAR_4->superblocktype_2_3 ? 0 : 1;
        for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
            if ((VAR_7 >= 4) && (VAR_7 <= 23)) {
                for (VAR_8 = 0; VAR_8 < VAR_4->nb_channels; VAR_8++)
                    for (VAR_6 = 0; VAR_6 < 64; VAR_6++) {
                        VAR_10 = VAR_4->tone_level_idx_base[VAR_8][VAR_7][VAR_6 / 8] -
                              VAR_4->tone_level_idx_hi1[VAR_8][VAR_7 / 8][VAR_6 / 8][VAR_6 % 8] -
                              VAR_4->tone_level_idx_mid[VAR_8][VAR_7 - 4][VAR_6 / 8] -
                              VAR_4->tone_level_idx_hi2[VAR_8][VAR_7 - 4];
                        VAR_4->tone_level_idx[VAR_8][VAR_7][VAR_6] = VAR_10 & 0xff;
                        if ((VAR_10 < 0) || (!VAR_4->superblocktype_2_3 && !VAR_10))
                            VAR_4->tone_level[VAR_8][VAR_7][VAR_6] = 0;
                        else
                            VAR_4->tone_level[VAR_8][VAR_7][VAR_6] = VAR_2[VAR_11][VAR_10 & 0x3f];
                }
            } else {
                if (VAR_7 > 4) {
                    for (VAR_8 = 0; VAR_8 < VAR_4->nb_channels; VAR_8++)
                        for (VAR_6 = 0; VAR_6 < 64; VAR_6++) {
                            VAR_10 = VAR_4->tone_level_idx_base[VAR_8][VAR_7][VAR_6 / 8] -
                                  VAR_4->tone_level_idx_hi1[VAR_8][2][VAR_6 / 8][VAR_6 % 8] -
                                  VAR_4->tone_level_idx_hi2[VAR_8][VAR_7 - 4];
                            VAR_4->tone_level_idx[VAR_8][VAR_7][VAR_6] = VAR_10 & 0xff;
                            if ((VAR_10 < 0) || (!VAR_4->superblocktype_2_3 && !VAR_10))
                                VAR_4->tone_level[VAR_8][VAR_7][VAR_6] = 0;
                            else
                                VAR_4->tone_level[VAR_8][VAR_7][VAR_6] = VAR_2[VAR_11][VAR_10 & 0x3f];
                    }
                } else {
                    for (VAR_8 = 0; VAR_8 < VAR_4->nb_channels; VAR_8++)
                        for (VAR_6 = 0; VAR_6 < 64; VAR_6++) {
                            VAR_10 = VAR_4->tone_level_idx[VAR_8][VAR_7][VAR_6] = VAR_4->tone_level_idx_base[VAR_8][VAR_7][VAR_6 / 8];
                            if ((VAR_10 < 0) || (!VAR_4->superblocktype_2_3 && !VAR_10))
                                VAR_4->tone_level[VAR_8][VAR_7][VAR_6] = 0;
                            else
                                VAR_4->tone_level[VAR_8][VAR_7][VAR_6] = VAR_2[VAR_11][VAR_10 & 0x3f];
                        }
                }
            }
        }
    }
}
