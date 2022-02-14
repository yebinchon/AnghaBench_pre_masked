
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int int32_t ;



__attribute__((used)) static uint64_t FUNC_0(const int32_t *VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3;
    uint64_t VAR_4 = 0;

    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
        int32_t VAR_5 = -2 * VAR_0[VAR_3] - 1;
        VAR_5 ^= VAR_5 >> 31;
        VAR_4 += (VAR_5 >> VAR_2) + 1 + VAR_2;
    }
    return VAR_4;
}
