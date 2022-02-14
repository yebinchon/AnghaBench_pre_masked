
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cpu_signal; int cpu_id; } ;
typedef TYPE_1__ cpu_data_t ;
struct TYPE_5__ {int cpu_id; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 () ;

void
FUNC_2(cpu_data_t *VAR_1)
{

 if (!(VAR_1->cpu_signal & VAR_0)) {
  FUNC_0(FUNC_1()->cpu_id, VAR_1->cpu_id);
 }
}
