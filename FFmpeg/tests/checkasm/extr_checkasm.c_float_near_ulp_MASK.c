
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union av_intfloat32 {float f; scalar_t__ i; } ;
typedef scalar_t__ int64_t ;


 scalar_t__ FUNC_0 (union av_intfloat32) ;
 unsigned int FUNC_1 (scalar_t__) ;

int FUNC_2(float VAR_0, float VAR_1, unsigned VAR_2)
{
    union av_intfloat32 VAR_3, VAR_4;

    VAR_3.f = VAR_0;
    VAR_4.f = VAR_1;

    if (FUNC_0(VAR_3) != FUNC_0(VAR_4)) {

        return VAR_0 == VAR_1;
    }

    if (FUNC_1((int64_t)VAR_3.i - VAR_4.i) <= VAR_2)
        return 1;

    return 0;
}
