
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
typedef unsigned long long uint32_t ;
typedef int kpc_config_t ;


 int FUNC_0 (unsigned long long) ;
 int FUNC_1 (int *) ;
 unsigned long long FUNC_2 () ;

int
FUNC_3(kpc_config_t *VAR_0, uint64_t VAR_1)
{
 uint32_t VAR_2 = FUNC_2();

 FUNC_1(VAR_0);

 for (uint32_t VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3)
  if ((1ULL << VAR_3) & VAR_1)
   *VAR_0++ = FUNC_0(VAR_3);
 return 0;
}
