
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int *,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int ** VAR_2 ;

__attribute__((used)) static s32 FUNC_3(s32 VAR_3)
{
 s32 VAR_4;

 if(VAR_3<0 || VAR_3>=VAR_1) return VAR_0;
 VAR_4 = 0;
 if((VAR_4=FUNC_1(VAR_3))!=0) {
  return VAR_4;
 }

 if((VAR_4=FUNC_0(VAR_3,VAR_2[VAR_3],1))!=0) return VAR_4;
 return FUNC_2(VAR_3,VAR_2[VAR_3][0]);
}
