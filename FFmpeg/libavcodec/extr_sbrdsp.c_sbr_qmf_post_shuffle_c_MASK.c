
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union av_intfloat32 {unsigned int i; } ;



__attribute__((used)) static void FUNC_0(float VAR_0[32][2], const float *VAR_1)
{
    const union av_intfloat32 *VAR_2 = (const union av_intfloat32*) VAR_1;
    union av_intfloat32 *VAR_3 = (union av_intfloat32*) VAR_0;
    int VAR_4;
    for (VAR_4 = 0; VAR_4 < 32; VAR_4 += 2) {
        VAR_3[2 * VAR_4 + 0].i = VAR_2[63 - VAR_4].i ^ (1U << 31);
        VAR_3[2 * VAR_4 + 1].i = VAR_2[ VAR_4 + 0].i;
        VAR_3[2 * VAR_4 + 2].i = VAR_2[62 - VAR_4].i ^ (1U << 31);
        VAR_3[2 * VAR_4 + 3].i = VAR_2[ VAR_4 + 1].i;
    }
}
