
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
    register int VAR_4, VAR_5, VAR_6, VAR_7;
    int16_t *VAR_8, *VAR_9;

    VAR_8 = VAR_2;
    VAR_9 = VAR_2;
    for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
        VAR_4 = 17 * (VAR_8[0] + VAR_8[2]) + 4;
        VAR_5 = 17 * (VAR_8[0] - VAR_8[2]) + 4;
        VAR_6 = 22 * VAR_8[1] + 10 * VAR_8[3];
        VAR_7 = 22 * VAR_8[3] - 10 * VAR_8[1];

        VAR_9[0] = (VAR_4 + VAR_6) >> 3;
        VAR_9[1] = (VAR_5 - VAR_7) >> 3;
        VAR_9[2] = (VAR_5 + VAR_7) >> 3;
        VAR_9[3] = (VAR_4 - VAR_6) >> 3;

        VAR_8 += 8;
        VAR_9 += 8;
    }

    VAR_8 = VAR_2;
    for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
        VAR_4 = 17 * (VAR_8[0] + VAR_8[16]) + 64;
        VAR_5 = 17 * (VAR_8[0] - VAR_8[16]) + 64;
        VAR_6 = 22 * VAR_8[8] + 10 * VAR_8[24];
        VAR_7 = 22 * VAR_8[24] - 10 * VAR_8[8];

        VAR_0[0 * VAR_1] = FUNC_0(VAR_0[0 * VAR_1] + ((VAR_4 + VAR_6) >> 7));
        VAR_0[1 * VAR_1] = FUNC_0(VAR_0[1 * VAR_1] + ((VAR_5 - VAR_7) >> 7));
        VAR_0[2 * VAR_1] = FUNC_0(VAR_0[2 * VAR_1] + ((VAR_5 + VAR_7) >> 7));
        VAR_0[3 * VAR_1] = FUNC_0(VAR_0[3 * VAR_1] + ((VAR_4 - VAR_6) >> 7));

        VAR_8++;
        VAR_0++;
    }
}
