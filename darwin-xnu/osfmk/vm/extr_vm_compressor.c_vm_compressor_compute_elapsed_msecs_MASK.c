
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int clock_sec_t ;
typedef int clock_nsec_t ;



uint64_t
FUNC_0(clock_sec_t VAR_0, clock_nsec_t VAR_1, clock_sec_t VAR_2, clock_nsec_t VAR_3)
{
        uint64_t VAR_4;
        uint64_t VAR_5;

 VAR_4 = (VAR_0 * 1000) + VAR_1 / 1000000;
 VAR_5 = (VAR_2 * 1000) + VAR_3 / 1000000;

 return (VAR_4 - VAR_5);
}
