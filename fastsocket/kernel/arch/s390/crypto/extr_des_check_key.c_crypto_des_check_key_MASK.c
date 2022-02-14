
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;

int
FUNC_0(const u8 *VAR_4, unsigned int VAR_5, u32 *VAR_6)
{
 u32 VAR_7, VAR_8;

 VAR_7 = VAR_3[VAR_4[0]]; VAR_7 <<= 4;
 VAR_7 |= VAR_3[VAR_4[1]]; VAR_7 <<= 4;
 VAR_7 |= VAR_3[VAR_4[2]]; VAR_7 <<= 4;
 VAR_7 |= VAR_3[VAR_4[3]]; VAR_7 <<= 4;
 VAR_7 |= VAR_3[VAR_4[4]]; VAR_7 <<= 4;
 VAR_7 |= VAR_3[VAR_4[5]]; VAR_7 <<= 4;
 VAR_7 |= VAR_3[VAR_4[6]]; VAR_7 <<= 4;
 VAR_7 |= VAR_3[VAR_4[7]];
 VAR_8 = 0x88888888L;

 if ((*VAR_6 & VAR_0)
     && !((VAR_7 - (VAR_8 >> 3)) & VAR_8)) {
  if (VAR_7 < 0x41415151) {
   if (VAR_7 < 0x31312121) {
    if (VAR_7 < 0x14141515) {

     if (VAR_7 == 0x11111111) goto weak;

     if (VAR_7 == 0x13131212) goto weak;
    } else {

     if (VAR_7 == 0x14141515) goto weak;

     if (VAR_7 == 0x16161616) goto weak;
    }
   } else {
    if (VAR_7 < 0x34342525) {

     if (VAR_7 == 0x31312121) goto weak;

     if (VAR_7 == 0x33332222) goto weak;
    } else {

     if (VAR_7 == 0x34342525) goto weak;

     if (VAR_7 == 0x36362626) goto weak;
    }
   }
  } else {
   if (VAR_7 < 0x61616161) {
    if (VAR_7 < 0x44445555) {

     if (VAR_7 == 0x41415151) goto weak;

     if (VAR_7 == 0x43435252) goto weak;
    } else {

     if (VAR_7 == 0x44445555) goto weak;

     if (VAR_7 == 0x46465656) goto weak;
    }
   } else {
    if (VAR_7 < 0x64646565) {

     if (VAR_7 == 0x61616161) goto weak;

     if (VAR_7 == 0x63636262) goto weak;
    } else {

     if (VAR_7 == 0x64646565) goto weak;

     if (VAR_7 == 0x66666666) goto weak;
    }
   }
  }
 }
 return 0;
weak:
 *VAR_6 |= VAR_1;
 return -VAR_2;
}
