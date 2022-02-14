
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t ptrdiff_t ;
typedef int int16_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_0, ptrdiff_t VAR_1, int16_t *VAR_2)
{
    int VAR_3;
    register int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    int16_t *VAR_12, *VAR_13;

    VAR_12 = VAR_2;
    VAR_13 = VAR_2;

    for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
        VAR_4 = 12 * (VAR_12[0] + VAR_12[4]) + 4;
        VAR_5 = 12 * (VAR_12[0] - VAR_12[4]) + 4;
        VAR_6 = 16 * VAR_12[2] + 6 * VAR_12[6];
        VAR_7 = 6 * VAR_12[2] - 16 * VAR_12[6];

        VAR_8 = VAR_4 + VAR_6;
        VAR_9 = VAR_5 + VAR_7;
        VAR_10 = VAR_5 - VAR_7;
        VAR_11 = VAR_4 - VAR_6;

        VAR_4 = 16 * VAR_12[1] + 15 * VAR_12[3] + 9 * VAR_12[5] + 4 * VAR_12[7];
        VAR_5 = 15 * VAR_12[1] - 4 * VAR_12[3] - 16 * VAR_12[5] - 9 * VAR_12[7];
        VAR_6 = 9 * VAR_12[1] - 16 * VAR_12[3] + 4 * VAR_12[5] + 15 * VAR_12[7];
        VAR_7 = 4 * VAR_12[1] - 9 * VAR_12[3] + 15 * VAR_12[5] - 16 * VAR_12[7];

        VAR_13[0] = (VAR_8 + VAR_4) >> 3;
        VAR_13[1] = (VAR_9 + VAR_5) >> 3;
        VAR_13[2] = (VAR_10 + VAR_6) >> 3;
        VAR_13[3] = (VAR_11 + VAR_7) >> 3;
        VAR_13[4] = (VAR_11 - VAR_7) >> 3;
        VAR_13[5] = (VAR_10 - VAR_6) >> 3;
        VAR_13[6] = (VAR_9 - VAR_5) >> 3;
        VAR_13[7] = (VAR_8 - VAR_4) >> 3;

        VAR_12 += 8;
        VAR_13 += 8;
    }

    VAR_12 = VAR_2;
    for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
        VAR_4 = 17 * (VAR_12[ 0] + VAR_12[16]) + 64;
        VAR_5 = 17 * (VAR_12[ 0] - VAR_12[16]) + 64;
        VAR_6 = 22 * VAR_12[ 8] + 10 * VAR_12[24];
        VAR_7 = 22 * VAR_12[24] - 10 * VAR_12[ 8];

        VAR_0[0 * VAR_1] = FUNC_0(VAR_0[0 * VAR_1] + ((VAR_4 + VAR_6) >> 7));
        VAR_0[1 * VAR_1] = FUNC_0(VAR_0[1 * VAR_1] + ((VAR_5 - VAR_7) >> 7));
        VAR_0[2 * VAR_1] = FUNC_0(VAR_0[2 * VAR_1] + ((VAR_5 + VAR_7) >> 7));
        VAR_0[3 * VAR_1] = FUNC_0(VAR_0[3 * VAR_1] + ((VAR_4 - VAR_6) >> 7));

        VAR_12++;
        VAR_0++;
    }
}
