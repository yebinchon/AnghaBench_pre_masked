
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int selfipis; int timerints; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,...) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;

void FUNC_3(void)
{
 int VAR_3;

 FUNC_1("Counter Interrupts taken per CPU (TC)\n");
 for (VAR_3=0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_1("%d: %ld\n", VAR_3, VAR_1[VAR_3].timerints);
 }
 FUNC_1("Self-IPI invocations:\n");
 for (VAR_3=0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_1("%d: %ld\n", VAR_3, VAR_1[VAR_3].selfipis);
 }
 FUNC_2();
 FUNC_1("%d Recoveries of \"stolen\" FPU\n",
        FUNC_0(&VAR_2));
}
