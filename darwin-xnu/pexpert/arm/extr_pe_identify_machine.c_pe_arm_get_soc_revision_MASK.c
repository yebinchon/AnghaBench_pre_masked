
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int DTEntry ;


 scalar_t__ FUNC_0 (char*,char*,int *) ;
 scalar_t__ FUNC_1 (int ,char*,void**,int*) ;
 scalar_t__ VAR_0 ;

uint32_t
FUNC_2(void)
{
 DTEntry VAR_1;
 uint32_t *VAR_2;
 uint32_t VAR_3;

 if ((FUNC_0("name", "arm-io", &VAR_1) == VAR_0)
     && (FUNC_1(VAR_1, "chip-revision", (void **)&VAR_2, &VAR_3) == VAR_0)) {
  if (VAR_3 == 8)
   return((uint32_t)*(unsigned long long *)VAR_2);
  else
   return(*VAR_2);
 }
 return 0;
}
