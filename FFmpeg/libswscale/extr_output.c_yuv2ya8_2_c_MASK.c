
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int16_t ;
typedef int SwsContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(SwsContext *VAR_0, const int16_t *VAR_1[2],
            const int16_t *VAR_2[2], const int16_t *VAR_3[2],
            const int16_t *VAR_4[2], uint8_t *VAR_5, int VAR_6,
            int VAR_7, int VAR_8, int VAR_9)
{
    int VAR_10 = VAR_4 && VAR_4[0] && VAR_4[1];
    const int16_t *VAR_11 = VAR_1[0], *VAR_12 = VAR_1[1],
                  *VAR_13 = VAR_10 ? VAR_4[0] : ((void*)0),
                  *VAR_14 = VAR_10 ? VAR_4[1] : ((void*)0);
    int VAR_15 = 4096 - VAR_7;
    int VAR_16;

    FUNC_0(VAR_7 <= 4096U);

    for (VAR_16 = 0; VAR_16 < VAR_6; VAR_16++) {
        int VAR_17 = (VAR_11[VAR_16] * VAR_15 + VAR_12[VAR_16] * VAR_7) >> 19;
        int VAR_18;

        VAR_17 = FUNC_1(VAR_17);

        if (VAR_10) {
            VAR_18 = (VAR_13[VAR_16] * VAR_15 + VAR_14[VAR_16] * VAR_7) >> 19;
            VAR_18 = FUNC_1(VAR_18);
        }

        VAR_5[VAR_16 * 2 ] = VAR_17;
        VAR_5[VAR_16 * 2 + 1] = VAR_10 ? VAR_18 : 255;
    }
}
