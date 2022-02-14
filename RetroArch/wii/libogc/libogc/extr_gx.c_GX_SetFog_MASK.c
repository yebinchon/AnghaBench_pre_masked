
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ieee32 {float f; int i; } ;
typedef float f32 ;
struct TYPE_3__ {int r; int g; int b; } ;
typedef TYPE_1__ GXColor ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int,int) ;

void FUNC_3(u8 VAR_0,f32 VAR_1,f32 VAR_2,f32 VAR_3,f32 VAR_4,GXColor VAR_5)
{
    f32 VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
    u32 VAR_11, VAR_12, VAR_13, VAR_14,VAR_15,VAR_16 = 0;
 union ieee32 { f32 f; u32 i; } VAR_17;

   VAR_16 = FUNC_2(VAR_0,3,1);


 if(VAR_16) {
  if((VAR_4==VAR_3) || (VAR_2==VAR_1)) {

   VAR_10 = 0.0f;
   VAR_9 = 0.0f;
  } else {
   VAR_6 = 1.0f/(VAR_2-VAR_1);
   VAR_10 = (VAR_4-VAR_3) * VAR_6;
   VAR_9 = (VAR_1-VAR_3) * VAR_6;
  }

  VAR_11 = 0;
  VAR_12 = 0;
 } else {

  if((VAR_4==VAR_3) || (VAR_2==VAR_1)) {

   VAR_6 = 0.0f;
   VAR_7 = 0.5f;
   VAR_9 = 0.0f;
  } else {
   VAR_6 = (VAR_4*VAR_3)/((VAR_4-VAR_3)*(VAR_2-VAR_1));
   VAR_7 = VAR_4/(VAR_4-VAR_3);
   VAR_9 = VAR_1/(VAR_2-VAR_1);
  }

  VAR_8 = VAR_7;
  VAR_11 = 1;
  while(VAR_8>1.0f) {
   VAR_8 /= 2.0f;
   VAR_11++;
  }

  while((VAR_8>0.0f) && (VAR_8<0.5f)) {
   VAR_8 *= 2.0f;
   VAR_11--;
  }

  VAR_10 = VAR_6/(1<<(VAR_11));
  VAR_12 = (u32)(VAR_8 * 8388638.0f);
 }
 VAR_17.f = VAR_10;
    VAR_13 = VAR_17.i;

 VAR_17.f = VAR_9;
    VAR_14 = VAR_17.i;

 VAR_15 = 0xee000000|(FUNC_2(VAR_13,12,20));
 FUNC_0(VAR_15);

 VAR_15 = 0xef000000|(VAR_12&0x00ffffff);
 FUNC_0(VAR_15);

 VAR_15 = 0xf0000000|(VAR_11&0x1f);
 FUNC_0(VAR_15);

 VAR_15 = 0xf1000000|(FUNC_1(VAR_0,21,3))|(FUNC_1(VAR_16,20,1))|(FUNC_2(VAR_14,12,20));
 FUNC_0(VAR_15);

 VAR_15 = 0xf2000000|(FUNC_1(VAR_5.r,16,8))|(FUNC_1(VAR_5.g,8,8))|(VAR_5.b&0xff);
 FUNC_0(VAR_15);
}
