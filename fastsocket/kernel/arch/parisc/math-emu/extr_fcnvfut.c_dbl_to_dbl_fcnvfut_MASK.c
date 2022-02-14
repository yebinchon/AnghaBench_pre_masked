
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dbl_unsigned ;
typedef int dbl_floating_point ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,unsigned int,unsigned int) ;
 int FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int,unsigned int,int) ;
 scalar_t__ FUNC_4 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int,unsigned int,int *) ;
 int FUNC_7 (unsigned int,unsigned int,int,unsigned int,unsigned int) ;
 int FUNC_8 (unsigned int,unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ FUNC_10 () ;
 int VAR_4 ;
 int FUNC_11 () ;
 int FUNC_12 () ;

int
FUNC_13 (dbl_floating_point * VAR_5, unsigned int *VAR_6,
      dbl_unsigned * VAR_7, unsigned int *VAR_8)
{
 register int VAR_9;
 register unsigned int VAR_10, VAR_11, VAR_12, VAR_13;

 FUNC_1(VAR_5,VAR_10,VAR_11);
 VAR_9 = FUNC_2(VAR_10) - VAR_0;




 if (VAR_9 > VAR_1 + 1) {
  if (FUNC_5(VAR_10)) {
   VAR_12 = VAR_13 = 0;
  } else {
   VAR_12 = VAR_13 = 0xffffffff;
  }
  if (FUNC_10()) {
   return(VAR_3);
  }
  FUNC_12();
      FUNC_6(VAR_12,VAR_13,VAR_7);
  return(VAR_4);
 }



 if (VAR_9 >= 0) {




  if (FUNC_5(VAR_10)) {
   VAR_12 = VAR_13 = 0;
   if (FUNC_10()) {
    return(VAR_3);
   }
   FUNC_12();
       FUNC_6(VAR_12,VAR_13,VAR_7);
   return(VAR_4);
  }
  FUNC_0(VAR_10);
  FUNC_7(VAR_10,VAR_11,VAR_9,
    VAR_12,VAR_13);
  FUNC_6(VAR_12,VAR_13,VAR_7);


  if (FUNC_3(VAR_10,VAR_11,VAR_9)) {
   if (FUNC_9()) return(VAR_2);
   else FUNC_11();
  }
 }
 else {
  FUNC_8(VAR_12,VAR_13);
  FUNC_6(VAR_12,VAR_13,VAR_7);


  if (FUNC_4(VAR_10,VAR_11)) {
   if (FUNC_9()) return(VAR_2);
   else FUNC_11();
  }
 }
 return(VAR_4);
}
