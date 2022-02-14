
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dbl_floating_point ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,unsigned int,unsigned int) ;
 int FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int,unsigned int,int) ;
 scalar_t__ FUNC_4 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_5 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (unsigned int,unsigned int,int,unsigned int) ;

int
FUNC_11 (dbl_floating_point * VAR_5, unsigned int *VAR_6,
      unsigned int *VAR_7, unsigned int *VAR_8)
{
 register unsigned int VAR_9, VAR_10, VAR_11;
 register int VAR_12;

 FUNC_1(VAR_5,VAR_9,VAR_10);
 VAR_12 = FUNC_2(VAR_9) - VAR_0;




 if (VAR_12 > VAR_4 + 1) {
  if (FUNC_5(VAR_9)) {
   VAR_11 = 0;
  } else {
   VAR_11 = 0xffffffff;
  }
  if (FUNC_7()) {
   return(VAR_2);
  }
  FUNC_9();
  *VAR_7 = VAR_11;
  return(VAR_3);
 }



 if (VAR_12 >= 0) {




  if (FUNC_5(VAR_9)) {
   VAR_11 = 0;
   if (FUNC_7()) {
    return(VAR_2);
   }
   FUNC_9();
   *VAR_7 = VAR_11;
   return(VAR_3);
  }
  FUNC_0(VAR_9);
  FUNC_10(VAR_9,VAR_10,VAR_12,VAR_11);
  *VAR_7 = VAR_11;


  if (FUNC_3(VAR_9,VAR_10,VAR_12)) {
   if (FUNC_6()) return(VAR_1);
   else FUNC_8();
  }
 }
 else {
  *VAR_7 = 0;


  if (FUNC_4(VAR_9,VAR_10)) {
   if (FUNC_6()) return(VAR_1);
   else FUNC_8();
  }
 }
 return(VAR_3);
}
