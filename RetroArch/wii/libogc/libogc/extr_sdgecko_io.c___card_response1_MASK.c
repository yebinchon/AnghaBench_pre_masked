
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t s32 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (size_t,int *,int) ;
 size_t FUNC_1 (size_t,int ) ;
 int ** VAR_2 ;

__attribute__((used)) static s32 FUNC_2(s32 VAR_3)
{
 s32 VAR_4;

 if(VAR_3<0 || VAR_3>=VAR_1) return VAR_0;

 if((VAR_4=FUNC_0(VAR_3,VAR_2[VAR_3],1))!=0) return VAR_4;
 return FUNC_1(VAR_3,VAR_2[VAR_3][0]);
}
