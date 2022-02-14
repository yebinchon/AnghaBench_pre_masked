
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int32_t ;
typedef int int16_t ;



__attribute__((used)) static int32_t FUNC_0(int16_t *VAR_0, const int32_t *VAR_1,
                                              const int16_t *VAR_2,
                                              int VAR_3, int VAR_4)
{
    int VAR_5 = 0;

    do {
        VAR_5 += *VAR_0 * (uint32_t)*VAR_1++;
        *VAR_0++ += VAR_4 * *VAR_2++;
        VAR_5 += *VAR_0 * (uint32_t)*VAR_1++;
        *VAR_0++ += VAR_4 * *VAR_2++;
    } while (VAR_3-=2);
    return VAR_5;
}
