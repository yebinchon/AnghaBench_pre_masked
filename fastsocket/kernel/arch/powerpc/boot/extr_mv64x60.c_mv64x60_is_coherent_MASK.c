
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v ;
typedef int u8 ;
typedef int u32 ;


 void* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (void*,char*,int *,int) ;

u8 FUNC_2(void)
{
 u32 VAR_0;
 void *VAR_1;

 VAR_1 = FUNC_0("/");
 if (VAR_1 == ((void*)0))
  return 1;

 if (FUNC_1(VAR_1, "coherency-off", &VAR_0, sizeof(VAR_0)) < 0)
  return 1;
 else
  return 0;
}
