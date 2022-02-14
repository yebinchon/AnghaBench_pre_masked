
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dbl_floating_point ;
typedef scalar_t__ boolean ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int *,unsigned int,unsigned int) ;
 int FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (unsigned int,unsigned int,int) ;
 scalar_t__ FUNC_5 (unsigned int,unsigned int) ;
 int FUNC_6 (unsigned int,unsigned int) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (unsigned int,unsigned int,int) ;
 scalar_t__ FUNC_9 (unsigned int) ;
 int FUNC_10 (unsigned int,unsigned int,int) ;
 scalar_t__ FUNC_11 (int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_12 (unsigned int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_13 (unsigned int,unsigned int,int) ;
 scalar_t__ FUNC_14 () ;
 scalar_t__ FUNC_15 () ;
 int VAR_4 ;



 int FUNC_16 () ;
 int VAR_5 ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 scalar_t__ VAR_6 ;

int
FUNC_19(
      dbl_floating_point *VAR_7,
      unsigned int *VAR_8,
      int *VAR_9,
      unsigned int *VAR_10)
{
 register unsigned int VAR_11,VAR_12, VAR_13,VAR_14;
 register int VAR_15, VAR_16;
 register boolean VAR_17 = VAR_1;

 FUNC_2(VAR_7,VAR_11,VAR_12);
 VAR_15 = FUNC_3(VAR_11) - VAR_0;




 if (VAR_15 > VAR_5) {

  if (FUNC_11(VAR_15,VAR_11,VAR_12)) {
                        if (FUNC_12(VAR_11)) VAR_16 = 0x7fffffff;
                        else VAR_16 = 0x80000000;

                 if (FUNC_15()) {
                            return(VAR_3);
                        }
                        FUNC_18();
   *VAR_9 = VAR_16;
   return(VAR_4);
  }
 }



 if (VAR_15 >= 0) {
  VAR_13 = VAR_11;
  VAR_14 = VAR_12;
  FUNC_1(VAR_13);
  FUNC_13(VAR_13,VAR_14,VAR_15);
  if (FUNC_9(VAR_11) && (VAR_15 <= VAR_5))
   VAR_16 = -FUNC_0(VAR_13);
  else VAR_16 = FUNC_0(VAR_13);


  if (FUNC_4(VAR_11,VAR_12,VAR_15)) {
                        VAR_17 = VAR_6;

                        switch (FUNC_16()) {
                        case 128:
                             if (FUNC_12(VAR_11)) VAR_16++;
                             break;
                        case 130:
                             if (FUNC_9(VAR_11)) VAR_16--;
                             break;
                        case 129:
                             if (FUNC_8(VAR_11,VAR_12,VAR_15))
                                if (FUNC_10(VAR_11,VAR_12,VAR_15) ||
    (FUNC_7(VAR_13)))
                                   if (FUNC_12(VAR_11)) VAR_16++;
                                   else VAR_16--;
                        }

   if ((FUNC_12(VAR_11) && VAR_16 < 0) ||
       (FUNC_9(VAR_11) && VAR_16 > 0)) {

                          if (FUNC_12(VAR_11)) VAR_16 = 0x7fffffff;
                          else VAR_16 = 0x80000000;

                   if (FUNC_15()) {
                            return(VAR_3);
                          }
                          FUNC_18();
     *VAR_9 = VAR_16;
     return(VAR_4);
   }
                }
 }
 else {
  VAR_16 = 0;


  if (FUNC_5(VAR_11,VAR_12)) {
                        VAR_17 = VAR_6;

                        switch (FUNC_16()) {
                        case 128:
                             if (FUNC_12(VAR_11)) VAR_16++;
                             break;
                        case 130:
                             if (FUNC_9(VAR_11)) VAR_16--;
                             break;
                        case 129:
                             if (VAR_15 == -1)
                                if (FUNC_6(VAR_11,VAR_12))
                                   if (FUNC_12(VAR_11)) VAR_16++;
                                   else VAR_16--;
   }
                }
 }
 *VAR_9 = VAR_16;
        if (VAR_17) {
                if (FUNC_14()) return(VAR_2);
  else FUNC_17();
        }
 return(VAR_4);
}
