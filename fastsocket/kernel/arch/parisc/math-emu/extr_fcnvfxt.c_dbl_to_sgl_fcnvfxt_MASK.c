
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dbl_floating_point ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int *,unsigned int,unsigned int) ;
 int FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (unsigned int,unsigned int,int) ;
 scalar_t__ FUNC_5 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_6 (unsigned int) ;
 scalar_t__ FUNC_7 (int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_8 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_9 (unsigned int,unsigned int,int) ;
 scalar_t__ FUNC_10 () ;
 scalar_t__ FUNC_11 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_12 () ;
 int FUNC_13 () ;

int
FUNC_14(
   dbl_floating_point *VAR_5,
   unsigned int *VAR_6,
   int *VAR_7,
   unsigned int *VAR_8)
{
 register unsigned int VAR_9, VAR_10, VAR_11, VAR_12;
 register int VAR_13, VAR_14;

 FUNC_2(VAR_5,VAR_9,VAR_10);
 VAR_13 = FUNC_3(VAR_9) - VAR_0;




 if (VAR_13 > VAR_4) {

  if (FUNC_7(VAR_13,VAR_9,VAR_10)) {
                        if (FUNC_8(VAR_9)) VAR_14 = 0x7fffffff;
                        else VAR_14 = 0x80000000;

                 if (FUNC_11()) {
                            return(VAR_2);
                        }
                        FUNC_13();
   *VAR_7 = VAR_14;
   return(VAR_3);
  }
 }



 if (VAR_13 >= 0) {
  VAR_11 = VAR_9;
  VAR_12 = VAR_10;
  FUNC_1(VAR_11);
  FUNC_9(VAR_11,VAR_12,VAR_13);
  if (FUNC_6(VAR_9) && (VAR_13 <= VAR_4))
   VAR_14 = -FUNC_0(VAR_11);
  else VAR_14 = FUNC_0(VAR_11);
  *VAR_7 = VAR_14;


  if (FUNC_4(VAR_9,VAR_10,VAR_13)) {
   if (FUNC_10()) return(VAR_1);
   else FUNC_12();
  }
 }
 else {
  *VAR_7 = 0;


  if (FUNC_5(VAR_9,VAR_10)) {
   if (FUNC_10()) return(VAR_1);
   else FUNC_12();
  }
 }
 return(VAR_3);
}
