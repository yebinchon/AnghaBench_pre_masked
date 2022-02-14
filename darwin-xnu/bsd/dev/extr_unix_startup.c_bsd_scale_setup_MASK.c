
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

void
FUNC_1(int VAR_12)
{

 if ((VAR_12 > 0) && (VAR_7 == 0)) {
  VAR_5 *= VAR_12;
  VAR_6 = (VAR_5 * 2) / 3;
  if (VAR_12 > 2) {
   VAR_3 *= VAR_12;
   VAR_4 = VAR_3/2;
  }
 }

 if ((VAR_12 > 0) && (VAR_7 !=0)) {
  VAR_5 = 2500 * VAR_12;
  VAR_1 = VAR_5;

  VAR_6 = (VAR_5*3)/4;
  VAR_3 = (150000 * VAR_12);
  VAR_4 = VAR_3/2;
  VAR_0 = VAR_3;
  VAR_11 = 1;
  VAR_10 = 100 * VAR_12;
  if (VAR_12 > 4) {

   VAR_8 = 2048;




   VAR_9 = 32 *1024;

   if (VAR_12 > 7) {

    VAR_2 = 165000;
   } else {
    VAR_2 = 60000 + ((VAR_12-1) * 15000);
   }
  } else {
   VAR_8 = 512*VAR_12;
   VAR_9 = 4*1024*VAR_12;
   VAR_2 = 60000 + ((VAR_12-1) * 15000);
  }
 }

 if(VAR_5 > VAR_1) {
  VAR_1 = VAR_5;
 }

 FUNC_0(VAR_12);
}
