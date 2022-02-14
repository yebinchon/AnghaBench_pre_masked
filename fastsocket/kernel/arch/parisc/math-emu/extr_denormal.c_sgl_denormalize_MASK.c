
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ boolean ;


 scalar_t__ VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (unsigned int,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int,int) ;
 int FUNC_5 (unsigned int) ;

void
FUNC_6(unsigned int *VAR_2, boolean *VAR_3, int VAR_4)
{
 unsigned int VAR_5;
 int VAR_6, VAR_7;
 boolean VAR_8 = VAR_0, VAR_9, VAR_10;

 VAR_5 = *VAR_2;
 VAR_9 = *VAR_3;
        VAR_7 = FUNC_1(VAR_5) - VAR_1;
        VAR_6 = FUNC_5(VAR_5);
 FUNC_0(VAR_5,VAR_7,VAR_8,VAR_9,VAR_10);
 if (VAR_10) {
     switch (VAR_4) {
       case 128:
  if (VAR_6 == 0) {
   FUNC_2(VAR_5);
  }
  break;
       case 130:
  if (VAR_6 != 0) {
   FUNC_2(VAR_5);
  }
  break;
       case 129:
  if (VAR_8 && (VAR_9 ||
         FUNC_3(VAR_5))) {
      FUNC_2(VAR_5);
  }
  break;
     }
 }
 FUNC_4(VAR_5,VAR_6);
 *VAR_2 = VAR_5;
 *VAR_3 = VAR_10;
 return;
}
