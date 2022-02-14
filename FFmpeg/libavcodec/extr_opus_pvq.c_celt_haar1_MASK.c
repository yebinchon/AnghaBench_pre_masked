
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float VAR_0 ;

__attribute__((used)) static void FUNC_0(float *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4, VAR_5;
    VAR_2 >>= 1;
    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
            float VAR_6 = VAR_1[VAR_3 * (2 * VAR_5 + 0) + VAR_4];
            float VAR_7 = VAR_1[VAR_3 * (2 * VAR_5 + 1) + VAR_4];
            VAR_1[VAR_3 * (2 * VAR_5 + 0) + VAR_4] = (VAR_6 + VAR_7) * VAR_0;
            VAR_1[VAR_3 * (2 * VAR_5 + 1) + VAR_4] = (VAR_6 - VAR_7) * VAR_0;
        }
    }
}
