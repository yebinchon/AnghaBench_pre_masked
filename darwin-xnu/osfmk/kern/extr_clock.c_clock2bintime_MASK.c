
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const uint64_t ;
struct bintime {int frac; int sec; } ;
typedef int clock_usec_t ;
typedef int clock_sec_t ;



__attribute__((used)) static __inline void
FUNC_0(const clock_sec_t *VAR_0, const clock_usec_t *VAR_1, struct bintime *VAR_2)
{

 VAR_2->sec = *VAR_0;

 VAR_2->frac = *VAR_1 * (uint64_t)18446744073709LL;
}
