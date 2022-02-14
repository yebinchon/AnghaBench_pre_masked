
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (double) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(unsigned char *VAR_2, unsigned char *VAR_3,
                             unsigned char *VAR_4, const unsigned char *VAR_5,
                             int VAR_6, int VAR_7)
{
    int VAR_8, VAR_9, VAR_10, VAR_11;
    int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
    const unsigned char *VAR_18;

    VAR_8 = VAR_6;
    VAR_9 = VAR_6 * 3;
    VAR_18 = VAR_5;
    for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11 += 2) {
        for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10 += 2) {
            VAR_12 = VAR_18[0];
            VAR_13 = VAR_18[1];
            VAR_14 = VAR_18[2];
            VAR_15 = VAR_12;
            VAR_16 = VAR_13;
            VAR_17 = VAR_14;
            VAR_2[0] = (FUNC_0(0.29900) * VAR_12 + FUNC_0(0.58700) * VAR_13 +
                       FUNC_0(0.11400) * VAR_14 + VAR_0) >> VAR_1;
            VAR_12 = VAR_18[3];
            VAR_13 = VAR_18[4];
            VAR_14 = VAR_18[5];
            VAR_15 += VAR_12;
            VAR_16 += VAR_13;
            VAR_17 += VAR_14;
            VAR_2[1] = (FUNC_0(0.29900) * VAR_12 + FUNC_0(0.58700) * VAR_13 +
                       FUNC_0(0.11400) * VAR_14 + VAR_0) >> VAR_1;
            VAR_18 += VAR_9;
            VAR_2 += VAR_8;

            VAR_12 = VAR_18[0];
            VAR_13 = VAR_18[1];
            VAR_14 = VAR_18[2];
            VAR_15 += VAR_12;
            VAR_16 += VAR_13;
            VAR_17 += VAR_14;
            VAR_2[0] = (FUNC_0(0.29900) * VAR_12 + FUNC_0(0.58700) * VAR_13 +
                       FUNC_0(0.11400) * VAR_14 + VAR_0) >> VAR_1;
            VAR_12 = VAR_18[3];
            VAR_13 = VAR_18[4];
            VAR_14 = VAR_18[5];
            VAR_15 += VAR_12;
            VAR_16 += VAR_13;
            VAR_17 += VAR_14;
            VAR_2[1] = (FUNC_0(0.29900) * VAR_12 + FUNC_0(0.58700) * VAR_13 +
                       FUNC_0(0.11400) * VAR_14 + VAR_0) >> VAR_1;

            VAR_3[0] = ((- FUNC_0(0.16874) * VAR_15 - FUNC_0(0.33126) * VAR_16 +
                       FUNC_0(0.50000) * VAR_17 + 4 * VAR_0 - 1) >> (VAR_1 + 2)) + 128;
            VAR_4[0] = ((FUNC_0(0.50000) * VAR_15 - FUNC_0(0.41869) * VAR_16 -
                       FUNC_0(0.08131) * VAR_17 + 4 * VAR_0 - 1) >> (VAR_1 + 2)) + 128;

            VAR_3++;
            VAR_4++;
            VAR_18 += -VAR_9 + 2 * 3;
            VAR_2 += -VAR_8 + 2;
        }
        VAR_18 += VAR_9;
        VAR_2 += VAR_8;
    }
}
