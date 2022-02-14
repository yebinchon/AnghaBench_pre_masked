
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int sgl_floating_point ;
typedef int dbl_integer ;


 int FUNC_0 (int *,int,unsigned int) ;
 scalar_t__ FUNC_1 (int,unsigned int) ;
 int FUNC_2 (int,unsigned int) ;
 int FUNC_3 (int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 () ;
 int VAR_1 ;



 int FUNC_5 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_6 () ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (int,unsigned int,unsigned int) ;
 int FUNC_11 (unsigned int,scalar_t__) ;
 int FUNC_12 (unsigned int,int) ;
 int FUNC_13 (unsigned int) ;
 int FUNC_14 (unsigned int) ;
 int FUNC_15 (unsigned int) ;
 int FUNC_16 (int,unsigned int,int,int) ;

int
FUNC_17(
   dbl_integer *VAR_4,
   unsigned int *VAR_5,
   sgl_floating_point *VAR_6,
   unsigned int *VAR_7)
{
 int VAR_8, VAR_9;
 unsigned int VAR_10 = 0, VAR_11;

 FUNC_0(VAR_4,VAR_9,VAR_11);



 if (VAR_9 < 0) {
  FUNC_13(VAR_10);
  FUNC_2(VAR_9,VAR_11);
 }
 else {
  FUNC_15(VAR_10);

         if (VAR_9 == 0 && VAR_11 == 0) {
                 FUNC_14(VAR_10);
                 *VAR_6 = VAR_10;
                 return(VAR_1);
  }
        }



 VAR_8 = 16;
 if (VAR_9 == 0) {





  FUNC_3(VAR_11,VAR_8);

  if (VAR_8 >= 0) {
   VAR_9 = VAR_11 << VAR_8;
   VAR_11 = 0;
  }
  else {
   VAR_9 = VAR_11 >> 1;
   VAR_11 <<= 31;
  }




  VAR_8 += 32;
 }
 else {






  FUNC_3(VAR_9,VAR_8);

  if (VAR_8 > 0) {
   FUNC_16(VAR_9,VAR_11,(32-VAR_8),
    VAR_9);
   VAR_11 <<= VAR_8;
  }





  else VAR_9 >>= -(VAR_8);
 }
 FUNC_12(VAR_10, VAR_9 >> (VAR_3 - 1));
 FUNC_11(VAR_10, (62+VAR_2) - VAR_8);


 if (FUNC_1(VAR_9,VAR_11)) {
  switch (FUNC_5()) {
   case 128:
    if (FUNC_9(VAR_10))
     FUNC_7(VAR_10);
    break;
   case 130:
    if (FUNC_8(VAR_10))
     FUNC_7(VAR_10);
    break;
   case 129:
    FUNC_10(VAR_9,VAR_11,VAR_10);
  }
  if (FUNC_4()) {
   *VAR_6 = VAR_10;
   return(VAR_0);
  }
  else FUNC_6();
 }
 *VAR_6 = VAR_10;
 return(VAR_1);
}
