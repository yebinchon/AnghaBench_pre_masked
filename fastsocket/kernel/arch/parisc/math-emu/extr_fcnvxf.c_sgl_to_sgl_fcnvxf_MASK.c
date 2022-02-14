
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int sgl_floating_point ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 () ;
 int VAR_1 ;



 int FUNC_4 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (int,unsigned int) ;
 int FUNC_10 (unsigned int,scalar_t__) ;
 int FUNC_11 (unsigned int,int) ;
 int FUNC_12 (unsigned int) ;
 int FUNC_13 (unsigned int) ;
 int FUNC_14 (unsigned int) ;

int
FUNC_15(
      int *VAR_4,
      unsigned int *VAR_5,
      sgl_floating_point *VAR_6,
      unsigned int *VAR_7)
{
 register int VAR_8, VAR_9;
 register unsigned int VAR_10 = 0;

 VAR_8 = *VAR_4;



 if (VAR_8 < 0) {
  FUNC_12(VAR_10);
  FUNC_2(VAR_8);
 }
 else {
  FUNC_14(VAR_10);

         if (VAR_8 == 0) {
                 FUNC_13(VAR_10);
   *VAR_6 = VAR_10;
                 return(VAR_1);
         }
 }



 VAR_9 = 16;





 FUNC_0(VAR_8,VAR_9);

 if (VAR_9 >= 0) VAR_8 <<= VAR_9;
 else VAR_8 = 1 << 30;
 FUNC_11(VAR_10, VAR_8 >> (VAR_3-1));
 FUNC_10(VAR_10, 30+VAR_2 - VAR_9);


 if (FUNC_1(VAR_8)) {
  switch (FUNC_4()) {
   case 128:
    if (FUNC_8(VAR_10))
     FUNC_6(VAR_10);
    break;
   case 130:
    if (FUNC_7(VAR_10))
     FUNC_6(VAR_10);
    break;
   case 129:
    FUNC_9(VAR_8,VAR_10);
  }
  if (FUNC_3()) {
   *VAR_6 = VAR_10;
   return(VAR_0);
  }
  else FUNC_5();
 }
 *VAR_6 = VAR_10;
 return(VAR_1);
}
