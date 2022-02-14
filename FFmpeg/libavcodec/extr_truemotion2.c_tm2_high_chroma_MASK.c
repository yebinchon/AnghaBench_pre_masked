
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline void FUNC_0(int *VAR_0, int VAR_1, int *VAR_2, unsigned *VAR_3, int *VAR_4)
{
    int VAR_5, VAR_6;
    for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
        for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {
            VAR_3[VAR_6] += VAR_4[VAR_5 + VAR_6 * 2];
            VAR_2[VAR_5] += VAR_3[VAR_6];
            VAR_0[VAR_5] = VAR_2[VAR_5];
        }
        VAR_0 += VAR_1;
    }
}
