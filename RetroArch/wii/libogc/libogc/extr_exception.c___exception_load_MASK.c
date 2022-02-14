
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;


 int FUNC_0 (void*,size_t) ;
 int FUNC_1 (void*,size_t) ;
 int FUNC_2 () ;
 int* VAR_0 ;
 int FUNC_3 (void*,void*,size_t) ;

void FUNC_4(u32 VAR_1,void *VAR_2,u32 VAR_3,void *VAR_4)
{
 void *VAR_5 = (void*)(0x80000000|VAR_0[VAR_1]);
 FUNC_3(VAR_5,VAR_2,VAR_3);
 if(VAR_4)
  *(u32*)((u32)VAR_5+(VAR_4-VAR_2)) |= VAR_1;

 FUNC_0(VAR_5,VAR_3);
 FUNC_1(VAR_5,VAR_3);
 FUNC_2();
}
