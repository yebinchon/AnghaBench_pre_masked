
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int8_t ;
struct TYPE_3__ {int nsubbands; int*** grid_1_scf; int*** high_res_scf; int*** grid_3_scf; int** grid_3_avg; } ;
typedef TYPE_1__ DCALbrDecoder ;


 int** VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static void FUNC_0(DCALbrDecoder *VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5, VAR_6, VAR_7;

    for (VAR_6 = VAR_3; VAR_6 <= VAR_4; VAR_6++) {
        for (VAR_7 = 0; VAR_7 < VAR_2->nsubbands; VAR_7++) {
            int VAR_8 = VAR_1[VAR_7];

            uint8_t *VAR_9 = VAR_2->grid_1_scf[VAR_6][VAR_8 ];
            uint8_t *VAR_10 = VAR_2->grid_1_scf[VAR_6][VAR_8 + 1];

            int VAR_11 = VAR_0[VAR_8 ][VAR_7];
            int VAR_12 = VAR_0[VAR_8 + 1][VAR_7];

            uint8_t *VAR_13 = VAR_2->high_res_scf[VAR_6][VAR_7];

            if (VAR_7 < 4) {
                for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
                    int VAR_14 = VAR_11 * VAR_9[VAR_5] + VAR_12 * VAR_10[VAR_5];
                    VAR_13[VAR_5] = VAR_14 >> 7;
                }
            } else {
                int8_t *VAR_15 = VAR_2->grid_3_scf[VAR_6][VAR_7 - 4];
                int VAR_16 = VAR_2->grid_3_avg[VAR_6][VAR_7 - 4];

                for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
                    int VAR_17 = VAR_11 * VAR_9[VAR_5] + VAR_12 * VAR_10[VAR_5];
                    VAR_13[VAR_5] = (VAR_17 >> 7) - VAR_16 - VAR_15[VAR_5];
                }
            }
        }
    }
}
