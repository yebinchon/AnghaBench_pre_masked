
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int s8 ;
typedef float f32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;

void FUNC_2(u8 VAR_0,f32 VAR_1[2][3],s8 VAR_2)
{
 u32 VAR_3,VAR_4;
 u32 VAR_5,VAR_6,VAR_7;

 if(VAR_0>0x00 && VAR_0<0x04) VAR_0 -= 0x01;
 else if(VAR_0>0x04 && VAR_0<0x08) VAR_0 -= 0x05;
 else if(VAR_0>0x08 && VAR_0<0x0C) VAR_0 -= 0x09;
 else VAR_0 = 0x00;

 VAR_6 = (VAR_2+17);
 VAR_7 = ((VAR_0<<2)-VAR_0);

 VAR_3 = (u32)(VAR_1[0][0]*1024.0F);
 VAR_4 = (u32)(VAR_1[1][0]*1024.0F);
 VAR_5 = (FUNC_1((0x06+VAR_7),24,8)|FUNC_1(VAR_6,22,2)|FUNC_1(VAR_4,11,11)|FUNC_1(VAR_3,0,11));
 FUNC_0(VAR_5);

 VAR_3 = (u32)(VAR_1[0][1]*1024.0F);
 VAR_4 = (u32)(VAR_1[1][1]*1024.0F);
 VAR_5 = (FUNC_1((0x07+VAR_7),24,8)|FUNC_1((VAR_6>>2),22,2)|FUNC_1(VAR_4,11,11)|FUNC_1(VAR_3,0,11));
 FUNC_0(VAR_5);

 VAR_3 = (u32)(VAR_1[0][2]*1024.0F);
 VAR_4 = (u32)(VAR_1[1][2]*1024.0F);
 VAR_5 = (FUNC_1((0x08+VAR_7),24,8)|FUNC_1((VAR_6>>4),22,2)|FUNC_1(VAR_4,11,11)|FUNC_1(VAR_3,0,11));
 FUNC_0(VAR_5);
}
