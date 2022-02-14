
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* processor_set_t ;
struct TYPE_5__ {int count; } ;
struct TYPE_6__ {int load_average; TYPE_1__ pset_runq; int * cpu_state_map; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;

void
FUNC_2(processor_set_t VAR_2)
{
 int VAR_3 = ((FUNC_0(VAR_2->cpu_state_map[VAR_0]) + VAR_2->pset_runq.count + FUNC_1(VAR_2)) << VAR_1);
 int VAR_4 = (VAR_2->load_average + VAR_3) >> 1;

 VAR_2->load_average = VAR_4;



}
