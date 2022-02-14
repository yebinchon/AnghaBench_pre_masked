
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dbl_integer ;
typedef int dbl_floating_point ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,unsigned int,int *) ;
 int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int,unsigned int,unsigned int) ;
 int FUNC_5 (unsigned int,scalar_t__) ;
 int FUNC_6 (unsigned int,int) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (unsigned int,unsigned int) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (int *,int,unsigned int) ;
 scalar_t__ FUNC_11 (unsigned int) ;
 int FUNC_12 (int,unsigned int) ;
 int FUNC_13 (int,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_14 () ;
 int VAR_3 ;



 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (int,unsigned int,int,unsigned int) ;
 int FUNC_18 (int,unsigned int,int,int) ;

int
FUNC_19(
      dbl_integer *VAR_4,
      unsigned int *VAR_5,
      dbl_floating_point *VAR_6,
      unsigned int *VAR_7)
{
 register int VAR_8, VAR_9;
 register unsigned int VAR_10, VAR_11 = 0, VAR_12 = 0;

 FUNC_10(VAR_4,VAR_8,VAR_10);



 if (VAR_8 < 0) {
  FUNC_7(VAR_11);
  FUNC_12(VAR_8,VAR_10);
 }
 else {
  FUNC_9(VAR_11);

         if (VAR_8 == 0 && VAR_10 ==0) {
                 FUNC_8(VAR_11,VAR_12);
                 FUNC_0(VAR_11,VAR_12,VAR_6);
                 return(VAR_3);
  }
        }



 VAR_9 = 16;
 if (VAR_8 == 0) {





  FUNC_13(VAR_10,VAR_9);

  if (VAR_9 >= 0) {
   VAR_8 = VAR_10 << VAR_9;
   VAR_10 = 0;
  }
  else {
   VAR_8 = VAR_10 >> 1;
   VAR_10 <<= 31;
  }




  VAR_9 += 32;
 }
 else {





  FUNC_13(VAR_8,VAR_9);

  if (VAR_9 > 0) {
   FUNC_18(VAR_8,VAR_10,(32-VAR_9),
    VAR_8);
   VAR_10 <<= VAR_9;
  }





  else VAR_8 >>= -(VAR_9);
 }
 FUNC_6(VAR_11, VAR_8 >> (VAR_1-1));
 FUNC_17(VAR_8,VAR_10,VAR_1-1,VAR_12);
 FUNC_5(VAR_11, (62+VAR_0) - VAR_9);


 if (FUNC_11(VAR_10)) {
  switch (FUNC_15()) {
   case 128:
    if (FUNC_3(VAR_11)) {
     FUNC_1(VAR_11,VAR_12);
    }
    break;
   case 130:
    if (FUNC_2(VAR_11)) {
     FUNC_1(VAR_11,VAR_12);
    }
    break;
   case 129:
    FUNC_4(VAR_10,VAR_11,
    VAR_12);
  }
  if (FUNC_14()) {
   FUNC_0(VAR_11,VAR_12,VAR_6);
   return(VAR_2);
  }
  else FUNC_16();
 }
 FUNC_0(VAR_11,VAR_12,VAR_6);
 return(VAR_3);
}
