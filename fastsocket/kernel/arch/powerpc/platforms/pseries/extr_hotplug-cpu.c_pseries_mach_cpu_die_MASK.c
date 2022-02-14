
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int idle; int donate_dedicated_cpu; int shared_proc; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 TYPE_1__* FUNC_4 () ;
 scalar_t__ FUNC_5 (unsigned int) ;
 int FUNC_6 () ;
 unsigned int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (unsigned int,scalar_t__) ;
 unsigned int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (unsigned int,int ) ;
 int FUNC_16 () ;

__attribute__((used)) static void FUNC_17(void)
{
 unsigned int VAR_3 = FUNC_13();
 unsigned int VAR_4 = FUNC_7();
 u8 VAR_5 = 0;

 FUNC_9();
 FUNC_8();
 FUNC_16();

 if (FUNC_5(VAR_3) == VAR_0) {
  FUNC_12(VAR_3, VAR_0);
  FUNC_10();

  VAR_5 = 2;

  FUNC_4()->idle = 1;
  if (!FUNC_4()->shared_proc)
   FUNC_4()->donate_dedicated_cpu = 1;

  while (FUNC_5(VAR_3) == VAR_0) {
   FUNC_3(VAR_5);
  }

  if (!FUNC_4()->shared_proc)
   FUNC_4()->donate_dedicated_cpu = 0;
  FUNC_4()->idle = 0;

  if (FUNC_5(VAR_3) == VAR_2) {
   FUNC_15(VAR_4, FUNC_2(FUNC_6()));






   FUNC_14();
  }
 }


 FUNC_1(FUNC_5(VAR_3) != VAR_1);

 FUNC_12(VAR_3, VAR_1);
 FUNC_15(VAR_4, FUNC_2(FUNC_6()));
 FUNC_11();


 FUNC_0();
 for(;;);
}
