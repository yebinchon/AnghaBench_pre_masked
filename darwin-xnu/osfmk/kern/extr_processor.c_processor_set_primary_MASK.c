
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* processor_t ;
typedef TYPE_2__* processor_set_t ;
struct TYPE_6__ {int primary_map; } ;
struct TYPE_5__ {int cpu_id; TYPE_2__* processor_set; void* is_SMT; struct TYPE_5__* processor_secondary; struct TYPE_5__* processor_primary; } ;


 void* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_1 ;

void
FUNC_2(
 processor_t VAR_2,
 processor_t VAR_3)
{
 FUNC_0(VAR_2->processor_primary == VAR_3 || VAR_2->processor_primary == VAR_2);

 VAR_2->processor_primary = VAR_3;

 FUNC_0(VAR_3->processor_secondary == ((void*)0) || VAR_3->processor_secondary == VAR_2);
 if (VAR_3 != VAR_2) {




  FUNC_0(VAR_2->processor_secondary == ((void*)0));
  VAR_3->processor_secondary = VAR_2;

  VAR_3->is_SMT = VAR_0;
  VAR_2->is_SMT = VAR_0;

  processor_set_t VAR_4 = VAR_2->processor_set;
  FUNC_1(&VAR_4->primary_map, VAR_2->cpu_id, VAR_1);
 }
}
