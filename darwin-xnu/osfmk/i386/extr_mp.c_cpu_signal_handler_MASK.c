
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int x86_saved_state_t ;
struct TYPE_4__ {int cpu_signals; int cpu_prior_signals; } ;
struct TYPE_3__ {int lcpu; } ;


 int FUNC_0 (int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 TYPE_2__** VAR_9 ;
 int VAR_10 ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 TYPE_1__* FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ,int volatile*) ;
 int FUNC_8 (int ,int volatile*) ;
 int VAR_11 ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 () ;
 scalar_t__ VAR_12 ;
 int FUNC_14 (int *) ;

int
FUNC_15(x86_saved_state_t *VAR_13)
{

#pragma unused (regs)

 int VAR_14;
 volatile int *VAR_15;

 FUNC_1(FUNC_6());

 VAR_14 = FUNC_3();
 VAR_15 = &VAR_9[VAR_14]->cpu_signals;





 VAR_9[VAR_14]->cpu_prior_signals = *VAR_15;

 do {
  if (FUNC_7(VAR_5, VAR_15)) {
   FUNC_0(VAR_10,VAR_14,VAR_5);
   FUNC_8(VAR_5, VAR_15);
   FUNC_13();
  } else if (FUNC_7(VAR_2, VAR_15)) {
   FUNC_0(VAR_10,VAR_14,VAR_2);
   FUNC_8(VAR_2, VAR_15);
   FUNC_10();
  } else if (FUNC_7(VAR_3, VAR_15)) {
   FUNC_0(VAR_10,VAR_14,VAR_3);
   FUNC_8(VAR_3, VAR_15);
   FUNC_9();
  }
  if (VAR_13 == ((void*)0)) {

   break;
  } else if (FUNC_7(VAR_1, VAR_15)) {
   FUNC_0(VAR_10,VAR_14,VAR_1);
   FUNC_8(VAR_1, VAR_15);
   FUNC_2(FUNC_4(VAR_14));
  }
 } while (*VAR_15);

 return 0;
}
