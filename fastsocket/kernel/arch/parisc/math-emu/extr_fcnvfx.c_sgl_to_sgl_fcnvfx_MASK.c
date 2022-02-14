
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int sgl_floating_point ;
typedef scalar_t__ boolean ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int,int) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int VAR_3 ;



 int FUNC_3 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (unsigned int) ;
 scalar_t__ FUNC_9 (unsigned int,int) ;
 scalar_t__ FUNC_10 (unsigned int) ;
 scalar_t__ FUNC_11 (unsigned int) ;
 int FUNC_12 (unsigned int) ;
 int FUNC_13 (unsigned int,int) ;
 scalar_t__ FUNC_14 (unsigned int) ;
 int FUNC_15 (unsigned int,int) ;
 scalar_t__ FUNC_16 (unsigned int) ;
 scalar_t__ VAR_6 ;

int
FUNC_17(
      sgl_floating_point *VAR_7,
      sgl_floating_point *VAR_8,
      int *VAR_9,
      sgl_floating_point *VAR_10)
{
 register unsigned int VAR_11, VAR_12;
 register int VAR_13, VAR_14;
 register boolean VAR_15 = VAR_0;

 VAR_11 = *VAR_7;
 VAR_13 = FUNC_8(VAR_11) - VAR_4;




 if (VAR_13 > VAR_5) {

  if ((VAR_13 > VAR_5 + 1) ||
  FUNC_11(VAR_11) || FUNC_16(VAR_11)) {
                        if (FUNC_16(VAR_11)) VAR_14 = 0x7fffffff;
                        else VAR_14 = 0x80000000;

                 if (FUNC_2()) {
                            return(VAR_2);
                        }
                        FUNC_5();
   *VAR_9 = VAR_14;
   return(VAR_3);
         }
 }



 if (VAR_13 >= 0) {
  VAR_12 = VAR_11;
  FUNC_7(VAR_12);
  FUNC_0(VAR_12,VAR_13);
  if (FUNC_14(VAR_11)) VAR_14 = -FUNC_6(VAR_12);
  else VAR_14 = FUNC_6(VAR_12);


  if (FUNC_9(VAR_11,VAR_13)) {
   VAR_15 = VAR_6;

   switch (FUNC_3()) {
   case 128:
        if (FUNC_16(VAR_11)) VAR_14++;
        break;
   case 130:
        if (FUNC_14(VAR_11)) VAR_14--;
        break;
   case 129:
        if (FUNC_13(VAR_11,VAR_13)) {
           if (FUNC_15(VAR_11,VAR_13)
    || (FUNC_12(VAR_12)))
              if (FUNC_16(VAR_11)) VAR_14++;
              else VAR_14--;
        }
   }
  }
 }
 else {
  VAR_14 = 0;


  if (FUNC_10(VAR_11)) {
   VAR_15 = VAR_6;

   switch (FUNC_3()) {
   case 128:
        if (FUNC_16(VAR_11)) VAR_14++;
        break;
   case 130:
        if (FUNC_14(VAR_11)) VAR_14--;
        break;
   case 129:
        if (VAR_13 == -1)
           if (FUNC_11(VAR_11))
              if (FUNC_16(VAR_11)) VAR_14++;
              else VAR_14--;
   }
  }
 }
 *VAR_9 = VAR_14;
 if (VAR_15) {
  if (FUNC_1()) return(VAR_1);
  else FUNC_4();
 }
 return(VAR_3);
}
