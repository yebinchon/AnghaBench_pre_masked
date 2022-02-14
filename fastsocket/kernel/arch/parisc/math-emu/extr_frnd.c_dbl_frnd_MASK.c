
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dbl_floating_point ;
typedef scalar_t__ boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,unsigned int,unsigned int) ;
 int FUNC_2 (unsigned int,unsigned int,int *) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_5 (unsigned int,unsigned int,int) ;
 scalar_t__ FUNC_6 (unsigned int,unsigned int) ;
 int FUNC_7 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_8 (unsigned int) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (unsigned int,unsigned int,int) ;
 int FUNC_11 (unsigned int) ;
 scalar_t__ FUNC_12 (unsigned int) ;
 int FUNC_13 (unsigned int,unsigned int,int) ;
 int FUNC_14 (unsigned int) ;
 int FUNC_15 (unsigned int,unsigned int,int) ;
 int FUNC_16 (unsigned int,unsigned int,int) ;
 int FUNC_17 (unsigned int,int) ;
 int FUNC_18 (unsigned int) ;
 int FUNC_19 (unsigned int,unsigned int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_20 () ;
 scalar_t__ FUNC_21 () ;
 int VAR_6 ;



 int FUNC_22 () ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 scalar_t__ VAR_7 ;

int
FUNC_25(
 dbl_floating_point *VAR_8,
 unsigned int *VAR_9,
 dbl_floating_point *VAR_10,
 unsigned int *VAR_11)
{
 register unsigned int VAR_12, VAR_13, VAR_14, VAR_15;
 register int VAR_16;
 register boolean VAR_17 = VAR_3;

 FUNC_1(VAR_8,VAR_12,VAR_13);



        if ((VAR_16 = FUNC_3(VAR_12)) == VAR_1) {



                if (FUNC_12(VAR_12)) {

                        if (FUNC_21()) return(VAR_5);

                        FUNC_24();
                        FUNC_18(VAR_12);
                }



                FUNC_2(VAR_12,VAR_13,VAR_10);
                return(VAR_6);
        }



 if ((VAR_16 -= VAR_0) >= VAR_2 - 1) {
  FUNC_2(VAR_12,VAR_13,VAR_10);
  return(VAR_6);
 }



 if (VAR_16 >= 0) {
  FUNC_0(VAR_12);
  VAR_14 = VAR_12;
  VAR_15 = VAR_13;
  FUNC_16(VAR_14,VAR_15,(VAR_2-1) - (VAR_16));

  if (FUNC_5(VAR_12,VAR_13,VAR_16)) {
   VAR_17 = VAR_7;

   switch (FUNC_22()) {
   case 128:
        if (FUNC_14(VAR_12))
    FUNC_4(VAR_14,VAR_15);
        break;
   case 130:
        if (FUNC_11(VAR_12))
    FUNC_4(VAR_14,VAR_15);
        break;
   case 129:
        if (FUNC_10(VAR_12,VAR_13,VAR_16))
         if (FUNC_13(VAR_12,VAR_13,VAR_16)
      || (FUNC_9(VAR_15)))
     FUNC_4(VAR_14,VAR_15);
   }
  }
  FUNC_15(VAR_14,VAR_15,(VAR_2-1) - (VAR_16));
  if (FUNC_8(VAR_14))
   FUNC_17(VAR_14,VAR_16 + (VAR_0+1));
  else FUNC_17(VAR_14,VAR_16 + VAR_0);
 }
 else {
  VAR_14 = VAR_12;
  FUNC_19(VAR_14,VAR_15);

  if (FUNC_6(VAR_12,VAR_13)) {
   VAR_17 = VAR_7;

   switch (FUNC_22()) {
   case 128:
        if (FUNC_14(VAR_12))
    FUNC_17(VAR_14,VAR_0);
        break;
   case 130:
        if (FUNC_11(VAR_12))
    FUNC_17(VAR_14,VAR_0);
        break;
   case 129:
        if (VAR_16 == -1)
           if (FUNC_7(VAR_12,VAR_13))
       FUNC_17(VAR_14,VAR_0);
   }
  }
 }
 FUNC_2(VAR_14,VAR_15,VAR_10);
 if (VAR_17) {
  if (FUNC_20()) return(VAR_4);
  else FUNC_23();
 }
 return(VAR_6);
}
