
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int sgl_floating_point ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 scalar_t__ FUNC_6 (unsigned int,int) ;
 scalar_t__ FUNC_7 (unsigned int) ;
 scalar_t__ FUNC_8 (unsigned int) ;
 int FUNC_9 (unsigned int,int,unsigned int) ;

int
FUNC_10 (sgl_floating_point * VAR_5, unsigned int *VAR_6,
      unsigned int *VAR_7, unsigned int *VAR_8)
{
 register unsigned int VAR_9, VAR_10;
 register int VAR_11;

 VAR_9 = *VAR_5;
 VAR_11 = FUNC_5(VAR_9) - VAR_3;




 if (VAR_11 > VAR_4 + 1) {
  if (FUNC_8(VAR_9)) {
   VAR_10 = 0;
  } else {
   VAR_10 = 0xffffffff;
  }
  if (FUNC_1()) {
   return(VAR_1);
  }
  FUNC_3();
  *VAR_7 = VAR_10;
  return(VAR_2);
 }



 if (VAR_11 >= 0) {




  if (FUNC_8(VAR_9)) {
   VAR_10 = 0;
   if (FUNC_1()) {
    return(VAR_1);
   }
   FUNC_3();
   *VAR_7 = VAR_10;
   return(VAR_2);
  }
  FUNC_4(VAR_9);
  FUNC_9(VAR_9,VAR_11,VAR_10);
  *VAR_7 = VAR_10;


  if (FUNC_6(VAR_9,VAR_11)) {
   if (FUNC_0()) return(VAR_0);
   else FUNC_2();
  }
 }
 else {
  *VAR_7 = 0;


  if (FUNC_7(VAR_9)) {
   if (FUNC_0()) return(VAR_0);
   else FUNC_2();
  }
 }
 return(VAR_2);
}
