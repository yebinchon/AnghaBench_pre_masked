
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int*** sb_int8_array ;
typedef int int64_t ;


 int FUNC_0 (int *,char*) ;
 int** VAR_0 ;
 int FUNC_1 (int,int,int***) ;
 int** VAR_1 ;

__attribute__((used)) static void FUNC_2(sb_int8_array VAR_2,
                                     sb_int8_array VAR_3,
                                     sb_int8_array VAR_4,
                                     int VAR_5,
                                     int VAR_6, int VAR_7,
                                     int VAR_8)
{
    int VAR_9, VAR_10, VAR_11;
    int VAR_12, VAR_13, VAR_14, VAR_15;
    int VAR_16, VAR_17, VAR_18, VAR_19;
    int64_t VAR_20;

    if (!VAR_7) {

        FUNC_0(((void*)0), "!superblocktype_2_3");
        return;
        for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
            for (VAR_10 = 0; VAR_10 < 30; VAR_10++) {
                for (VAR_11 = 1; VAR_11 < 63; VAR_11++) {
                    VAR_16 = VAR_2[VAR_9][VAR_10][VAR_11] - 10;
                    if (VAR_16 < 0)
                        VAR_16 = 0;
                    VAR_17 = VAR_18 = VAR_19 = 0;
                    if (VAR_10 > 1) {
                        VAR_17 = VAR_2[VAR_9][VAR_10 - 2][VAR_11] + VAR_1[VAR_10][0] - 6;
                        if (VAR_17 < 0)
                            VAR_17 = 0;
                    }
                    if (VAR_10 > 0) {
                        VAR_18 = VAR_2[VAR_9][VAR_10 - 1][VAR_11] + VAR_1[VAR_10][1] - 6;
                        if (VAR_18 < 0)
                            VAR_18 = 0;
                    }
                    if (VAR_10 < 29) {
                        VAR_19 = VAR_2[VAR_9][VAR_10 + 1][VAR_11] + VAR_1[VAR_10][3] - 6;
                        if (VAR_19 < 0)
                            VAR_19 = 0;
                    }
                    VAR_12 = VAR_2[VAR_9][VAR_10][VAR_11 + 1] * 2 - VAR_19 - VAR_18 - VAR_17 - VAR_16;
                    if (VAR_12 < 0)
                        VAR_12 = 0;
                    VAR_3[VAR_9][VAR_10][VAR_11 + 1] = VAR_12 & 0xff;
                }
                VAR_3[VAR_9][VAR_10][0] = VAR_3[VAR_9][VAR_10][1];
            }
        }
        VAR_13 = 0;
        for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
            for (VAR_10 = 0; VAR_10 < 30; VAR_10++)
                for (VAR_11 = 0; VAR_11 < 64; VAR_11++)
                    VAR_13 += VAR_3[VAR_9][VAR_10][VAR_11];

        VAR_20 = 0x66666667LL * (VAR_13 * 10);
        VAR_14 = (VAR_20 >> 32) / 8 + ((VAR_20 & 0xffffffff) >> 31);
        for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
            for (VAR_10 = 0; VAR_10 < 30; VAR_10++)
                for (VAR_11 = 0; VAR_11 < 64; VAR_11++) {
                    VAR_15 = VAR_3[VAR_9][VAR_10][VAR_11]* VAR_14 * 10;
                    if (VAR_15 < 0)
                        VAR_15 += 0xff;
                    VAR_15 /= 256;
                    switch(VAR_10) {
                        case 0:
                            if (VAR_15 < 30)
                                VAR_15 = 30;
                            VAR_15 += 15;
                            break;
                        case 1:
                            if (VAR_15 < 24)
                                VAR_15 = 24;
                            VAR_15 += 10;
                            break;
                        case 2:
                        case 3:
                        case 4:
                            if (VAR_15 < 16)
                                VAR_15 = 16;
                    }
                    if (VAR_15 <= 5)
                        VAR_12 = 0;
                    else if (VAR_15 <= 10)
                        VAR_12 = 10;
                    else if (VAR_15 <= 16)
                        VAR_12 = 16;
                    else if (VAR_15 <= 24)
                        VAR_12 = -1;
                    else
                        VAR_12 = 0;
                    VAR_4[VAR_9][VAR_10][VAR_11] = ((VAR_12 & 0xfffa) + 30 )& 0xff;
                }
        for (VAR_10 = 0; VAR_10 < 30; VAR_10++)
            FUNC_1(VAR_10, VAR_5, VAR_4);
        for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
            for (VAR_10 = 0; VAR_10 < 30; VAR_10++)
                for (VAR_11 = 0; VAR_11 < 64; VAR_11++)
                    if (VAR_10 >= 10) {
                        if (VAR_4[VAR_9][VAR_10][VAR_11] < 10)
                            VAR_4[VAR_9][VAR_10][VAR_11] = 10;
                    } else {
                        if (VAR_10 >= 2) {
                            if (VAR_4[VAR_9][VAR_10][VAR_11] < 16)
                                VAR_4[VAR_9][VAR_10][VAR_11] = 16;
                        } else {
                            if (VAR_4[VAR_9][VAR_10][VAR_11] < 30)
                                VAR_4[VAR_9][VAR_10][VAR_11] = 30;
                        }
                    }
    } else {
        for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
            for (VAR_10 = 0; VAR_10 < 30; VAR_10++)
                for (VAR_11 = 0; VAR_11 < 64; VAR_11++)
                    VAR_4[VAR_9][VAR_10][VAR_11] = VAR_0[VAR_8][VAR_10];
    }
}
