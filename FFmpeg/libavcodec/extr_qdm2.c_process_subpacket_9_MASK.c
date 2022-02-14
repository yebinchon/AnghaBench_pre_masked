
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {size_t coeff_per_sb_select; int nb_channels; int*** quantized_coeffs; int sub_sampling; } ;
struct TYPE_7__ {TYPE_1__* packet; } ;
struct TYPE_6__ {int size; int data; } ;
typedef TYPE_2__ QDM2SubPNode ;
typedef TYPE_3__ QDM2Context ;
typedef int GetBitContext ;


 int FUNC_0 (int ) ;
 int** VAR_0 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int *,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(QDM2Context *VAR_4, QDM2SubPNode *VAR_5)
{
    GetBitContext VAR_6;
    int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

    FUNC_1(&VAR_6, VAR_5->packet->data, VAR_5->packet->size * 8);

    VAR_10 = VAR_0[VAR_4->coeff_per_sb_select][FUNC_0(VAR_4->sub_sampling) - 1] + 1;

    for (VAR_7 = 1; VAR_7 < VAR_10; VAR_7++)
        for (VAR_11 = 0; VAR_11 < VAR_4->nb_channels; VAR_11++) {
            VAR_13 = FUNC_3(&VAR_6, &VAR_2, 0, 2);
            VAR_4->quantized_coeffs[VAR_11][VAR_7][0] = VAR_13;

            for (VAR_8 = 0; VAR_8 < (8 - 1); ) {
                VAR_12 = FUNC_3(&VAR_6, &VAR_3, 0, 1) + 1;
                VAR_14 = FUNC_2(&VAR_1, &VAR_6, 2);

                if (VAR_8 + VAR_12 >= 8)
                    return -1;

                for (VAR_9 = 1; VAR_9 <= VAR_12; VAR_9++)
                    VAR_4->quantized_coeffs[VAR_11][VAR_7][VAR_8 + VAR_9] = (VAR_13 + ((VAR_9 * VAR_14) / VAR_12));

                VAR_13 += VAR_14;
                VAR_8 += VAR_12;
            }
        }

    for (VAR_11 = 0; VAR_11 < VAR_4->nb_channels; VAR_11++)
        for (VAR_7 = 0; VAR_7 < 8; VAR_7++)
            VAR_4->quantized_coeffs[VAR_11][0][VAR_7] = 0;

    return 0;
}
