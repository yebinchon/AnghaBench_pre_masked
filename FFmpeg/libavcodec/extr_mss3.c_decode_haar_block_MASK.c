
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ptrdiff_t ;
struct TYPE_3__ {int scale; int coef_hi_model; int coef_model; } ;
typedef int RangeCoder ;
typedef TYPE_1__ HaarBlockCoder ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(RangeCoder *VAR_0, HaarBlockCoder *VAR_1,
                              uint8_t *VAR_2, ptrdiff_t VAR_3,
                              int VAR_4, int *VAR_5)
{
    const int VAR_6 = VAR_4 >> 1;
    int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    int VAR_15, VAR_16;

    for (VAR_16 = 0; VAR_16 < VAR_4; VAR_16++) {
        for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
            if (VAR_15 < VAR_6 && VAR_16 < VAR_6)
                VAR_5[VAR_15] = FUNC_2(VAR_0, &VAR_1->coef_model);
            else
                VAR_5[VAR_15] = FUNC_1(VAR_0, &VAR_1->coef_hi_model);
            VAR_5[VAR_15] *= VAR_1->scale;
        }
        VAR_5 += VAR_4;
    }
    VAR_5 -= VAR_4 * VAR_4;

    for (VAR_16 = 0; VAR_16 < VAR_6; VAR_16++) {
        for (VAR_15 = 0; VAR_15 < VAR_6; VAR_15++) {
            VAR_7 = VAR_5[VAR_15];
            VAR_8 = VAR_5[VAR_15 + VAR_6];
            VAR_9 = VAR_5[VAR_15 + VAR_6 * VAR_4];
            VAR_10 = VAR_5[VAR_15 + VAR_6 * VAR_4 + VAR_6];

            VAR_11 = VAR_7 - VAR_8;
            VAR_12 = VAR_9 - VAR_10;
            VAR_13 = VAR_7 + VAR_8;
            VAR_14 = VAR_9 + VAR_10;
            VAR_2[VAR_15 * 2] = FUNC_0(VAR_11 - VAR_12);
            VAR_2[VAR_15 * 2 + VAR_3] = FUNC_0(VAR_11 + VAR_12);
            VAR_2[VAR_15 * 2 + 1] = FUNC_0(VAR_13 - VAR_14);
            VAR_2[VAR_15 * 2 + 1 + VAR_3] = FUNC_0(VAR_13 + VAR_14);
        }
        VAR_5 += VAR_4;
        VAR_2 += VAR_3 * 2;
    }
}
