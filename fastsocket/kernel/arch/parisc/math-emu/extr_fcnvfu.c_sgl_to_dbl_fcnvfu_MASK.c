
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int sgl_floating_point ;
typedef int dbl_unsigned ;
typedef scalar_t__ boolean ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int,int *) ;
 int FUNC_1 (unsigned int,int,unsigned int,unsigned int) ;
 int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int,unsigned int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int VAR_4 ;



 int FUNC_7 () ;
 int VAR_5 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (unsigned int) ;
 int FUNC_11 (unsigned int) ;
 scalar_t__ FUNC_12 (unsigned int,int) ;
 scalar_t__ FUNC_13 (unsigned int) ;
 int FUNC_14 (unsigned int) ;
 int FUNC_15 (unsigned int,int) ;
 scalar_t__ FUNC_16 (unsigned int) ;
 int FUNC_17 (unsigned int,int) ;
 int FUNC_18 (unsigned int) ;
 scalar_t__ VAR_6 ;

int
FUNC_19(
      sgl_floating_point *VAR_7,
      unsigned int *VAR_8,
      dbl_unsigned *VAR_9,
      unsigned int *VAR_10)
{
 register int VAR_11;
 register unsigned int VAR_12, VAR_13, VAR_14;
 register boolean VAR_15 = VAR_1;

 VAR_12 = *VAR_7;
 VAR_11 = FUNC_11(VAR_12) - VAR_5;




 if (VAR_11 > VAR_0 + 1) {
  if (FUNC_16(VAR_12)) {
   VAR_13 = VAR_14 = 0;
  } else {
   VAR_13 = VAR_14 = 0xffffffff;
  }
  if (FUNC_6()) {
   return(VAR_3);
  }
  FUNC_9();
      FUNC_0(VAR_13,VAR_14,VAR_9);
  return(VAR_4);
 }



 if (VAR_11 >= 0) {




  if (FUNC_16(VAR_12)) {
   VAR_13 = VAR_14 = 0;
   if (FUNC_6()) {
    return(VAR_3);
   }
   FUNC_9();
       FUNC_0(VAR_13,VAR_14,VAR_9);
   return(VAR_4);
  }
  FUNC_10(VAR_12);
  FUNC_1(VAR_12,VAR_11,VAR_13,VAR_14);


  if (FUNC_12(VAR_12,VAR_11)) {
   VAR_15 = VAR_6;

   switch (FUNC_7()) {
   case 128:
    FUNC_2(VAR_13,VAR_14);
    break;
   case 130:
    break;
   case 129:
    if (FUNC_15(VAR_12,VAR_11) &&
        (FUNC_17(VAR_12,VAR_11) ||
         FUNC_3(VAR_14))) {
     FUNC_2(VAR_13,VAR_14);
    }
    break;
   }
  }
 } else {
  FUNC_4(VAR_13,VAR_14);


  if (FUNC_13(VAR_12)) {
   VAR_15 = VAR_6;

   switch (FUNC_7()) {
   case 128:
    if (FUNC_18(VAR_12)) {
     FUNC_2(VAR_13,VAR_14);
    }
    break;
   case 130:
    if (FUNC_16(VAR_12)) {
     VAR_13 = VAR_14 = 0;
     if (FUNC_6()) {
      return(VAR_3);
     }
     FUNC_9();
     VAR_15 = VAR_1;
    }
    break;
   case 129:
    if (VAR_11 == -1 &&
        FUNC_14(VAR_12)) {
     if (FUNC_16(VAR_12)) {
      VAR_13 = 0;
      VAR_14 = 0;
      if (FUNC_6()) {
       return(VAR_3);
      }
      FUNC_9();
      VAR_15 = VAR_1;
     }
     else FUNC_2(VAR_13,VAR_14);
    }
   }
  }
 }
 FUNC_0(VAR_13,VAR_14,VAR_9);
 if (VAR_15) {
  if (FUNC_5()) return(VAR_2);
  else FUNC_8();
 }
 return(VAR_4);
}
