
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINTFLOAT ;
typedef scalar_t__ INTFLOAT ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(INTFLOAT (*VAR_0)[2], INTFLOAT (*VAR_1)[2],
                                    INTFLOAT VAR_2[2][4], INTFLOAT VAR_3[2][4],
                                    int VAR_4)
{
    INTFLOAT VAR_5 = VAR_2[0][0];
    INTFLOAT VAR_6 = VAR_2[0][1];
    INTFLOAT VAR_7 = VAR_2[0][2];
    INTFLOAT VAR_8 = VAR_2[0][3];
    UINTFLOAT VAR_9 = VAR_3[0][0];
    UINTFLOAT VAR_10 = VAR_3[0][1];
    UINTFLOAT VAR_11 = VAR_3[0][2];
    UINTFLOAT VAR_12 = VAR_3[0][3];
    int VAR_13;

    for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {

        INTFLOAT VAR_14 = VAR_0[VAR_13][0];
        INTFLOAT VAR_15 = VAR_0[VAR_13][1];
        INTFLOAT VAR_16 = VAR_1[VAR_13][0];
        INTFLOAT VAR_17 = VAR_1[VAR_13][1];
        VAR_5 += VAR_9;
        VAR_6 += VAR_10;
        VAR_7 += VAR_11;
        VAR_8 += VAR_12;
        VAR_0[VAR_13][0] = FUNC_0(VAR_5, VAR_14, VAR_7, VAR_16);
        VAR_0[VAR_13][1] = FUNC_0(VAR_5, VAR_15, VAR_7, VAR_17);
        VAR_1[VAR_13][0] = FUNC_0(VAR_6, VAR_14, VAR_8, VAR_16);
        VAR_1[VAR_13][1] = FUNC_0(VAR_6, VAR_15, VAR_8, VAR_17);
    }
}
