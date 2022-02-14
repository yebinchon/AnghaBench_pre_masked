
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
typedef unsigned long long uint32_t ;
typedef int kpc_config_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (unsigned long long) ;
 unsigned long long FUNC_2 () ;
 unsigned long long FUNC_3 () ;

int
FUNC_4(kpc_config_t *VAR_0, uint64_t VAR_1)
{
 uint32_t VAR_2 = FUNC_2(), VAR_3 = FUNC_3();

 FUNC_0(VAR_0);

 for (uint32_t VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4)
  if ((1ULL << VAR_4) & VAR_1)
   *VAR_0++ = FUNC_1(VAR_4 + VAR_3);
 return 0;
}
