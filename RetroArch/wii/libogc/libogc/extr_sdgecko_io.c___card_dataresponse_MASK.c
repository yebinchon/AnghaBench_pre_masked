
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t s32 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int,int) ;
 size_t FUNC_1 (size_t,int *) ;
 int ** VAR_2 ;

__attribute__((used)) static s32 FUNC_2(s32 VAR_3)
{
 s32 VAR_4;
 u8 VAR_5;

 if((VAR_4=FUNC_1(VAR_3,VAR_2[VAR_3]))!=0) return VAR_4;
 VAR_5 = FUNC_0(VAR_2[VAR_3][0],1,3);
 if(VAR_5==0x0005) VAR_4 = VAR_0;
 else if(VAR_5==0x0006) VAR_4 = VAR_1;

 return VAR_4;
}
