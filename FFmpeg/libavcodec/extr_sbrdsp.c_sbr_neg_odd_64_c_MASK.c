
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union av_intfloat32 {unsigned int i; } ;



__attribute__((used)) static void FUNC_0(float *VAR_0)
{
    union av_intfloat32 *VAR_1 = (union av_intfloat32*) VAR_0;
    int VAR_2;
    for (VAR_2 = 1; VAR_2 < 64; VAR_2 += 4) {
        VAR_1[VAR_2 + 0].i ^= 1U << 31;
        VAR_1[VAR_2 + 2].i ^= 1U << 31;
    }
}
