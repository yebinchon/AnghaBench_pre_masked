
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;


 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;

__attribute__((used)) static void FUNC_0(int (*VAR_6)[8][2], const int *VAR_7, int VAR_8)
{

    const int *VAR_9, *VAR_10;
    int VAR_11, VAR_12, VAR_13, VAR_14;
    int VAR_15, VAR_16;

    if (VAR_8 == 4) {
        VAR_9 = VAR_4;
        VAR_10 = VAR_1;
        VAR_13 = 759250125;
        VAR_14 = 759250125;
    } else if (VAR_8 == 8) {
        VAR_9 = VAR_5;
        VAR_10 = VAR_2;
        VAR_13 = 410903207;
        VAR_14 = 992008094;
    } else {
        VAR_9 = VAR_3;
        VAR_10 = VAR_0;
        VAR_13 = 277904834;
        VAR_14 = 1037154959;
    }

    for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++) {
        for (VAR_16 = 0; VAR_16 < 7; VAR_16++) {
            int VAR_17 = (VAR_15*(VAR_16-6) + (VAR_16>>1) - 3) % VAR_8;

            if (VAR_17 < 0)
                VAR_17 += VAR_8;
            VAR_11 = VAR_9[VAR_17];
            VAR_12 = VAR_10[VAR_17];

            if (VAR_16 & 1) {
                VAR_17 = (int)(((int64_t)VAR_12 * VAR_14 - (int64_t)VAR_11 * VAR_13 + 0x20000000) >> 30);
                VAR_11 = (int)(((int64_t)VAR_11 * VAR_14 + (int64_t)VAR_12 * VAR_13 + 0x20000000) >> 30);
                VAR_12 = VAR_17;
            }
            VAR_6[VAR_15][VAR_16][0] = (int)(((int64_t)VAR_7[VAR_16] * VAR_12 + 0x20000000) >> 30);
            VAR_6[VAR_15][VAR_16][1] = -(int)(((int64_t)VAR_7[VAR_16] * VAR_11 + 0x20000000) >> 30);
        }
    }
}
