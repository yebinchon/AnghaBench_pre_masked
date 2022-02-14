
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;
typedef int ptrdiff_t ;



__attribute__((used)) static void FUNC_0(uint8_t *VAR_0[4], ptrdiff_t VAR_1,
                              uint8_t *const VAR_2[4], int VAR_3, const int VAR_4[4],
                              int VAR_5, int VAR_6)
{
    int VAR_7, VAR_8;
    int VAR_9 = 2 * VAR_1;
    const uint8_t *VAR_10 = VAR_2[0];
    const uint8_t *VAR_11 = VAR_2[1];
    const uint8_t *VAR_12 = VAR_2[2];
    const uint8_t *VAR_13 = VAR_2[3];
    unsigned int VAR_14;

    for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
        if (VAR_3 == 3) {
            for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
                VAR_14 = VAR_10[VAR_7];
                VAR_0[0][VAR_9] = VAR_14;
                VAR_14 += 0x80;
                VAR_0[1][VAR_9] = VAR_11[VAR_7] - VAR_14;
                VAR_0[2][VAR_9] = VAR_12[VAR_7] - VAR_14;
                VAR_9++;
            }
        } else {
            for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
                VAR_14 = VAR_10[VAR_7];
                VAR_0[0][VAR_9] = VAR_14;
                VAR_14 += 0x80;
                VAR_0[1][VAR_9] = VAR_11[VAR_7] - VAR_14;
                VAR_0[2][VAR_9] = VAR_12[VAR_7] - VAR_14;
                VAR_0[3][VAR_9] = VAR_13[VAR_7];
                VAR_9++;
            }
            VAR_13 += VAR_4[3];
        }
        VAR_9 += VAR_1 - VAR_5;
        VAR_10 += VAR_4[0];
        VAR_11 += VAR_4[1];
        VAR_12 += VAR_4[2];
    }
}
