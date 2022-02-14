
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int int64_t ;



int64_t FUNC_0(uint64_t VAR_0, uint64_t VAR_1, uint64_t VAR_2)
{
    int64_t VAR_3 = (VAR_0 - VAR_1) & (VAR_2 - 1);
    if (VAR_3 > (VAR_2 >> 1))
        VAR_3 -= VAR_2;
    return VAR_3;
}
