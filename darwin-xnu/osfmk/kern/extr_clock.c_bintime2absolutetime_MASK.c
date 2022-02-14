
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct bintime {int frac; scalar_t__ sec; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int*) ;

__attribute__((used)) static __inline void
FUNC_1(const struct bintime *VAR_1, uint64_t *VAR_2)
{
 uint64_t VAR_3;
 VAR_3 = (uint64_t) VAR_1->sec * (uint64_t)VAR_0 + (((uint64_t)VAR_0 * (uint32_t)(VAR_1->frac >> 32)) >> 32);
 FUNC_0(VAR_3, VAR_2);
}
