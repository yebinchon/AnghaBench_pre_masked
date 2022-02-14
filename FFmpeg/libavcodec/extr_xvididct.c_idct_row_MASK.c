
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int const VAR_0 ;

__attribute__((used)) static int FUNC_0(short *VAR_1, const int *const VAR_2, int VAR_3)
{
    const int VAR_4 = VAR_2[0];
    const int VAR_5 = VAR_2[1];
    const int VAR_6 = VAR_2[2];
    const int VAR_7 = VAR_2[3];
    const int VAR_8 = VAR_2[4];
    const int VAR_9 = VAR_2[5];
    const int VAR_10 = VAR_2[6];

    const int VAR_11 = VAR_1[5] | VAR_1[6] | VAR_1[7];
    const int VAR_12 = VAR_1[1] | VAR_1[2] | VAR_1[3];
    if (!(VAR_11 | VAR_1[4])) {
        const int VAR_13 = VAR_7 * VAR_1[0] + VAR_3;
        if (VAR_12) {
            const int VAR_14 = VAR_13 + VAR_5 * VAR_1[2];
            const int VAR_15 = VAR_13 + VAR_9 * VAR_1[2];
            const int VAR_16 = VAR_13 - VAR_9 * VAR_1[2];
            const int VAR_17 = VAR_13 - VAR_5 * VAR_1[2];

            const int VAR_18 = VAR_4 * VAR_1[1] + VAR_6 * VAR_1[3];
            const int VAR_19 = VAR_6 * VAR_1[1] - VAR_10 * VAR_1[3];
            const int VAR_20 = VAR_8 * VAR_1[1] - VAR_4 * VAR_1[3];
            const int VAR_21 = VAR_10 * VAR_1[1] - VAR_8 * VAR_1[3];

            VAR_1[0] = (VAR_14 + VAR_18) >> VAR_0;
            VAR_1[1] = (VAR_15 + VAR_19) >> VAR_0;
            VAR_1[2] = (VAR_16 + VAR_20) >> VAR_0;
            VAR_1[3] = (VAR_17 + VAR_21) >> VAR_0;
            VAR_1[4] = (VAR_17 - VAR_21) >> VAR_0;
            VAR_1[5] = (VAR_16 - VAR_20) >> VAR_0;
            VAR_1[6] = (VAR_15 - VAR_19) >> VAR_0;
            VAR_1[7] = (VAR_14 - VAR_18) >> VAR_0;
        } else {
            const int VAR_22 = VAR_13 >> VAR_0;
            if (VAR_22) {
                VAR_1[0] =
                VAR_1[1] =
                VAR_1[2] =
                VAR_1[3] =
                VAR_1[4] =
                VAR_1[5] =
                VAR_1[6] =
                VAR_1[7] = VAR_22;
            } else
                return 0;
        }
    } else if (!(VAR_12 | VAR_11)) {
        const int VAR_23 = (VAR_3 + VAR_7 * (VAR_1[0] + VAR_1[4])) >> VAR_0;
        const int VAR_24 = (VAR_3 + VAR_7 * (VAR_1[0] - VAR_1[4])) >> VAR_0;

        VAR_1[0] = VAR_23;
        VAR_1[3] = VAR_23;
        VAR_1[4] = VAR_23;
        VAR_1[7] = VAR_23;
        VAR_1[1] = VAR_24;
        VAR_1[2] = VAR_24;
        VAR_1[5] = VAR_24;
        VAR_1[6] = VAR_24;
    } else {
        const int VAR_25 = VAR_7 * VAR_1[0] + VAR_3;
        const int VAR_26 = VAR_25 + VAR_5 * VAR_1[2] + VAR_7 * VAR_1[4] + VAR_9 * VAR_1[6];
        const int VAR_27 = VAR_25 + VAR_9 * VAR_1[2] - VAR_7 * VAR_1[4] - VAR_5 * VAR_1[6];
        const int VAR_28 = VAR_25 - VAR_9 * VAR_1[2] - VAR_7 * VAR_1[4] + VAR_5 * VAR_1[6];
        const int VAR_29 = VAR_25 - VAR_5 * VAR_1[2] + VAR_7 * VAR_1[4] - VAR_9 * VAR_1[6];

        const int VAR_30 = VAR_4 * VAR_1[1] + VAR_6 * VAR_1[3] + VAR_8 * VAR_1[5] + VAR_10 * VAR_1[7];
        const int VAR_31 = VAR_6 * VAR_1[1] - VAR_10 * VAR_1[3] - VAR_4 * VAR_1[5] - VAR_8 * VAR_1[7];
        const int VAR_32 = VAR_8 * VAR_1[1] - VAR_4 * VAR_1[3] + VAR_10 * VAR_1[5] + VAR_6 * VAR_1[7];
        const int VAR_33 = VAR_10 * VAR_1[1] - VAR_8 * VAR_1[3] + VAR_6 * VAR_1[5] - VAR_4 * VAR_1[7];

        VAR_1[0] = (VAR_26 + VAR_30) >> VAR_0;
        VAR_1[1] = (VAR_27 + VAR_31) >> VAR_0;
        VAR_1[2] = (VAR_28 + VAR_32) >> VAR_0;
        VAR_1[3] = (VAR_29 + VAR_33) >> VAR_0;
        VAR_1[4] = (VAR_29 - VAR_33) >> VAR_0;
        VAR_1[5] = (VAR_28 - VAR_32) >> VAR_0;
        VAR_1[6] = (VAR_27 - VAR_31) >> VAR_0;
        VAR_1[7] = (VAR_26 - VAR_30) >> VAR_0;
    }
    return 1;
}
