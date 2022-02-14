
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t s32 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (size_t,int ,int) ;
 size_t FUNC_1 (size_t) ;
 size_t FUNC_2 (size_t) ;
 size_t FUNC_3 (size_t,int,int *) ;
 size_t FUNC_4 (size_t,int) ;
 int* VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static s32 FUNC_5(s32 VAR_4)
{
 s32 VAR_5;

 if(VAR_4<0 || VAR_4>=VAR_1) return VAR_0;
 if(VAR_2[VAR_4]!=64) {
  VAR_2[VAR_4] = 64;
  if((VAR_5=FUNC_4(VAR_4,VAR_2[VAR_4]))!=0) return VAR_5;
 }
 if((VAR_5=FUNC_2(VAR_4))!=0) return VAR_5;
 if((VAR_5=FUNC_3(VAR_4,0x0d,((void*)0)))!=0) return VAR_5;
 if((VAR_5=FUNC_1(VAR_4))!=0) return VAR_5;
 VAR_5 = FUNC_0(VAR_4,VAR_3[VAR_4],64);

 return VAR_5;
}
