
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int sgl_floating_point ;
typedef int dbl_unsigned ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int,int *) ;
 int FUNC_1 (unsigned int,int,unsigned int,unsigned int) ;
 int FUNC_2 (unsigned int,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (unsigned int) ;
 scalar_t__ FUNC_9 (unsigned int,int) ;
 scalar_t__ FUNC_10 (unsigned int) ;
 scalar_t__ FUNC_11 (unsigned int) ;

int
FUNC_12 (sgl_floating_point * VAR_5, unsigned int *VAR_6,
      dbl_unsigned * VAR_7, unsigned int *VAR_8)
{
 register int VAR_9;
 register unsigned int VAR_10, VAR_11, VAR_12;

 VAR_10 = *VAR_5;
 VAR_9 = FUNC_8(VAR_10) - VAR_4;




 if (VAR_9 > VAR_0 + 1) {
  if (FUNC_11(VAR_10)) {
   VAR_11 = VAR_12 = 0;
  } else {
   VAR_11 = VAR_12 = 0xffffffff;
  }
  if (FUNC_4()) {
   return(VAR_2);
  }
  FUNC_6();
      FUNC_0(VAR_11,VAR_12,VAR_7);
  return(VAR_3);
 }



 if (VAR_9 >= 0) {




  if (FUNC_11(VAR_10)) {
   VAR_11 = VAR_12 = 0;
   if (FUNC_4()) {
    return(VAR_2);
   }
   FUNC_6();
       FUNC_0(VAR_11,VAR_12,VAR_7);
   return(VAR_3);
  }
  FUNC_7(VAR_10);
  FUNC_1(VAR_10,VAR_9,VAR_11,VAR_12);
  FUNC_0(VAR_11,VAR_12,VAR_7);


  if (FUNC_9(VAR_10,VAR_9)) {
   if (FUNC_3()) return(VAR_1);
   else FUNC_5();
  }
 }
 else {
  FUNC_2(VAR_11,VAR_12);
  FUNC_0(VAR_11,VAR_12,VAR_7);


  if (FUNC_10(VAR_10)) {
   if (FUNC_3()) return(VAR_1);
   else FUNC_5();
  }
 }
 return(VAR_3);
}
