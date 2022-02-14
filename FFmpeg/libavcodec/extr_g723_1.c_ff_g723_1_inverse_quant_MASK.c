
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int int16_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int* VAR_1 ;
 int** VAR_2 ;
 int** VAR_3 ;
 int** VAR_4 ;
 int FUNC_2 (int*,int*,int) ;

void FUNC_3(int16_t *VAR_5, int16_t *VAR_6,
                             uint8_t *VAR_7, int VAR_8)
{
    int VAR_9, VAR_10;
    int VAR_11, VAR_12, VAR_13, VAR_14;


    if (!VAR_8) {
        VAR_9 = 0x100;
        VAR_10 = 12288;
    } else {
        VAR_9 = 0x200;
        VAR_10 = 23552;
        VAR_7[0] = VAR_7[1] = VAR_7[2] = 0;
    }


    VAR_5[0] = VAR_2[VAR_7[0]][0];
    VAR_5[1] = VAR_2[VAR_7[0]][1];
    VAR_5[2] = VAR_2[VAR_7[0]][2];
    VAR_5[3] = VAR_3[VAR_7[1]][0];
    VAR_5[4] = VAR_3[VAR_7[1]][1];
    VAR_5[5] = VAR_3[VAR_7[1]][2];
    VAR_5[6] = VAR_4[VAR_7[2]][0];
    VAR_5[7] = VAR_4[VAR_7[2]][1];
    VAR_5[8] = VAR_4[VAR_7[2]][2];
    VAR_5[9] = VAR_4[VAR_7[2]][3];


    for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
        VAR_13 = ((VAR_6[VAR_11] - VAR_1[VAR_11]) * VAR_10 + (1 << 14)) >> 15;
        VAR_5[VAR_11] += VAR_1[VAR_11] + VAR_13;
    }

    for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
        VAR_5[0] = FUNC_0(VAR_5[0], 0x180);
        VAR_5[VAR_0 - 1] = FUNC_1(VAR_5[VAR_0 - 1], 0x7e00);


        for (VAR_12 = 1; VAR_12 < VAR_0; VAR_12++) {
            VAR_13 = VAR_9 + VAR_5[VAR_12 - 1] - VAR_5[VAR_12];
            if (VAR_13 > 0) {
                VAR_13 >>= 1;
                VAR_5[VAR_12 - 1] -= VAR_13;
                VAR_5[VAR_12] += VAR_13;
            }
        }
        VAR_14 = 1;
        for (VAR_12 = 1; VAR_12 < VAR_0; VAR_12++) {
            VAR_13 = VAR_5[VAR_12 - 1] + VAR_9 - VAR_5[VAR_12] - 4;
            if (VAR_13 > 0) {
                VAR_14 = 0;
                break;
            }
        }
        if (VAR_14)
            break;
    }
    if (!VAR_14)
        FUNC_2(VAR_5, VAR_6, VAR_0 * sizeof(*VAR_5));
}
