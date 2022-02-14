
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union av_intfloat32 {float f; unsigned int i; } ;



__attribute__((used)) static inline float *FUNC_0(float *VAR_0, const float *VAR_1, unsigned VAR_2,
                            unsigned VAR_3, const float *VAR_4)
{
    union av_intfloat32 VAR_5, VAR_6;

    VAR_5 = VAR_6 = *VAR_4;
    VAR_5 ^= VAR_3 >> 1 << 31;
    VAR_6 ^= VAR_3 << 31;

    *VAR_0++ = VAR_1[VAR_2 & 15] * VAR_5;
    *VAR_0++ = VAR_1[VAR_2>>4 & 15] * VAR_6;

    return VAR_0;
}
