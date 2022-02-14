
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct bcm3510_state {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct bcm3510_state*,int,int,int) ;
 int FUNC_1 (char*,int,...) ;

__attribute__((used)) static int FUNC_2(struct bcm3510_state* VAR_1,u32 VAR_2)
{
 u8 VAR_3,VAR_4;
 u16 VAR_5;
 s32 VAR_6,VAR_7;

 VAR_2 /= 1000;

 FUNC_1("%dkHz:",VAR_2);

 if (VAR_2 <= 168000)
  VAR_3 = 0x1c;
 else if (VAR_2 <= 378000)
  VAR_3 = 0x2c;
 else
  VAR_3 = 0x30;

 if (VAR_2 >= 470000) {
  VAR_2 -= 470001;
  VAR_6 = 18805;
 } else if (VAR_2 >= 90000) {
  VAR_2 -= 90001;
  VAR_6 = 15005;
 } else if (VAR_2 >= 76000){
  VAR_2 -= 76001;
  VAR_6 = 14865;
 } else {
  VAR_2 -= 54001;
  VAR_6 = 14645;
 }

 VAR_7 = (((VAR_2/6000)*60 + VAR_6)*4)/10;

 VAR_5 = VAR_7 >> 6;
 VAR_4 = VAR_7 & 0x3f;

 FUNC_1(" BC1_2_3_4: %x, N: %x A: %x\n", VAR_3, VAR_5, VAR_4);
 if (VAR_5 >= 16 && VAR_5 <= 2047)
  return FUNC_0(VAR_1,VAR_3,VAR_5,VAR_4);

 return -VAR_0;
}
