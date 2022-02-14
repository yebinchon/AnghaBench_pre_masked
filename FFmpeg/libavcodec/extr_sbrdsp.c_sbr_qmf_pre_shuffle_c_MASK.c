
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union av_intfloat32 {unsigned int i; } ;



__attribute__((used)) static void FUNC_0(float *VAR_0)
{
    union av_intfloat32 *VAR_1 = (union av_intfloat32*) VAR_0;
    int VAR_2;
    VAR_1[64].i = VAR_1[0].i;
    VAR_1[65].i = VAR_1[1].i;
    for (VAR_2 = 1; VAR_2 < 31; VAR_2 += 2) {
        VAR_1[64 + 2 * VAR_2 + 0].i = VAR_1[64 - VAR_2].i ^ (1U << 31);
        VAR_1[64 + 2 * VAR_2 + 1].i = VAR_1[ VAR_2 + 1].i;
        VAR_1[64 + 2 * VAR_2 + 2].i = VAR_1[63 - VAR_2].i ^ (1U << 31);
        VAR_1[64 + 2 * VAR_2 + 3].i = VAR_1[ VAR_2 + 2].i;
    }

    VAR_1[64 + 2 * 31 + 0].i = VAR_1[64 - 31].i ^ (1U << 31);
    VAR_1[64 + 2 * 31 + 1].i = VAR_1[31 + 1].i;
}
