
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
typedef scalar_t__ s64 ;
typedef int ieee754sp ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (unsigned long long) ;

ieee754sp FUNC_3(u64 VAR_0)
{
 if ((s64) VAR_0 < 0)
  return FUNC_1(FUNC_0(),
         FUNC_2(VAR_0 & ~(1ULL << 63)));
 return FUNC_2(VAR_0);
}
