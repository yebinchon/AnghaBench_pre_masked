
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static int FUNC_0(uint8_t *VAR_0, uint8_t *VAR_1, int VAR_2, int VAR_3,
                           int VAR_4, int VAR_5, int VAR_6, uint8_t *VAR_7)
{
    int VAR_8, VAR_9;
    uint8_t *VAR_10;
    uint8_t *VAR_11;
    int VAR_12 = 0;

    for (VAR_8 = VAR_2 + VAR_4; VAR_8 > VAR_2; VAR_8--) {
        VAR_10 = VAR_0 + VAR_8 * VAR_6 + VAR_3 * 3;
        VAR_11 = VAR_7 + VAR_8 * VAR_6 + VAR_3 * 3;
        for (VAR_9 = 0; VAR_9 < VAR_5 * 3; VAR_9++) {
            VAR_12 |= VAR_11[VAR_9] ^ VAR_10[VAR_9];
            VAR_1[VAR_9] = VAR_10[VAR_9];
        }
        VAR_1 += VAR_5 * 3;
    }
    if (VAR_12)
        return 1;
    return 0;
}
