
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;



__attribute__((used)) static inline void FUNC_0(uint8_t *VAR_0, const uint8_t *VAR_1,
                              int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
    int VAR_6, VAR_7, VAR_8;

    VAR_6 = VAR_4 + VAR_5 * VAR_3;
    for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
        for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
            if ((VAR_6 + VAR_7) < 0 || (VAR_6 + VAR_7) >= VAR_2 * VAR_3)
                VAR_0[VAR_7] = 0;
            else
                VAR_0[VAR_7] = VAR_1[VAR_7];
        }
        VAR_0 += VAR_3;
        VAR_1 += VAR_3;
        VAR_6 += VAR_3;
    }
}
