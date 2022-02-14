
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* cpu_running; } ;
typedef TYPE_1__ cpu_data_t ;


 void* VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int FUNC_6 () ;
 int VAR_2 ;

void
FUNC_7(void)
{
 cpu_data_t *VAR_3 = FUNC_1();

 FUNC_0(!FUNC_3());

 if (!VAR_1) {
  VAR_3->cpu_running = VAR_0;
  return;
 }

 FUNC_4(&VAR_2);
 VAR_3->cpu_running = VAR_0;
 FUNC_6();
 FUNC_5(&VAR_2);
 FUNC_2();
}
