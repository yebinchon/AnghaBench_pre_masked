
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
typedef int f32 ;


 int FUNC_0 (int,int) ;

f32 FUNC_1(u16 VAR_0,u16 VAR_1)
{
 u32 VAR_2,VAR_3,VAR_4;
 f32 VAR_5;

 VAR_5 = (f32)VAR_0/(f32)VAR_1;
 VAR_2 = (u32)((f32)256.0/VAR_5)&0x1ff;

 VAR_4 = VAR_1;
 VAR_3 = FUNC_0(VAR_0,VAR_2);
 while(VAR_3>=VAR_1) {
  VAR_5 = (f32)(VAR_4--)/(f32)VAR_0;
  VAR_2 = (u32)((f32)256.0/VAR_5)&0x1ff;
  VAR_3 = FUNC_0(VAR_0,VAR_2);
 }

 while(VAR_3<VAR_1) {
  VAR_5 = (f32)(VAR_4++)/(f32)VAR_0;
  VAR_2 = (u32)((f32)256.0/VAR_5)&0x1ff;
  VAR_3 = FUNC_0(VAR_0,VAR_2);
 }
 return VAR_5;
}
