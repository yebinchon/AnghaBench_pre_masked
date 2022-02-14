
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_1__* FUNC_2 () ;
 void FUNC_3 () ;
 void FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 void FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 void FUNC_16 (int) ;
 void FUNC_17 () ;
 void FUNC_18 (int) ;

void __attribute__((noreturn))
FUNC_19 (void)
{
 void (*VAR_2)(int) = FUNC_4;
   int VAR_3 = FUNC_15();


 while (1) {
  if (VAR_1) {
   FUNC_2()->status &= ~VAR_0;




   FUNC_14();
  } else {
   FUNC_2()->status |= VAR_0;
  }

  if (!FUNC_6()) {
   void (*VAR_4)(void);



   FUNC_12();
   if (VAR_2)
    (*VAR_2)(1);

   VAR_4 = FUNC_9;
   if (!VAR_4)
    VAR_4 = FUNC_3;
   (*VAR_4)();
   if (VAR_2)
    (*VAR_2)(0);



  }
  FUNC_11();
  FUNC_13();
  FUNC_10();
  FUNC_0();
  if (FUNC_1(VAR_3))
   FUNC_8();
 }
}
