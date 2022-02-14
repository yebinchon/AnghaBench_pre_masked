
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union av_intfloat32 {float f; int i; } ;



__attribute__((used)) static inline float FUNC_0(float VAR_0)
{
    union av_intfloat32 VAR_1;
    VAR_1.f = VAR_0;
    VAR_1.i = (VAR_1.i + 0x00007FFFU + (VAR_1.i & 0x00010000U >> 16)) & 0xFFFF0000U;
    return VAR_1.f;
}
