
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
typedef float f32 ;
struct TYPE_3__ {int* r; } ;
typedef TYPE_1__ GXFogAdjTbl ;


 float FUNC_0 (float) ;

void FUNC_1(GXFogAdjTbl *VAR_0,u16 VAR_1,f32 VAR_2[4][4])
{
 u32 VAR_3,VAR_4;
 f32 VAR_5,VAR_6,VAR_7,VAR_8,VAR_9,VAR_10;

 if(VAR_2[3][3]==0.0f) {
  VAR_5 = VAR_2[2][3]/(VAR_2[2][2] - 1.0f);
  VAR_6 = VAR_5/VAR_2[0][0];
 } else {
  VAR_6 = 1.0f/VAR_2[0][0];
  VAR_5 = VAR_6*1.7320499f;
 }

 VAR_7 = VAR_5*VAR_5;
 VAR_8 = 2.0f/(f32)VAR_1;
 for(VAR_3=0;VAR_3<10;VAR_3++) {
  VAR_9 = (VAR_3+1)*32.0f;
  VAR_9 *= VAR_8;
  VAR_9 *= VAR_6;
  VAR_9 *= VAR_9;
  VAR_9 /= VAR_7;
  VAR_10 = FUNC_0(VAR_9 + 1.0f);
  VAR_4 = (u32)(VAR_10*256.0f);
  VAR_0->r[VAR_3] = (VAR_4&0x0fff);
 }
}
