
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u16 ;
typedef int rounding ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,unsigned int,...) ;




__attribute__((used)) static int FUNC_1 (unsigned int VAR_3, rounding VAR_4,
        u16 * VAR_5, unsigned int * VAR_6) {
  unsigned char VAR_7 = -1;
  unsigned int VAR_8 = -1;

  FUNC_0 (VAR_0|VAR_1, "make_rate %u", VAR_3);
  if (VAR_3 > 0xffc00000U) {


    if (VAR_4 == 128) {
 return -VAR_2;
    } else {
      VAR_7 = 31;
      VAR_8 = 511;
    }

  } else if (VAR_3) {


    VAR_7 = 31;
    VAR_8 = VAR_3;


    while (!(VAR_8 & (1<<31))) {
      VAR_7 = VAR_7 - 1;
      VAR_8 = VAR_8<<1;
    }




    VAR_8 = VAR_8<<1;
    VAR_8 &= 0xffffffffU;
    switch (VAR_4) {
      case 130: {

 VAR_8 = VAR_8>>(32-9);
 break;
      }
      case 128: {

 if (VAR_8 & (~0U>>9)) {
   VAR_8 = (VAR_8>>(32-9)) + 1;
   if (VAR_8 == (1<<9)) {

     VAR_8 = 0;
     VAR_7 += 1;
   }
 } else {
   VAR_8 = (VAR_8>>(32-9));
 }
 break;
      }
      case 129: {

 if (VAR_8 & (1<<(32-9-1))) {
   VAR_8 = (VAR_8>>(32-9)) + 1;
   if (VAR_8 == (1<<9)) {

     VAR_8 = 0;
     VAR_7 += 1;
   }
 } else {
   VAR_8 = (VAR_8>>(32-9));
 }
 break;
      }
    }

  } else {


    if (VAR_4 == 130) {
      return -VAR_2;
    } else {
      VAR_7 = 0;
      VAR_8 = 0;
    }

  }

  FUNC_0 (VAR_1, "rate: man=%u, exp=%hu", VAR_8, VAR_7);

  if (VAR_5)
    *VAR_5 = (VAR_7<<9) | VAR_8;

  if (VAR_6)
    *VAR_6 = (VAR_7 >= 9)
      ? (1 << VAR_7) + (VAR_8 << (VAR_7-9))
      : (1 << VAR_7) + ((VAR_8 + (1<<(9-VAR_7-1))) >> (9-VAR_7));

  return 0;
}
