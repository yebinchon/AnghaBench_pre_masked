
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
typedef unsigned long long uint32_t ;
typedef int kpc_config_t ;


 unsigned long long FUNC_0 (unsigned long long) ;
 unsigned long long FUNC_1 () ;
 int FUNC_2 (unsigned long long,int) ;
 int FUNC_3 (unsigned long long,unsigned long long) ;

__attribute__((used)) static int
FUNC_4(kpc_config_t *VAR_0, uint64_t VAR_1)
{
 uint32_t VAR_2 = FUNC_1();
 uint64_t VAR_3;

 for (uint32_t VAR_4 = 0; VAR_4 < VAR_2; VAR_4++ ) {
  if (((1ULL << VAR_4) & VAR_1) == 0)
   continue;


  VAR_3 = FUNC_0(VAR_4);
  FUNC_2(VAR_4, *VAR_0 & 0xffc7ffffull);
  FUNC_3(VAR_4, VAR_3);


  VAR_0++;
 }

 return 0;
}
