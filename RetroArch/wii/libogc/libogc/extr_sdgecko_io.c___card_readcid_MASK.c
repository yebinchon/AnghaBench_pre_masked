
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_1 (scalar_t__,int *,int) ;
 scalar_t__ FUNC_2 (scalar_t__,int*,int) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int ** VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static s32 FUNC_4(s32 VAR_4)
{
 u8 VAR_5[5] = {0,0,0,0,0};
 s32 VAR_6;

 if(VAR_4<0 || VAR_4>=VAR_1) return VAR_0;
 VAR_6 = 0;
 VAR_5[0] = 0x0A;
 if((VAR_6=FUNC_2(VAR_4,VAR_5,5))!=0) {
  return VAR_6;
 }
 if((VAR_6=FUNC_1(VAR_4,VAR_2[VAR_4],1))!=0) return VAR_6;
 VAR_6 = FUNC_3(VAR_4,VAR_2[VAR_4][0]);
 if(VAR_6==0) {
  if((VAR_6=FUNC_0(VAR_4,VAR_3[VAR_4],16))!=0) return VAR_6;
 }
 return VAR_6;
}
