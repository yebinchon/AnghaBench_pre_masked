
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int (* add_median_pred ) (int*,int*,int*,int,int*,int*) ;} ;
struct TYPE_7__ {int* val; TYPE_1__ llviddsp; } ;
typedef TYPE_2__ VBLEContext ;
struct TYPE_8__ {int** data; int* linesize; } ;
typedef int GetBitContext ;
typedef TYPE_3__ AVFrame ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int*,int*,int*,int,int*,int*) ;

__attribute__((used)) static void FUNC_2(VBLEContext *VAR_0, AVFrame *VAR_1,
                               GetBitContext *VAR_2, int VAR_3,
                               int VAR_4, int VAR_5, int VAR_6)
{
    uint8_t *VAR_7 = VAR_1->data[VAR_3];
    uint8_t *VAR_8 = VAR_0->val + VAR_4;
    int VAR_9 = VAR_1->linesize[VAR_3];
    int VAR_10, VAR_11, VAR_12, VAR_13;

    for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
        for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {

            if (VAR_8[VAR_11]) {
                int VAR_14 = (1 << VAR_8[VAR_11]) + FUNC_0(VAR_2, VAR_8[VAR_11]) - 1;
                VAR_8[VAR_11] = (VAR_14 >> 1) ^ -(VAR_14 & 1);
            }
        }
        if (VAR_10) {
            VAR_12 = 0;
            VAR_13 = VAR_7[-VAR_9];
            VAR_0->llviddsp.add_median_pred(VAR_7, VAR_7 - VAR_9, VAR_8,
                                          VAR_5, &VAR_12, &VAR_13);
        } else {
            VAR_7[0] = VAR_8[0];
            for (VAR_11 = 1; VAR_11 < VAR_5; VAR_11++)
                VAR_7[VAR_11] = VAR_8[VAR_11] + VAR_7[VAR_11 - 1];
        }
        VAR_7 += VAR_9;
        VAR_8 += VAR_5;
    }
}
