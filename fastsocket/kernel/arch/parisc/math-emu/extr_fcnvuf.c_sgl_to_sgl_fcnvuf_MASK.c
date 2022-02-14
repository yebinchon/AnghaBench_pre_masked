
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int sgl_floating_point ;


 int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int VAR_1 ;



 int FUNC_2 () ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int,unsigned int) ;
 int FUNC_6 (unsigned int,scalar_t__) ;
 int FUNC_7 (unsigned int,unsigned int) ;
 int FUNC_8 (unsigned int) ;
 scalar_t__ FUNC_9 (unsigned int) ;

int
FUNC_10(
   unsigned int *VAR_4,
   unsigned int *VAR_5,
   sgl_floating_point *VAR_6,
   unsigned int *VAR_7)
{
 register unsigned int VAR_8, VAR_9 = 0;
 register int VAR_10;

 VAR_8 = *VAR_4;


 if (VAR_8 == 0) {
         FUNC_8(VAR_9);
  *VAR_6 = VAR_9;
         return(VAR_1);
 }



 VAR_10 = 16;





 FUNC_0(VAR_8,VAR_10);

 VAR_8 <<= VAR_10+1;
 FUNC_7(VAR_9, VAR_8 >> VAR_3);
 FUNC_6(VAR_9, 30+VAR_2 - VAR_10);


 if (FUNC_9(VAR_8)) {
  switch (FUNC_2()) {
   case 128:
    FUNC_4(VAR_9);
    break;
   case 130:
    break;
   case 129:
    FUNC_5(VAR_8,VAR_9);
    break;
  }
  if (FUNC_1()) {
   *VAR_6 = VAR_9;
   return(VAR_0);
  }
  else FUNC_3();
 }
 *VAR_6 = VAR_9;
 return(VAR_1);
}
