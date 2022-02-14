
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int sgl_floating_point ;
typedef scalar_t__ boolean ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int VAR_3 ;



 int FUNC_2 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (unsigned int) ;
 scalar_t__ FUNC_8 (unsigned int,int) ;
 scalar_t__ FUNC_9 (unsigned int) ;
 int FUNC_10 (unsigned int) ;
 scalar_t__ FUNC_11 (unsigned int) ;
 int FUNC_12 (unsigned int) ;
 int FUNC_13 (unsigned int,int) ;
 int FUNC_14 (unsigned int) ;
 scalar_t__ FUNC_15 (unsigned int) ;
 int FUNC_16 (unsigned int,int) ;
 int FUNC_17 (unsigned int) ;
 int FUNC_18 (unsigned int,int) ;
 int FUNC_19 (unsigned int,int) ;
 int FUNC_20 (unsigned int,int) ;
 int FUNC_21 (unsigned int) ;
 int FUNC_22 (unsigned int) ;
 scalar_t__ VAR_7 ;

int
FUNC_23(sgl_floating_point *VAR_8,
 unsigned int *VAR_9,
 sgl_floating_point *VAR_10,
 unsigned int *VAR_11)
{
 register unsigned int VAR_12, VAR_13;
 register int VAR_14;
 register boolean VAR_15 = VAR_0;

 VAR_12 = *VAR_8;



        if ((VAR_14 = FUNC_6(VAR_12)) == VAR_5) {



                if (FUNC_15(VAR_12)) {

                        if (FUNC_1()) return(VAR_2);

                        FUNC_4();
                        FUNC_21(VAR_12);
                }



                *VAR_10 = VAR_12;
                return(VAR_3);
        }



 if ((VAR_14 -= VAR_4) >= VAR_6 - 1) {
  *VAR_10 = VAR_12;
  return(VAR_3);
 }



 if (VAR_14 >= 0) {
  FUNC_5(VAR_12);
  VAR_13 = VAR_12;
  FUNC_19(VAR_13,(VAR_6-1) - (VAR_14));

  if (FUNC_8(VAR_12,VAR_14)) {
   VAR_15 = VAR_7;

   switch (FUNC_2()) {
   case 128:
        if (FUNC_17(VAR_12)) FUNC_7(VAR_13);
        break;
   case 130:
        if (FUNC_14(VAR_12)) FUNC_7(VAR_13);
        break;
   case 129:
        if (FUNC_13(VAR_12,VAR_14))
           if (FUNC_16(VAR_12,VAR_14)
    || (FUNC_12(VAR_13)))
     FUNC_7(VAR_13);
   }
  }
  FUNC_18(VAR_13,(VAR_6-1) - (VAR_14));
  if (FUNC_11(VAR_13))
   FUNC_20(VAR_13,VAR_14 + (VAR_4+1));
  else FUNC_20(VAR_13,VAR_14 + VAR_4);
 }
 else {
  VAR_13 = VAR_12;
  FUNC_22(VAR_13);

  if (FUNC_9(VAR_12)) {
   VAR_15 = VAR_7;

   switch (FUNC_2()) {
   case 128:
        if (FUNC_17(VAR_12))
    FUNC_20(VAR_13,VAR_4);
        break;
   case 130:
        if (FUNC_14(VAR_12))
    FUNC_20(VAR_13,VAR_4);
        break;
   case 129:
        if (VAR_14 == -1)
           if (FUNC_10(VAR_12))
       FUNC_20(VAR_13,VAR_4);
   }
  }
 }
 *VAR_10 = VAR_13;
 if (VAR_15) {
  if (FUNC_0()) return(VAR_1);
  else FUNC_3();
 }
 return(VAR_3);
}
