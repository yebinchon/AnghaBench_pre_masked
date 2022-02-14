
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long long uint64_t ;
typedef scalar_t__ time_t ;
typedef int int32_t ;


 int VAR_0 ;

int32_t FUNC_0(uint64_t VAR_1, time_t *VAR_2)
{
    *VAR_2 = (time_t)((VAR_1 - 116444736000000000LL) / 10000000);
    return VAR_0;
}
