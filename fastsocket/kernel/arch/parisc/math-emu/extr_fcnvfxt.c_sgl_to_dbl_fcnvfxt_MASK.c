
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int sgl_floating_point ;
typedef int dbl_integer ;


 int VAR_0 ;
 int FUNC_0 (int,unsigned int,int *) ;
 int FUNC_1 (unsigned int,int,int,unsigned int) ;
 int FUNC_2 (int,unsigned int) ;
 int FUNC_3 (int,unsigned int) ;
 int FUNC_4 (int,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (unsigned int) ;
 scalar_t__ FUNC_11 (unsigned int,int) ;
 scalar_t__ FUNC_12 (unsigned int) ;
 scalar_t__ FUNC_13 (unsigned int) ;
 scalar_t__ FUNC_14 (unsigned int) ;
 scalar_t__ FUNC_15 (unsigned int) ;

int
FUNC_16(
      sgl_floating_point *VAR_5,
      unsigned int *VAR_6,
      dbl_integer *VAR_7,
      unsigned int *VAR_8)
{
 register int VAR_9, VAR_10;
 register unsigned int VAR_11, VAR_12, VAR_13;

 VAR_11 = *VAR_5;
 VAR_9 = FUNC_10(VAR_11) - VAR_4;




 if (VAR_9 > VAR_0) {

  if ((VAR_9 > VAR_0 + 1) ||
  FUNC_13(VAR_11) || FUNC_15(VAR_11)) {
                        if (FUNC_15(VAR_11)) {
                              VAR_10 = 0x7fffffff;
         VAR_13 = 0xffffffff;
   }
                        else {
       VAR_10 = 0x80000000;
       VAR_13 = 0;
   }
                 if (FUNC_6()) {
                            return(VAR_2);
                        }
                        FUNC_8();
              FUNC_0(VAR_10,VAR_13,VAR_7);
   return(VAR_3);
  }
  FUNC_2(VAR_10,VAR_13);
  FUNC_0(VAR_10,VAR_13,VAR_7);
  return(VAR_3);
 }



 if (VAR_9 >= 0) {
  VAR_12 = VAR_11;
  FUNC_9(VAR_12);
  FUNC_1(VAR_12,VAR_9,VAR_10,VAR_13);
  if (FUNC_14(VAR_11)) {
   FUNC_3(VAR_10,VAR_13);
  }
  FUNC_0(VAR_10,VAR_13,VAR_7);


  if (FUNC_11(VAR_11,VAR_9)) {
   if (FUNC_5()) return(VAR_1);
   else FUNC_7();
  }
 }
 else {
  FUNC_4(VAR_10,VAR_13);
  FUNC_0(VAR_10,VAR_13,VAR_7);


  if (FUNC_12(VAR_11)) {
   if (FUNC_5()) return(VAR_1);
   else FUNC_7();
  }
 }
 return(VAR_3);
}
