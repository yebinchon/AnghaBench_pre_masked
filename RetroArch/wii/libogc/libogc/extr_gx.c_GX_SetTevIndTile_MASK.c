
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
typedef int s32 ;
typedef float f64 ;
typedef float f32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,float**,int) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_7 ;

void FUNC_2(u8 VAR_8,u8 VAR_9,u16 VAR_10,u16 VAR_11,u16 VAR_12,u16 VAR_13,u8 VAR_14,u8 VAR_15,u8 VAR_16,u8 VAR_17)
{
 s32 VAR_18,VAR_19;
 f32 VAR_20[2][3];
 f64 VAR_21,VAR_22;
 u32 VAR_23[2] = { 0x43300000,VAR_12 };
 u32 VAR_24[2] = { 0x43300000,VAR_13 };

 VAR_18 = VAR_6;
 if(VAR_10==0x0010) VAR_18 = VAR_2;
 else if(VAR_10==0x0020) VAR_18 = VAR_4;
 else if(VAR_10==0x0040) VAR_18 = VAR_5;
 else if(VAR_10==0x0080) VAR_18 = VAR_1;
 else if(VAR_10==0x0100) VAR_18 = VAR_3;

 VAR_19 = VAR_6;
 if(VAR_11==0x0010) VAR_19 = VAR_2;
 else if(VAR_11==0x0020) VAR_19 = VAR_4;
 else if(VAR_11==0x0040) VAR_19 = VAR_5;
 else if(VAR_11==0x0080) VAR_19 = VAR_1;
 else if(VAR_11==0x0100) VAR_19 = VAR_3;

 VAR_21 = *(f64*)((void*)VAR_23);
 VAR_22 = *(f64*)((void*)VAR_24);

 VAR_20[0][0] = (f32)((VAR_21 - 4503599627370496.0F)*0.00097656250F);
 VAR_20[0][1] = 0.0F;
 VAR_20[0][2] = 0.0F;
 VAR_20[1][0] = 0.0F;
 VAR_20[1][1] = (f32)((VAR_22 - 4503599627370496.0F)*0.00097656250F);
 VAR_20[1][2] = 0.0F;

 FUNC_0(VAR_15,VAR_20,10);
 FUNC_1(VAR_8,VAR_9,VAR_14,VAR_16,VAR_15,VAR_18,VAR_19,VAR_0,VAR_7,VAR_17);
}
