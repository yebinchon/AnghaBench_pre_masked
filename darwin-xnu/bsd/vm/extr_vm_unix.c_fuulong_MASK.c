
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_addr_t ;
typedef int ulongword ;
typedef unsigned long long uint64_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,void*,int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;

uint64_t
FUNC_4(user_addr_t VAR_0)
{
 uint64_t VAR_1;

 if (FUNC_0(FUNC_2())) {
  if (FUNC_1(VAR_0, (void *)&VAR_1, sizeof(VAR_1)) != 0)
   return(-1ULL);
  return(VAR_1);
 } else {
  return((uint64_t)FUNC_3(VAR_0));
 }
}
