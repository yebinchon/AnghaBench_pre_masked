
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
typedef unsigned long long uint32_t ;
typedef int kpc_config_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 unsigned long long FUNC_1 () ;
 int * FUNC_2 (unsigned long long) ;
 unsigned long long FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned long long,int ) ;

__attribute__((used)) static int
FUNC_6(kpc_config_t *VAR_1, uint64_t VAR_2)
{
 uint32_t VAR_3 = FUNC_1(), VAR_4 = FUNC_3();
 boolean_t VAR_5;

 FUNC_0(VAR_1);

 VAR_5 = FUNC_4(VAR_0);

 for (uint32_t VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6) {
  if (((1ULL << VAR_6) & VAR_2) == 0)
   continue;
  FUNC_0(FUNC_2(VAR_6 + VAR_4));

  FUNC_5(VAR_6 + VAR_4, *VAR_1++);
 }

 FUNC_4(VAR_5);

 return 0;
}
