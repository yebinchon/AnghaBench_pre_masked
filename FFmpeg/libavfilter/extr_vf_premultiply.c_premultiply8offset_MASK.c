
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;



__attribute__((used)) static void FUNC_0(const uint8_t *VAR_0, const uint8_t *VAR_1,
                               uint8_t *VAR_2,
                               ptrdiff_t VAR_3, ptrdiff_t VAR_4,
                               ptrdiff_t VAR_5,
                               int VAR_6, int VAR_7,
                               int VAR_8, int VAR_9, int VAR_10)
{
    int VAR_11, VAR_12;

    for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
        for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
            VAR_2[VAR_11] = ((((VAR_0[VAR_11] - VAR_10) * (((VAR_1[VAR_11] >> 1) & 1) + VAR_1[VAR_11])) + 128) >> 8) + VAR_10;
        }

        VAR_2 += VAR_5;
        VAR_0 += VAR_3;
        VAR_1 += VAR_4;
    }
}
