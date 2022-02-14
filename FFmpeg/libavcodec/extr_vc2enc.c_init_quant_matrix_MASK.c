
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wavelet_depth; scalar_t__ quant_matrix; int custom_quant_matrix; size_t wavelet_idx; void*** quant; } ;
typedef TYPE_1__ VC2EncContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void**** VAR_2 ;
 void*** VAR_3 ;
 void*** VAR_4 ;

__attribute__((used)) static void FUNC_0(VC2EncContext *VAR_5)
{
    int VAR_6, VAR_7;

    if (VAR_5->wavelet_depth <= 4 && VAR_5->quant_matrix == VAR_1) {
        VAR_5->custom_quant_matrix = 0;
        for (VAR_6 = 0; VAR_6 < VAR_5->wavelet_depth; VAR_6++) {
            VAR_5->quant[VAR_6][0] = VAR_2[VAR_5->wavelet_idx][VAR_6][0];
            VAR_5->quant[VAR_6][1] = VAR_2[VAR_5->wavelet_idx][VAR_6][1];
            VAR_5->quant[VAR_6][2] = VAR_2[VAR_5->wavelet_idx][VAR_6][2];
            VAR_5->quant[VAR_6][3] = VAR_2[VAR_5->wavelet_idx][VAR_6][3];
        }
        return;
    }

    VAR_5->custom_quant_matrix = 1;

    if (VAR_5->quant_matrix == VAR_1) {
        for (VAR_6 = 0; VAR_6 < VAR_5->wavelet_depth; VAR_6++) {
            for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
                if (VAR_6 <= 3)
                    VAR_5->quant[VAR_6][VAR_7] = VAR_2[VAR_5->wavelet_idx][VAR_6][VAR_7];
                else
                    VAR_5->quant[VAR_6][VAR_7] = VAR_3[VAR_6][VAR_7];
            }
        }
    } else if (VAR_5->quant_matrix == VAR_0) {
        for (VAR_6 = 0; VAR_6 < VAR_5->wavelet_depth; VAR_6++) {
            for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
                VAR_5->quant[VAR_6][VAR_7] = VAR_3[VAR_6][VAR_7];
            }
        }
    } else {
        for (VAR_6 = 0; VAR_6 < VAR_5->wavelet_depth; VAR_6++) {
            for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
                VAR_5->quant[VAR_6][VAR_7] = VAR_4[VAR_6][VAR_7];
            }
        }
    }
}
