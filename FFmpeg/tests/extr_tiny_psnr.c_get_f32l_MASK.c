
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union av_intfloat32 {int i; float f; } ;
typedef int uint8_t ;



__attribute__((used)) static float FUNC_0(uint8_t *VAR_0)
{
    union av_intfloat32 VAR_1;
    VAR_1.i = VAR_0[0] | VAR_0[1] << 8 | VAR_0[2] << 16 | VAR_0[3] << 24;
    return VAR_1.f;
}
