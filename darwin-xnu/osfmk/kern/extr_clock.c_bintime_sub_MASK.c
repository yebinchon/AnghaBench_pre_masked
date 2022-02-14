
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct bintime {scalar_t__ frac; scalar_t__ sec; } ;



__attribute__((used)) static __inline void
FUNC_0(struct bintime *VAR_0, const struct bintime *VAR_1)
{
 uint64_t VAR_2;

 VAR_2 = VAR_0->frac;
 VAR_0->frac -= VAR_1->frac;
 if (VAR_2 < VAR_0->frac)
  VAR_0->sec--;
 VAR_0->sec -= VAR_1->sec;
}
