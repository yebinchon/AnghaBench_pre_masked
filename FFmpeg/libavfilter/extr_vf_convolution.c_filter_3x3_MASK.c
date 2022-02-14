
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_0, int VAR_1,
                       float VAR_2, float VAR_3, const int *const VAR_4,
                       const uint8_t *VAR_5[], int VAR_6, int VAR_7,
                       int VAR_8, int VAR_9)
{
    const uint8_t *VAR_10 = VAR_5[0], *VAR_11 = VAR_5[1], *VAR_12 = VAR_5[2];
    const uint8_t *VAR_13 = VAR_5[3], *VAR_14 = VAR_5[4], *VAR_15 = VAR_5[5];
    const uint8_t *VAR_16 = VAR_5[6], *VAR_17 = VAR_5[7], *VAR_18 = VAR_5[8];
    int VAR_19;

    for (VAR_19 = 0; VAR_19 < VAR_1; VAR_19++) {
        int VAR_20 = VAR_10[VAR_19] * VAR_4[0] + VAR_11[VAR_19] * VAR_4[1] + VAR_12[VAR_19] * VAR_4[2] +
                  VAR_13[VAR_19] * VAR_4[3] + VAR_14[VAR_19] * VAR_4[4] + VAR_15[VAR_19] * VAR_4[5] +
                  VAR_16[VAR_19] * VAR_4[6] + VAR_17[VAR_19] * VAR_4[7] + VAR_18[VAR_19] * VAR_4[8];
        VAR_20 = (int)(VAR_20 * VAR_2 + VAR_3 + 0.5f);
        VAR_0[VAR_19] = FUNC_0(VAR_20);
    }
}
