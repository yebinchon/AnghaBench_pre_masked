
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int sgl_floating_point ;
typedef int boolean ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 unsigned int VAR_3 ;


 int FUNC_2 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (unsigned int,unsigned int,unsigned int) ;
 unsigned int FUNC_6 (unsigned int) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (unsigned int) ;
 int FUNC_11 (unsigned int) ;
 scalar_t__ FUNC_12 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_13 (unsigned int) ;
 scalar_t__ FUNC_14 (unsigned int) ;
 scalar_t__ FUNC_15 (unsigned int) ;
 scalar_t__ FUNC_16 (unsigned int) ;
 scalar_t__ FUNC_17 (unsigned int) ;
 scalar_t__ FUNC_18 (unsigned int) ;
 scalar_t__ FUNC_19 (unsigned int) ;
 int FUNC_20 (unsigned int) ;
 int FUNC_21 (unsigned int) ;
 int FUNC_22 (unsigned int) ;
 int FUNC_23 (unsigned int,int) ;
 int FUNC_24 (unsigned int) ;
 int FUNC_25 (unsigned int,int) ;
 int FUNC_26 (unsigned int) ;
 int FUNC_27 (unsigned int) ;
 int FUNC_28 (unsigned int,unsigned int,unsigned int) ;

unsigned int
FUNC_29(
    sgl_floating_point *VAR_7,
    unsigned int *VAR_8,
    sgl_floating_point *VAR_9,
    unsigned int *VAR_10)
{
 register unsigned int VAR_11, VAR_12;
 register int VAR_13;
 register unsigned int VAR_14, VAR_15;
 register boolean VAR_16 = VAR_0, VAR_17;

 VAR_11 = *VAR_7;



        if ((VAR_13 = FUNC_9(VAR_11)) == VAR_5) {



                if (FUNC_17(VAR_11)) {

                        if (FUNC_1()) return(VAR_2);

                        FUNC_4();
                        FUNC_26(VAR_11);
                }




  if (FUNC_19(VAR_11) || FUNC_14(VAR_11)) {
                 *VAR_9 = VAR_11;
                 return(VAR_3);
  }
        }




 if (FUNC_18(VAR_11)) {
  *VAR_9 = VAR_11;
  return(VAR_3);
 }




 if (FUNC_16(VAR_11)) {

  if (FUNC_1()) return(VAR_2);

  FUNC_4();
  FUNC_22(VAR_11);
  *VAR_9 = VAR_11;
  return(VAR_3);
 }




 if (VAR_13 > 0) {
  VAR_17 = FUNC_10(VAR_11);
  FUNC_8(VAR_11);
 }
 else {

  FUNC_7(VAR_11);
  VAR_13++;
  FUNC_23(VAR_11,VAR_13);
  VAR_17 = VAR_13 & 1;
 }
 if (VAR_17) {


  FUNC_20(VAR_11);
 }






 FUNC_27(VAR_12);
 VAR_14 = 1 << VAR_6;
 while (VAR_14 && FUNC_13(VAR_11)) {
  FUNC_5(VAR_12,VAR_14,VAR_15);
  if(VAR_15 <= FUNC_6(VAR_11)) {

   FUNC_5(VAR_12,(VAR_14<<1),VAR_12);
   FUNC_28(VAR_11,VAR_15,VAR_11);
  }
  FUNC_24(VAR_14);
  FUNC_20(VAR_11);
 }

 if (VAR_17) {
  FUNC_24(VAR_12);
 }


 if (FUNC_13(VAR_11)) {
  if (!VAR_17 && FUNC_12(VAR_12,VAR_11))
   FUNC_11(VAR_12);
  VAR_16 = FUNC_21(VAR_12);
  FUNC_24(VAR_12);


  switch (FUNC_2()) {
  case 128:
       FUNC_11(VAR_12);
       break;
  case 129:


       if (VAR_16) {
   FUNC_11(VAR_12);
       }
       break;
  }

  if (FUNC_15(VAR_12)) VAR_13+=2;

  if (FUNC_0()) {
   FUNC_25(VAR_12,
    ((VAR_13-VAR_4)>>1)+VAR_4);
   *VAR_9 = VAR_12;
   return(VAR_1);
  }
  else FUNC_3();
 }
 else {
  FUNC_24(VAR_12);
 }
 FUNC_25(VAR_12,((VAR_13-VAR_4)>>1)+VAR_4);
 *VAR_9 = VAR_12;
 return(VAR_3);
}
