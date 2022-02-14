
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline float *FUNC_0(float *VAR_0, const float *VAR_1, unsigned VAR_2,
                           const float *VAR_3)
{
    float VAR_4 = *VAR_3;
    *VAR_0++ = VAR_1[VAR_2 & 15] * VAR_4;
    *VAR_0++ = VAR_1[VAR_2>>4 & 15] * VAR_4;
    return VAR_0;
}
