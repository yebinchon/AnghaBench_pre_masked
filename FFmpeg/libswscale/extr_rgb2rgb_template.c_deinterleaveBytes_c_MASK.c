
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static void FUNC_0(const uint8_t *VAR_0, uint8_t *VAR_1, uint8_t *VAR_2,
                                int VAR_3, int VAR_4, int VAR_5,
                                int VAR_6, int VAR_7)
{
    int VAR_8;

    for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
        int VAR_9;
        for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
            VAR_1[VAR_9] = VAR_0[2 * VAR_9 + 0];
            VAR_2[VAR_9] = VAR_0[2 * VAR_9 + 1];
        }
        VAR_0 += VAR_5;
        VAR_1 += VAR_6;
        VAR_2 += VAR_7;
    }
}
