
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int int16_t ;



__attribute__((used)) static void FUNC_0(int16_t *VAR_0, int32_t *VAR_1)
{
    int16_t VAR_2, VAR_3;
    int VAR_4, VAR_5, VAR_6, VAR_7;
    int32_t VAR_8;

    VAR_1[0] = 16777216;
    VAR_1[1] = VAR_0[0] * -1024;

    for (VAR_4 = 2, VAR_6 = 2, VAR_7 = 2; VAR_4 <= 5; VAR_4++, VAR_6 += 2) {
        VAR_1[VAR_7] = VAR_1[VAR_7 - 2];

        for (VAR_5 = VAR_4; VAR_5 > 1; VAR_5--, VAR_7--) {
            VAR_2 = VAR_1[VAR_7 - 1] >> 16;
            VAR_3 = (VAR_1[VAR_7 - 1] - (VAR_2 * (1 << 16))) >> 1;

            VAR_8 = ((VAR_2 * VAR_0[VAR_6]) * 4) + (((VAR_3 * VAR_0[VAR_6]) >> 15) * 4);

            VAR_1[VAR_7] += VAR_1[VAR_7 - 2];
            VAR_1[VAR_7] -= (unsigned)VAR_8;
        }

        VAR_1[VAR_7] -= VAR_0[VAR_6] * (1 << 10);
        VAR_7 += VAR_4;
    }
}
