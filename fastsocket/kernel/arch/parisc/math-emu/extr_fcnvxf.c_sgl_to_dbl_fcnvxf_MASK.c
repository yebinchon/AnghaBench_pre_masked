
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dbl_floating_point ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,unsigned int,int *) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (unsigned int,int) ;
 int FUNC_3 (unsigned int,int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int,unsigned int) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int) ;
 int VAR_2 ;

int
FUNC_9(
      int *VAR_3,
      unsigned int *VAR_4,
      dbl_floating_point *VAR_5,
      unsigned int *VAR_6)
{
 register int VAR_7, VAR_8;
 register unsigned int VAR_9 = 0, VAR_10 = 0;

 VAR_7 = *VAR_3;



 if (VAR_7 < 0) {
  FUNC_4(VAR_9);
  FUNC_8(VAR_7);
 }
 else {
  FUNC_6(VAR_9);

         if (VAR_7 == 0) {
                 FUNC_5(VAR_9,VAR_10);
                 FUNC_0(VAR_9,VAR_10,VAR_5);
                 return(VAR_2);
         }
 }



 VAR_8 = 16;





 FUNC_7(VAR_7,VAR_8);

 if (VAR_8 >= 0) VAR_7 <<= VAR_8;
 else VAR_7 = 1 << 30;
 FUNC_2(VAR_9, VAR_7 >> (VAR_1 - 1));
 FUNC_3(VAR_10, VAR_7 << (33-VAR_1));
 FUNC_1(VAR_9, (30+VAR_0) - VAR_8);
 FUNC_0(VAR_9,VAR_10,VAR_5);
 return(VAR_2);
}
