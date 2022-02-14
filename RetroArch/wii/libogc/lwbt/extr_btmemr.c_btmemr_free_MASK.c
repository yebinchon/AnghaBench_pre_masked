
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int u32 ;
struct mem {scalar_t__ used; } ;


 int * VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mem*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct mem* VAR_3 ;

void FUNC_3(void *VAR_4)
{
 u32 VAR_5;
 struct mem *VAR_6;

 if(VAR_4==((void*)0)) return;
 if((u8_t*)VAR_4<(u8_t*)VAR_1 || (u8_t*)VAR_4>=(u8_t*)VAR_2) return;

 FUNC_0(VAR_5);
 VAR_6 = (struct mem*)((u8_t*)VAR_4 - VAR_0);
 VAR_6->used = 0;

 if(VAR_6<VAR_3) VAR_3 = VAR_6;

 FUNC_2(VAR_6);
 FUNC_1(VAR_5);
}
