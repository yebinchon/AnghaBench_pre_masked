
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(int16_t VAR_4[64])
{
    int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    int VAR_13, VAR_14, VAR_15, VAR_16;
    int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
    int VAR_22;
    int VAR_23[64];

    for (VAR_22 = 0; VAR_22 < 8; VAR_22++) {
        VAR_13 = VAR_4[8 * 0 + VAR_22] + VAR_4[8 * 4 + VAR_22];
        VAR_14 = VAR_4[8 * 0 + VAR_22] - VAR_4[8 * 4 + VAR_22];

        VAR_16 = VAR_4[8 * 2 + VAR_22] + VAR_4[8 * 6 + VAR_22];
        VAR_15 = FUNC_0(VAR_4[8 * 2 + VAR_22] - VAR_4[8 * 6 + VAR_22], VAR_1) - VAR_16;

        VAR_5 = VAR_13 + VAR_16;
        VAR_8 = VAR_13 - VAR_16;
        VAR_6 = VAR_14 + VAR_15;
        VAR_7 = VAR_14 - VAR_15;

        VAR_21 = VAR_4[8 * 5 + VAR_22] + VAR_4[8 * 3 + VAR_22];
        VAR_18 = VAR_4[8 * 5 + VAR_22] - VAR_4[8 * 3 + VAR_22];
        VAR_19 = VAR_4[8 * 1 + VAR_22] + VAR_4[8 * 7 + VAR_22];
        VAR_20 = VAR_4[8 * 1 + VAR_22] - VAR_4[8 * 7 + VAR_22];

        VAR_12 = VAR_19 + VAR_21;
        VAR_14 = FUNC_0(VAR_19 - VAR_21, VAR_1);

        VAR_17 = FUNC_0(VAR_18 + VAR_20, VAR_2);
        VAR_13 = FUNC_0(VAR_20, VAR_0) - VAR_17;
        VAR_15 = FUNC_0(VAR_18, -VAR_3) + VAR_17;

        VAR_11 = VAR_15 - VAR_12;
        VAR_10 = VAR_14 - VAR_11;
        VAR_9 = VAR_13 + VAR_10;

        VAR_23[8 * 0 + VAR_22] = VAR_5 + VAR_12;
        VAR_23[8 * 7 + VAR_22] = VAR_5 - VAR_12;
        VAR_23[8 * 1 + VAR_22] = VAR_6 + VAR_11;
        VAR_23[8 * 6 + VAR_22] = VAR_6 - VAR_11;
        VAR_23[8 * 2 + VAR_22] = VAR_7 + VAR_10;
        VAR_23[8 * 5 + VAR_22] = VAR_7 - VAR_10;
        VAR_23[8 * 4 + VAR_22] = VAR_8 + VAR_9;
        VAR_23[8 * 3 + VAR_22] = VAR_8 - VAR_9;
    }

    for (VAR_22 = 0; VAR_22 < 8 * 8; VAR_22 += 8) {
        VAR_13 = VAR_23[0 + VAR_22] + VAR_23[4 + VAR_22];
        VAR_14 = VAR_23[0 + VAR_22] - VAR_23[4 + VAR_22];

        VAR_16 = VAR_23[2 + VAR_22] + VAR_23[6 + VAR_22];
        VAR_15 = FUNC_0(VAR_23[2 + VAR_22] - VAR_23[6 + VAR_22], VAR_1) - VAR_16;

        VAR_5 = VAR_13 + VAR_16;
        VAR_8 = VAR_13 - VAR_16;
        VAR_6 = VAR_14 + VAR_15;
        VAR_7 = VAR_14 - VAR_15;

        VAR_21 = VAR_23[5 + VAR_22] + VAR_23[3 + VAR_22];
        VAR_18 = VAR_23[5 + VAR_22] - VAR_23[3 + VAR_22];
        VAR_19 = VAR_23[1 + VAR_22] + VAR_23[7 + VAR_22];
        VAR_20 = VAR_23[1 + VAR_22] - VAR_23[7 + VAR_22];

        VAR_12 = VAR_19 + VAR_21;
        VAR_14 = FUNC_0(VAR_19 - VAR_21, VAR_1);

        VAR_17 = FUNC_0(VAR_18 + VAR_20, VAR_2);
        VAR_13 = FUNC_0(VAR_20, VAR_0) - VAR_17;
        VAR_15 = FUNC_0(VAR_18, -VAR_3) + VAR_17;

        VAR_11 = VAR_15 - VAR_12;
        VAR_10 = VAR_14 - VAR_11;
        VAR_9 = VAR_13 + VAR_10;

        VAR_4[0 + VAR_22] = (VAR_5 + VAR_12) >> 6;
        VAR_4[7 + VAR_22] = (VAR_5 - VAR_12) >> 6;
        VAR_4[1 + VAR_22] = (VAR_6 + VAR_11) >> 6;
        VAR_4[6 + VAR_22] = (VAR_6 - VAR_11) >> 6;
        VAR_4[2 + VAR_22] = (VAR_7 + VAR_10) >> 6;
        VAR_4[5 + VAR_22] = (VAR_7 - VAR_10) >> 6;
        VAR_4[4 + VAR_22] = (VAR_8 + VAR_9) >> 6;
        VAR_4[3 + VAR_22] = (VAR_8 - VAR_9) >> 6;
    }
}
