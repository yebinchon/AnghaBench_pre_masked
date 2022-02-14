
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
struct mem {scalar_t__ used; } ;


 int * VAR_0 ;
 int FUNC_0 (struct mem*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct mem* VAR_3 ;

void FUNC_1(void *VAR_4)
{
 struct mem *VAR_5;

 if(VAR_4==((void*)0)) return;
 if((u8_t*)VAR_4<(u8_t*)VAR_1 || (u8_t*)VAR_4>=(u8_t*)VAR_2) return;

 VAR_5 = (struct mem*)((u8_t*)VAR_4 - VAR_0);
 VAR_5->used = 0;

 if(VAR_5<VAR_3) VAR_3 = VAR_5;

 FUNC_0(VAR_5);
}
