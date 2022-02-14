
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINTFLOAT ;
typedef scalar_t__ INTFLOAT ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(INTFLOAT (*VAR_0)[2], INTFLOAT (*VAR_1)[2],
                                           INTFLOAT VAR_2[2][4], INTFLOAT VAR_3[2][4],
                                           int VAR_4)
{
    INTFLOAT VAR_5 = VAR_2[0][0], VAR_6 = VAR_2[1][0];
    INTFLOAT VAR_7 = VAR_2[0][1], VAR_8 = VAR_2[1][1];
    INTFLOAT VAR_9 = VAR_2[0][2], VAR_10 = VAR_2[1][2];
    INTFLOAT VAR_11 = VAR_2[0][3], VAR_12 = VAR_2[1][3];
    UINTFLOAT VAR_13 = VAR_3[0][0], VAR_14 = VAR_3[1][0];
    UINTFLOAT VAR_15 = VAR_3[0][1], VAR_16 = VAR_3[1][1];
    UINTFLOAT VAR_17 = VAR_3[0][2], VAR_18 = VAR_3[1][2];
    UINTFLOAT VAR_19 = VAR_3[0][3], VAR_20 = VAR_3[1][3];
    int VAR_21;

    for (VAR_21 = 0; VAR_21 < VAR_4; VAR_21++) {

        INTFLOAT VAR_22 = VAR_0[VAR_21][0];
        INTFLOAT VAR_23 = VAR_0[VAR_21][1];
        INTFLOAT VAR_24 = VAR_1[VAR_21][0];
        INTFLOAT VAR_25 = VAR_1[VAR_21][1];
        VAR_5 += VAR_13;
        VAR_7 += VAR_15;
        VAR_9 += VAR_17;
        VAR_11 += VAR_19;
        VAR_6 += VAR_14;
        VAR_8 += VAR_16;
        VAR_10 += VAR_18;
        VAR_12 += VAR_20;

        VAR_0[VAR_21][0] = FUNC_1(VAR_5, VAR_22, VAR_9, VAR_24, VAR_6, VAR_23, VAR_10, VAR_25);
        VAR_0[VAR_21][1] = FUNC_0(VAR_5, VAR_23, VAR_9, VAR_25, VAR_6, VAR_22, VAR_10, VAR_24);
        VAR_1[VAR_21][0] = FUNC_1(VAR_7, VAR_22, VAR_11, VAR_24, VAR_8, VAR_23, VAR_12, VAR_25);
        VAR_1[VAR_21][1] = FUNC_0(VAR_7, VAR_23, VAR_11, VAR_25, VAR_8, VAR_22, VAR_12, VAR_24);
    }
}
