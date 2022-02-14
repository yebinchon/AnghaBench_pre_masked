
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int idle; int donate_dedicated_cpu; unsigned long wait_state_cycles; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (unsigned int) ;
 TYPE_1__* FUNC_7 () ;
 unsigned long FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 unsigned long FUNC_11 (int ) ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 int FUNC_15 () ;
 unsigned int FUNC_16 () ;
 int VAR_2 ;
 unsigned long VAR_3 ;

__attribute__((used)) static void FUNC_17(void)
{
 unsigned int VAR_4 = FUNC_16();
 unsigned long VAR_5;
 unsigned long VAR_6, VAR_7;





 FUNC_7()->idle = 1;
 FUNC_7()->donate_dedicated_cpu = 1;
 VAR_6 = FUNC_11(VAR_0);






 if (FUNC_3(VAR_2)) {
  VAR_5 = FUNC_8() +
   FUNC_3(VAR_2) * VAR_3;
  FUNC_10();
  FUNC_14(VAR_1);

  while (FUNC_8() < VAR_5) {
   if (FUNC_12() || FUNC_6(VAR_4))
    goto out;
   FUNC_13();
   FUNC_0();
   FUNC_2();
  }

  FUNC_1();
  FUNC_5(VAR_1);
  FUNC_15();
  FUNC_9();
  if (FUNC_12() || FUNC_6(VAR_4))
   goto out;
 }

 FUNC_4();

out:
 FUNC_1();
 VAR_7 = FUNC_11(VAR_0);
 FUNC_7()->wait_state_cycles += VAR_7 - VAR_6;
 FUNC_7()->donate_dedicated_cpu = 0;
 FUNC_7()->idle = 0;
}
