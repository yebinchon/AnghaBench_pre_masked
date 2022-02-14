
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ clock_usec_t ;
typedef int clock_sec_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline void
FUNC_0(uint64_t VAR_1, clock_sec_t *VAR_2, clock_usec_t *VAR_3)
{
 *VAR_2 = VAR_1 / (uint64_t)VAR_0;
 *VAR_3 = (clock_usec_t)(VAR_1 % (uint64_t)VAR_0);
}
