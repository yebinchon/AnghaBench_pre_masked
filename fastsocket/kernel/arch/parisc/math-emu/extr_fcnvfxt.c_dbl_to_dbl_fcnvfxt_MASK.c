
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dbl_integer ;
typedef int dbl_floating_point ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,unsigned int,unsigned int) ;
 int FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int,unsigned int,int) ;
 scalar_t__ FUNC_4 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_5 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_6 (unsigned int) ;
 scalar_t__ FUNC_7 (unsigned int) ;
 int FUNC_8 (int,unsigned int,int *) ;
 int FUNC_9 (unsigned int,unsigned int,int,int,unsigned int) ;
 int FUNC_10 (int,unsigned int) ;
 int FUNC_11 (int,unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_12 () ;
 scalar_t__ FUNC_13 () ;
 int VAR_4 ;
 int FUNC_14 () ;
 int FUNC_15 () ;

int
FUNC_16(
   dbl_floating_point *VAR_5,
   unsigned int *VAR_6,
   dbl_integer *VAR_7,
   unsigned int *VAR_8)
{
 register int VAR_9, VAR_10;
 register unsigned int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;

 FUNC_1(VAR_5,VAR_11,VAR_12);
 VAR_9 = FUNC_2(VAR_11) - VAR_0;




 if (VAR_9 > VAR_1) {

  if ((VAR_9 > VAR_1 + 1) ||
  FUNC_5(VAR_11,VAR_12) || FUNC_7(VAR_11)) {
                        if (FUNC_7(VAR_11)) {
                              VAR_10 = 0x7fffffff;
         VAR_15 = 0xffffffff;
   }
                        else {
       VAR_10 = 0x80000000;
       VAR_15 = 0;
   }
                 if (FUNC_13()) {
                            return(VAR_3);
                        }
                        FUNC_15();
              FUNC_8(VAR_10,VAR_15,VAR_7);
   return(VAR_4);
  }
 }



 if (VAR_9 >= 0) {
  VAR_13 = VAR_11;
  VAR_14 = VAR_12;
  FUNC_0(VAR_13);
  FUNC_9(VAR_13,VAR_14,VAR_9,
  VAR_10,VAR_15);
  if (FUNC_6(VAR_11)) {
   FUNC_10(VAR_10,VAR_15);
  }
  FUNC_8(VAR_10,VAR_15,VAR_7);


  if (FUNC_3(VAR_11,VAR_12,VAR_9)) {
   if (FUNC_12()) return(VAR_2);
   else FUNC_14();
  }
 }
 else {
  FUNC_11(VAR_10,VAR_15);
  FUNC_8(VAR_10,VAR_15,VAR_7);


  if (FUNC_4(VAR_11,VAR_12)) {
   if (FUNC_12()) return(VAR_2);
   else FUNC_14();
  }
 }
 return(VAR_4);
}
