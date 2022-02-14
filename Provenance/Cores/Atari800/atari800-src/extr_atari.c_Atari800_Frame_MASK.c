
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (void*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_6 () ;
 void* VAR_6 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int VAR_7 ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (double) ;
 int FUNC_15 () ;
 int FUNC_16 (void*) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 void* VAR_8 ;
 int VAR_9 ;
 int FUNC_20 () ;
 int VAR_10 ;
 double FUNC_21 () ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 double VAR_11 ;
 int FUNC_24 () ;
 int FUNC_25 (int ) ;
 int FUNC_26 (char*,scalar_t__,double) ;
 void* VAR_12 ;

void FUNC_27(void)
{

 static int VAR_13 = 0;
 switch (VAR_7) {
 case 135:
  FUNC_1();
  break;
 case 128:
  FUNC_5();
  break;
 case 134:
  FUNC_3(VAR_6);
  FUNC_25(0);
 case 130:
  VAR_4 = !VAR_4;
  break;
 case 129:



  FUNC_20();



  break;

 case 132:
  FUNC_16(VAR_6);
  break;
 case 131:
  FUNC_16(VAR_8);
  break;

 case 133:



  break;
 default:
  break;
 }
 FUNC_6();

 FUNC_9();

 FUNC_7();




 if (++VAR_13 >= VAR_3) {
  VAR_13 = 0;






  FUNC_0(VAR_8);
  FUNC_8();
  FUNC_14(FUNC_21());
  FUNC_15();
  FUNC_13();




  VAR_1 = VAR_8;

 }
 else {



  FUNC_0(VAR_0);

  VAR_1 = VAR_6;
 }

 FUNC_12();



 VAR_2++;
  if (VAR_4) {


   static double VAR_14 = 0.0;
   static double const VAR_15 = 1.0 / 60.0;

   double VAR_16 = FUNC_21();
   if (VAR_16 - VAR_14 > VAR_15)
    VAR_14 = VAR_16;
   else
    VAR_1 = VAR_6;
  }
  else
   FUNC_4();

}
