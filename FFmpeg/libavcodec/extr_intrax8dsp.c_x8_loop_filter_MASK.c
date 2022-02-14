
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef int int32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(uint8_t *VAR_0, const ptrdiff_t VAR_1,
                           const ptrdiff_t VAR_2, int VAR_3)
{
    int VAR_4, VAR_5;
    int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    int VAR_16 = (VAR_3 + 10) >> 3;

    for (VAR_4 = 0; VAR_4 < 8; VAR_4++, VAR_0 += VAR_2) {
        VAR_6 = VAR_0[-5 * VAR_1];
        VAR_7 = VAR_0[-4 * VAR_1];
        VAR_8 = VAR_0[-3 * VAR_1];
        VAR_9 = VAR_0[-2 * VAR_1];
        VAR_10 = VAR_0[-1 * VAR_1];
        VAR_11 = VAR_0[0];
        VAR_12 = VAR_0[1 * VAR_1];
        VAR_13 = VAR_0[2 * VAR_1];
        VAR_14 = VAR_0[3 * VAR_1];
        VAR_15 = VAR_0[4 * VAR_1];

        VAR_5 = (FUNC_0(VAR_7 - VAR_8) <= VAR_16) +
            (FUNC_0(VAR_8 - VAR_9) <= VAR_16) +
            (FUNC_0(VAR_9 - VAR_10) <= VAR_16) +
            (FUNC_0(VAR_10 - VAR_11) <= VAR_16);


        if (VAR_5 > 0) {
            VAR_5 += (FUNC_0(VAR_11 - VAR_12) <= VAR_16) +
                 (FUNC_0(VAR_12 - VAR_13) <= VAR_16) +
                 (FUNC_0(VAR_13 - VAR_14) <= VAR_16) +
                 (FUNC_0(VAR_14 - VAR_15) <= VAR_16) +
                 (FUNC_0(VAR_6 - VAR_7) <= VAR_16);
            if (VAR_5 >= 6) {
                int VAR_17, VAR_18;

                VAR_17 = VAR_18 = VAR_7;
                VAR_17 = FUNC_2(VAR_17, VAR_9);
                VAR_18 = FUNC_1(VAR_18, VAR_9);
                VAR_17 = FUNC_2(VAR_17, VAR_11);
                VAR_18 = FUNC_1(VAR_18, VAR_11);
                VAR_17 = FUNC_2(VAR_17, VAR_14);
                VAR_18 = FUNC_1(VAR_18, VAR_14);
                if (VAR_18 - VAR_17 < 2 * VAR_3) {
                    VAR_17 = FUNC_2(VAR_17, VAR_8);
                    VAR_18 = FUNC_1(VAR_18, VAR_8);
                    VAR_17 = FUNC_2(VAR_17, VAR_10);
                    VAR_18 = FUNC_1(VAR_18, VAR_10);
                    VAR_17 = FUNC_2(VAR_17, VAR_12);
                    VAR_18 = FUNC_1(VAR_18, VAR_12);
                    VAR_17 = FUNC_2(VAR_17, VAR_13);
                    VAR_18 = FUNC_1(VAR_18, VAR_13);
                    if (VAR_18 - VAR_17 < 2 * VAR_3) {
                        VAR_0[-2 * VAR_1] = (4 * VAR_8 + 3 * VAR_9 + 1 * VAR_13 + 4) >> 3;
                        VAR_0[-1 * VAR_1] = (3 * VAR_8 + 3 * VAR_10 + 2 * VAR_13 + 4) >> 3;
                        VAR_0[0] = (2 * VAR_8 + 3 * VAR_11 + 3 * VAR_13 + 4) >> 3;
                        VAR_0[1 * VAR_1] = (1 * VAR_8 + 3 * VAR_12 + 4 * VAR_13 + 4) >> 3;
                        continue;
                    }
                }
            }
        }
        {
            int VAR_19, VAR_20, VAR_21, VAR_22;
            int VAR_23;

            VAR_20 = (2 * VAR_9 - 5 * VAR_10 + 5 * VAR_11 - 2 * VAR_12 + 4) >> 3;
            if (FUNC_0(VAR_20) < VAR_3) {
                VAR_21 = (2 * VAR_7 - 5 * VAR_8 + 5 * VAR_9 - 2 * VAR_10 + 4) >> 3;
                VAR_22 = (2 * VAR_11 - 5 * VAR_12 + 5 * VAR_13 - 2 * VAR_14 + 4) >> 3;

                VAR_19 = FUNC_0(VAR_20) - FUNC_2(FUNC_0(VAR_21), FUNC_0(VAR_22));
                VAR_23 = VAR_10 - VAR_11;

                if (VAR_19 > 0 && (VAR_23 ^ VAR_20) < 0) {
                    int32_t VAR_24;

                    VAR_24 = VAR_23 >> 31;
                    VAR_23 = (VAR_23 ^ VAR_24) - VAR_24;
                    VAR_23 >>= 1;

                    VAR_19 = 5 * VAR_19 >> 3;

                    if (VAR_19 > VAR_23)
                        VAR_19 = VAR_23;

                    VAR_19 = (VAR_19 ^ VAR_24) - VAR_24;

                    VAR_0[-1 * VAR_1] -= VAR_19;
                    VAR_0[0] += VAR_19;
                }
            }
        }
    }
}
