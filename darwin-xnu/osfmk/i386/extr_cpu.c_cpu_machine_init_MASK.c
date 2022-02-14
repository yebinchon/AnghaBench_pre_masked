
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* cpu_running; void* cpu_boot_complete; int cpu_id; } ;
typedef TYPE_1__ cpu_data_t ;


 int FUNC_0 (int ,int) ;
 void* VAR_0 ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;

void
FUNC_4(
 void)
{
 cpu_data_t *VAR_1 = FUNC_1();

 FUNC_0(VAR_1->cpu_id, !VAR_1->cpu_boot_complete);
 VAR_1->cpu_boot_complete = VAR_0;
 VAR_1->cpu_running = VAR_0;
 FUNC_2();





}
