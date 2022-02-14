
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int *,int) ;

__attribute__((used)) static s32 FUNC_1(s32 VAR_2,u8 VAR_3,u8 *VAR_4)
{
 u8 VAR_5[5] = {0,0,0,0,0};

 if(VAR_2<0 || VAR_2>=VAR_1) return VAR_0;

 VAR_5[0] = VAR_3;
 if(VAR_4) {
  VAR_5[1] = VAR_4[0];
  VAR_5[2] = VAR_4[1];
  VAR_5[3] = VAR_4[2];
  VAR_5[4] = VAR_4[3];
 }
 return FUNC_0(VAR_2,VAR_5,5);
}
