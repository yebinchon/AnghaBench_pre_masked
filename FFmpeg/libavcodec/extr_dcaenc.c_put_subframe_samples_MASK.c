
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int** abits; int** quant_index_sel; scalar_t__*** quantized; int pb; } ;
typedef TYPE_1__ DCAEncContext ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int FUNC_1 (int *,scalar_t__*,int,int,int) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(DCAEncContext *VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
    int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    if (VAR_4->abits[VAR_7][VAR_6] <= VAR_0) {
        FUNC_0(VAR_4->abits[VAR_7][VAR_6] > 0);
        VAR_12 = VAR_4->quant_index_sel[VAR_7][VAR_4->abits[VAR_7][VAR_6] - 1];

        if (VAR_12 < VAR_2[VAR_4->abits[VAR_7][VAR_6] - 1]) {
            FUNC_1(&VAR_4->pb, &VAR_4->quantized[VAR_7][VAR_6][VAR_5 * 8], 8,
                                 VAR_12, VAR_4->abits[VAR_7][VAR_6] - 1);
            return;
        }


        if (VAR_4->abits[VAR_7][VAR_6] <= 7) {
            for (VAR_8 = 0; VAR_8 < 8; VAR_8 += 4) {
                VAR_10 = 0;
                for (VAR_9 = 3; VAR_9 >= 0; VAR_9--) {
                    VAR_10 *= VAR_3[VAR_4->abits[VAR_7][VAR_6]];
                    VAR_10 += VAR_4->quantized[VAR_7][VAR_6][VAR_5 * 8 + VAR_8 + VAR_9];
                    VAR_10 += (VAR_3[VAR_4->abits[VAR_7][VAR_6]] - 1) / 2;
                }
                FUNC_2(&VAR_4->pb, VAR_1[VAR_4->abits[VAR_7][VAR_6]] / 4, VAR_10);
            }
            return;
        }
    }

    for (VAR_8 = 0; VAR_8 < 8; VAR_8++) {
        VAR_11 = VAR_1[VAR_4->abits[VAR_7][VAR_6]] / 16;
        FUNC_3(&VAR_4->pb, VAR_11, VAR_4->quantized[VAR_7][VAR_6][VAR_5 * 8 + VAR_8]);
    }
}
