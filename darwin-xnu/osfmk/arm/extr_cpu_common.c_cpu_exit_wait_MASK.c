
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cpu_sleep_token; } ;
typedef TYPE_1__ cpu_data_t ;
struct TYPE_4__ {TYPE_1__* cpu_data_vaddr; } ;


 unsigned int volatile VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;

void
FUNC_0(int VAR_3)
{
 if ( VAR_3 != VAR_2) {
  cpu_data_t *VAR_4;

  VAR_4 = VAR_1[VAR_3].cpu_data_vaddr;
  while (!((*(volatile unsigned int*)&VAR_4->cpu_sleep_token) == VAR_0)) {};
 }
}
