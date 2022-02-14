
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct bintime {int frac; int sec; } ;
typedef int clock_usec_t ;
typedef int clock_sec_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static __inline void
FUNC_0(const struct bintime *VAR_1, clock_sec_t *VAR_2, clock_usec_t *VAR_3)
{

 *VAR_2 = VAR_1->sec;
 *VAR_3 = ((uint64_t)VAR_0 * (uint32_t)(VAR_1->frac >> 32)) >> 32;
}
