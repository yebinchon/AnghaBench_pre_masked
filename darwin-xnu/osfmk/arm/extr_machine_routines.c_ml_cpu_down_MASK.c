
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cpu_running; } ;
typedef TYPE_1__ cpu_data_t ;
struct TYPE_5__ {int logical_cpu; int physical_cpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (int *,int) ;
 TYPE_2__ VAR_2 ;

void
FUNC_3(void)
{
 cpu_data_t *VAR_3;

 FUNC_2(&VAR_2.physical_cpu, 1);
 FUNC_2(&VAR_2.logical_cpu, 1);
 VAR_3 = FUNC_1();
 VAR_3->cpu_running = VAR_0;

 FUNC_0(VAR_1);
}
