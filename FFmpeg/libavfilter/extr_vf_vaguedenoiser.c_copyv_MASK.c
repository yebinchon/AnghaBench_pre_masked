
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline void FUNC_0(const float *VAR_0, const int VAR_1, float *VAR_2, const int VAR_3)
{
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        VAR_2[VAR_4] = *VAR_0;
        VAR_0 += VAR_1;
    }
}
