
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int sgl_floating_point ;
typedef int dbl_unsigned ;


 int FUNC_0 (int *,unsigned int,unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (unsigned int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 () ;
 int VAR_1 ;



 int FUNC_4 () ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (unsigned int,unsigned int,unsigned int) ;
 int FUNC_8 (unsigned int,scalar_t__) ;
 int FUNC_9 (unsigned int,unsigned int) ;
 int FUNC_10 (unsigned int) ;
 int FUNC_11 (unsigned int,unsigned int,int,unsigned int) ;

int
FUNC_12(
   dbl_unsigned *VAR_4,
   unsigned int *VAR_5,
   sgl_floating_point *VAR_6,
   unsigned int *VAR_7)
{
 int VAR_8;
 unsigned int VAR_9, VAR_10, VAR_11 = 0;

 FUNC_0(VAR_4,VAR_9,VAR_10);


 if (VAR_9 == 0 && VAR_10 == 0) {
         FUNC_10(VAR_11);
         *VAR_6 = VAR_11;
         return(VAR_1);
 }



 VAR_8 = 16;
 if (VAR_9 == 0) {





  FUNC_2(VAR_10,VAR_8);

  VAR_9 = VAR_10 << (VAR_8+1);
  VAR_10 = 0;




  VAR_8 += 32;
 }
 else {






  FUNC_2(VAR_9,VAR_8);

  if (VAR_8 >= 0) {
   FUNC_11(VAR_9,VAR_10,(31-VAR_8),
    VAR_9);
   VAR_10 <<= VAR_8+1;
  }
 }
 FUNC_9(VAR_11, VAR_9 >> VAR_3);
 FUNC_8(VAR_11, (62+VAR_2) - VAR_8);


 if (FUNC_1(VAR_9,VAR_10)) {
  switch (FUNC_4()) {
   case 128:
    FUNC_6(VAR_11);
    break;
   case 130:
    break;
   case 129:
    FUNC_7(VAR_9,VAR_10,VAR_11);
    break;
  }
  if (FUNC_3()) {
   *VAR_6 = VAR_11;
   return(VAR_0);
  }
  else FUNC_5();
 }
 *VAR_6 = VAR_11;
 return(VAR_1);
}
