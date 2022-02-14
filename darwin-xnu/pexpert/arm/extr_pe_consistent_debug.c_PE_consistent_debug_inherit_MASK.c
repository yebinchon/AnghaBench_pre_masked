
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int dbg_registry_t ;
typedef int DTEntry ;


 scalar_t__ FUNC_0 (int ,char*,void**,int *) ;
 scalar_t__ FUNC_1 (int *,char*,int *) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (uintptr_t,int) ;

int FUNC_3(void)
{
 DTEntry VAR_2;
 uintptr_t *VAR_3;
 uintptr_t VAR_4 = 0;
 uint32_t VAR_5;

        if ((FUNC_1(((void*)0), "/chosen", &VAR_2) == VAR_1))
  if (FUNC_0(VAR_2, "consistent-debug-root", (void **)&VAR_3, &VAR_5) == VAR_1)
   VAR_4 = VAR_3[0];
 if (VAR_4 == 0)
  return -1;
 VAR_0 = (dbg_registry_t *)FUNC_2(VAR_4, sizeof(dbg_registry_t));
 return 0;
}
