
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static void FUNC_0(const uint8_t *VAR_0, int VAR_1,
                           uint8_t *VAR_2[], int VAR_3[], int VAR_4,
                           int VAR_5, int VAR_6, int VAR_7)
{
    uint8_t *VAR_8[3];
    int VAR_9, VAR_10;

    VAR_8[0] = VAR_2[0];
    VAR_8[1] = VAR_2[1];
    VAR_8[2] = VAR_2[2];

    if (VAR_5)
        VAR_0++;

    for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
        for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
            VAR_8[0][VAR_9] = VAR_0[0];
            VAR_8[1][VAR_9] = VAR_0[1];
            VAR_8[2][VAR_9] = VAR_0[2];

            VAR_0 += VAR_6;
        }
        VAR_0 += VAR_1 - VAR_7 * VAR_6;
        VAR_8[0] += VAR_3[0];
        VAR_8[1] += VAR_3[1];
        VAR_8[2] += VAR_3[2];
    }
}
