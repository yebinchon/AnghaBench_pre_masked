
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int sgl_floating_point ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (unsigned int) ;
 scalar_t__ FUNC_8 (unsigned int,int) ;
 scalar_t__ FUNC_9 (unsigned int) ;
 scalar_t__ FUNC_10 (unsigned int) ;
 scalar_t__ FUNC_11 (unsigned int) ;
 scalar_t__ FUNC_12 (unsigned int) ;

int
FUNC_13(
      sgl_floating_point *VAR_5,
      unsigned int *VAR_6,
      int *VAR_7,
      unsigned int *VAR_8)
{
 register unsigned int VAR_9, VAR_10;
 register int VAR_11, VAR_12;

 VAR_9 = *VAR_5;
 VAR_11 = FUNC_7(VAR_9) - VAR_3;




 if (VAR_11 > VAR_4) {

  if ((VAR_11 > VAR_4 + 1) ||
  FUNC_10(VAR_9) || FUNC_12(VAR_9)) {
                        if (FUNC_12(VAR_9)) VAR_12 = 0x7fffffff;
                        else VAR_12 = 0x80000000;

                 if (FUNC_2()) {
                            return(VAR_1);
                        }
                        FUNC_4();
   *VAR_7 = VAR_12;
   return(VAR_2);
  }
 }



 if (VAR_11 >= 0) {
  VAR_10 = VAR_9;
  FUNC_6(VAR_10);
  FUNC_0(VAR_10,VAR_11);
  if (FUNC_11(VAR_9)) VAR_12 = -FUNC_5(VAR_10);
  else VAR_12 = FUNC_5(VAR_10);
  *VAR_7 = VAR_12;


  if (FUNC_8(VAR_9,VAR_11)) {
   if (FUNC_1()) return(VAR_0);
   else FUNC_3();
  }
 }
 else {
  *VAR_7 = 0;


  if (FUNC_9(VAR_9)) {
   if (FUNC_1()) return(VAR_0);
   else FUNC_3();
  }
 }
 return(VAR_2);
}
