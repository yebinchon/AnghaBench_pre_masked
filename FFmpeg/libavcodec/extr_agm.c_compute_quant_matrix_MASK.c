
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int* luma_quant_matrix; int* chroma_quant_matrix; int key_frame; } ;
typedef TYPE_1__ AGMContext ;


 int FUNC_0 (int,double) ;
 double FUNC_1 (double) ;
 int* VAR_0 ;
 double* VAR_1 ;
 double* VAR_2 ;

__attribute__((used)) static void FUNC_2(AGMContext *VAR_3, double VAR_4)
{
    int VAR_5[64], VAR_6[64];
    double VAR_7 = 1.0 - FUNC_1(VAR_4);

    if (!VAR_3->key_frame && (VAR_3->flags & 2)) {
        if (VAR_4 >= 0.0) {
            for (int VAR_8 = 0; VAR_8 < 64; VAR_8++) {
                VAR_5[VAR_8] = FUNC_0(1, 16 * VAR_7);
                VAR_6[VAR_8] = FUNC_0(1, 16 * VAR_7);
            }
        } else {
            for (int VAR_9 = 0; VAR_9 < 64; VAR_9++) {
                VAR_5[VAR_9] = FUNC_0(1, 16 - VAR_4 * 32);
                VAR_6[VAR_9] = FUNC_0(1, 16 - VAR_4 * 32);
            }
        }
    } else {
        if (VAR_4 >= 0.0) {
            for (int VAR_10 = 0; VAR_10 < 64; VAR_10++) {
                VAR_5[VAR_10] = FUNC_0(1, VAR_2 [(VAR_10 & 7) * 8 + (VAR_10 >> 3)] * VAR_7);
                VAR_6[VAR_10] = FUNC_0(1, VAR_1[(VAR_10 & 7) * 8 + (VAR_10 >> 3)] * VAR_7);
            }
        } else {
            for (int VAR_11 = 0; VAR_11 < 64; VAR_11++) {
                VAR_5[VAR_11] = FUNC_0(1, 255.0 - (255 - VAR_2 [(VAR_11 & 7) * 8 + (VAR_11 >> 3)]) * VAR_7);
                VAR_6[VAR_11] = FUNC_0(1, 255.0 - (255 - VAR_1[(VAR_11 & 7) * 8 + (VAR_11 >> 3)]) * VAR_7);
            }
        }
    }

    for (int VAR_12 = 0; VAR_12 < 64; VAR_12++) {
        int VAR_13 = VAR_0[VAR_12];

        VAR_3->luma_quant_matrix[VAR_12] = VAR_5[VAR_13] * ((VAR_13 / 8) & 1 ? -1 : 1);
        VAR_3->chroma_quant_matrix[VAR_12] = VAR_6[VAR_13] * ((VAR_13 / 8) & 1 ? -1 : 1);
    }
}
