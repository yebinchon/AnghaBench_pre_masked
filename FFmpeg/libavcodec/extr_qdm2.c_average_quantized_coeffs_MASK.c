
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t coeff_per_sb_select; int nb_channels; int*** quantized_coeffs; int sub_sampling; } ;
typedef TYPE_1__ QDM2Context ;


 int FUNC_0 (int ) ;
 int** VAR_0 ;

__attribute__((used)) static void FUNC_1(QDM2Context *VAR_1)
{
    int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;

    VAR_4 = VAR_0[VAR_1->coeff_per_sb_select][FUNC_0(VAR_1->sub_sampling) - 1] + 1;

    for (VAR_5 = 0; VAR_5 < VAR_1->nb_channels; VAR_5++)
        for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++) {
            VAR_6 = 0;

            for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
                VAR_6 += VAR_1->quantized_coeffs[VAR_5][VAR_2][VAR_3];

            VAR_6 /= 8;
            if (VAR_6 > 0)
                VAR_6--;

            for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
                VAR_1->quantized_coeffs[VAR_5][VAR_2][VAR_3] = VAR_6;
        }
}
