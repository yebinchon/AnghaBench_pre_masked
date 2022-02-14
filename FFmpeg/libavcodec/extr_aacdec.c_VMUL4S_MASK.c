
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union av_intfloat32 {float const f; unsigned int i; } ;



__attribute__((used)) static inline float *FUNC_0(float *VAR_0, const float *VAR_1, unsigned VAR_2,
                            unsigned VAR_3, const float *VAR_4)
{
    unsigned VAR_5 = VAR_2 >> 12;
    union av_intfloat32 VAR_6 = { .f = *VAR_4 };
    union av_intfloat32 VAR_7;

    VAR_7.i = VAR_6.i ^ (VAR_3 & 1U<<31);
    *VAR_0++ = VAR_1[VAR_2 & 3] * VAR_7.f;

    VAR_3 <<= VAR_5 & 1; VAR_5 >>= 1;
    VAR_7.i = VAR_6.i ^ (VAR_3 & 1U<<31);
    *VAR_0++ = VAR_1[VAR_2>>2 & 3] * VAR_7.f;

    VAR_3 <<= VAR_5 & 1; VAR_5 >>= 1;
    VAR_7.i = VAR_6.i ^ (VAR_3 & 1U<<31);
    *VAR_0++ = VAR_1[VAR_2>>4 & 3] * VAR_7.f;

    VAR_3 <<= VAR_5 & 1;
    VAR_7.i = VAR_6.i ^ (VAR_3 & 1U<<31);
    *VAR_0++ = VAR_1[VAR_2>>6 & 3] * VAR_7.f;

    return VAR_0;
}
