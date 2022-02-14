
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct r8180_priv {int rf_chip; } ;
struct net_device {int dummy; } ;


 int* VAR_0 ;





 int* VAR_1 ;
 scalar_t__ FUNC_0 (struct net_device*) ;

void FUNC_1(struct net_device *VAR_2, u8 *VAR_3, u8 *VAR_4)
{
 struct r8180_priv *VAR_5 = (struct r8180_priv *)FUNC_0(VAR_2);
 u32 VAR_6;
 u32 VAR_7;
 u32 VAR_8;
 u32 VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 u8 VAR_12;

 VAR_10 = *VAR_4;
 VAR_11 = *VAR_4;
 VAR_12 = 0;

 if (VAR_10 <= 0x4e) {
  VAR_6 = VAR_0[VAR_10];
 } else {
  if( VAR_10 & 0x80 ) {
   VAR_6 = 0x32;
  } else {
   VAR_6 = 1;
  }
 }

 *VAR_4 = VAR_6;
 VAR_7 = *VAR_3;

 switch(VAR_5->rf_chip){
 case 128:
  VAR_9 = VAR_7 & 1;
  VAR_7 &= 0x7e;
  if ( !VAR_9 || !(VAR_7 <= 0x3c) ) {
   VAR_7 = 0x64;
  } else {
   VAR_7 = 100 * VAR_7 / 0x3c;
  }
  *VAR_3 = VAR_7 & 0xff;
  VAR_12 = VAR_7 & 0xff;
  break;
 case 131:
  VAR_9 = VAR_7;
  VAR_7 &= 0xfffffffe;
  VAR_7 *= 251;
  VAR_8 = VAR_7;
  VAR_7 <<= 6;
  VAR_8 += VAR_7;
  VAR_8 <<= 1;
  VAR_7 = 0x4950df;
  VAR_7 -= VAR_8;
  VAR_9 &= 1;
  if ( VAR_7 <= 0x3e0000 ) {
   if ( VAR_7 < 0xffef0000 )
    VAR_7 = 0xffef0000;
  } else {
   VAR_7 = 0x3e0000;
  }
  if ( !VAR_9 ) {
   VAR_7 -= 0xf0000;
  } else {
   VAR_7 += 0xf0000;
  }

  VAR_8 = 0x4d0000;
  VAR_8 -= VAR_7;
  VAR_8 *= 100;
  VAR_8 = VAR_8 / 0x6d;
  VAR_8 >>= 0x10;
  VAR_12 = VAR_8 & 0xff;
  *VAR_3 = VAR_8 & 0xff;
  break;
 case 132:
         VAR_9 = VAR_7 & 1;
  VAR_7 &= 0x7e;
  if ( ! VAR_9 || !(VAR_7 <= 0x3c) ){
   VAR_7 = 0x64;
  } else {
   VAR_7 = (100 * VAR_7) / 0x3c;
  }
  *VAR_3 = VAR_7 & 0xff;
  VAR_12 = VAR_7 & 0xff;
  break;
 case 129:
  if( VAR_11 <= 0x4e ){
   VAR_12 = VAR_1[VAR_11];
   *VAR_3 = VAR_12;
  } else {
   VAR_11 -= 0x80;
   if ( !VAR_11 ){
    VAR_12 = 1;
    *VAR_3 = 1;
   } else {
    VAR_12 = 0x32;
    *VAR_3 = 0x32;
   }
  }
  break;
 case 130:
  VAR_9 = VAR_7 & 1;
  VAR_7 &= 0x7e;
  VAR_7 >>= 1;
  VAR_7 += 0x42;
  if( VAR_9 != 0 ){
   VAR_7 += 0xa;
  }
  *VAR_3 = VAR_7 & 0xff;
  VAR_12 = VAR_7 & 0xff;
  break;
 }

 if ( VAR_12 < 0x64 ){
  if ( VAR_12 == 0 ) {
   *VAR_3 = 1;
  }
 } else {
  *VAR_3 = 0x64;
 }

 return;
}
