
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (void*) ;

void* FUNC_2(u32 VAR_0,u32 VAR_1)
{
 u32 VAR_2;
 void *VAR_3 = ((void*)0);

 VAR_2 = (u32)FUNC_0();
 VAR_3 = (void*)((VAR_2+(VAR_1-1))&~(VAR_1-1));
 VAR_2 = ((((u32)VAR_3+VAR_0+VAR_1)-1)&~(VAR_1-1));
 FUNC_1((void*)VAR_2);

 return VAR_3;
}
