
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u16 ;


 unsigned int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int ,char*,unsigned int,...) ;

__attribute__((used)) static unsigned int FUNC_1 (unsigned int VAR_2, int VAR_3,
          u16 * VAR_4, unsigned int * VAR_5)
{
 unsigned char VAR_6 = -1;
 unsigned int VAR_7 = -1;

 FUNC_0 (VAR_1, "make_rate %u", VAR_2);
 if (VAR_2 > 0xffc00000U) {


  if (VAR_3 == 128) {
   return -VAR_0;
  } else {
   VAR_6 = 31;
   VAR_7 = 511;
  }

 } else if (VAR_2) {


  VAR_6 = 31;
  VAR_7 = VAR_2;


  while (!(VAR_7 & (1<<31))) {
   VAR_6 = VAR_6 - 1;
   VAR_7 = VAR_7<<1;
  }





  VAR_7 = VAR_7<<1;
  VAR_7 &= 0xffffffffU;
  switch (VAR_3) {
  case 130: {

   VAR_7 = VAR_7>>(32-9);
   break;
  }
  case 128: {

   if (VAR_7 & (~0U>>9)) {
    VAR_7 = (VAR_7>>(32-9)) + 1;
    if (VAR_7 == (1<<9)) {

     VAR_7 = 0;
     VAR_6 += 1;
    }
   } else {
    VAR_7 = (VAR_7>>(32-9));
   }
   break;
  }
  case 129: {

   if (VAR_7 & (1<<(32-9-1))) {
    VAR_7 = (VAR_7>>(32-9)) + 1;
    if (VAR_7 == (1<<9)) {

     VAR_7 = 0;
     VAR_6 += 1;
    }
   } else {
    VAR_7 = (VAR_7>>(32-9));
   }
   break;
  }
  }

 } else {


  if (VAR_3 == 130) {
   return -VAR_0;
  } else {
   VAR_6 = 0;
   VAR_7 = 0;
  }
 }

 FUNC_0 (VAR_1, "rate: man=%u, exp=%hu", VAR_7, VAR_6);

 if (VAR_4)
  *VAR_4 = (VAR_6<<9) | VAR_7;

 if (VAR_5)
  *VAR_5 = (VAR_6 >= 9)
   ? (1 << VAR_6) + (VAR_7 << (VAR_6-9))
   : (1 << VAR_6) + ((VAR_7 + (1<<(9-VAR_6-1))) >> (9-VAR_6));

 return 0;
}
