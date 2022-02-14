
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cpu_signals; } ;


 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int volatile*) ;
 int FUNC_4 (int ,int volatile*) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 () ;

void
FUNC_6(void)
{
 volatile int *VAR_4 = &FUNC_2()->cpu_signals;

 if (FUNC_3(VAR_1, VAR_4) && (VAR_3 == VAR_0)) {
  FUNC_0(VAR_2, FUNC_1(), VAR_1);
  FUNC_4(VAR_1, VAR_4);
  FUNC_5();
 }
}
