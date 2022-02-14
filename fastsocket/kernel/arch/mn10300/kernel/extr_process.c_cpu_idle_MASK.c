
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int idle_timestamp; } ;


 void FUNC_0 () ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 void FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;

void FUNC_8(void)
{
 int VAR_2 = FUNC_6();


 for (;;) {
  while (!FUNC_1()) {
   void (*VAR_3)(void);

   FUNC_7();
   VAR_3 = FUNC_2;
   if (!VAR_3)
    VAR_3 = FUNC_0;

   VAR_0[VAR_2].idle_timestamp = VAR_1;
   VAR_3();
  }

  FUNC_4();
  FUNC_5();
  FUNC_3();
 }
}
