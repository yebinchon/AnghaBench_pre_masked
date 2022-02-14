
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ debugger_active; } ;
typedef TYPE_1__ cpu_data_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_1 () ;
 scalar_t__ VAR_2 ;

void
FUNC_2(
 void)
{
 cpu_data_t *VAR_3 = FUNC_1();

 VAR_3->debugger_active--;
 if (VAR_3->debugger_active != 0)
  return;

 VAR_2 = 0;
 VAR_1 = 0;


 FUNC_0(VAR_0);
}
