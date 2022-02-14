
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* processor_t ;
typedef TYPE_2__* processor_set_t ;
typedef int boolean_t ;
struct TYPE_8__ {int count; } ;
struct TYPE_7__ {scalar_t__ pset_runq_bound_count; } ;
struct TYPE_6__ {scalar_t__ runq_bound_count; TYPE_2__* processor_set; } ;


 TYPE_4__* FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static boolean_t
FUNC_1(processor_t VAR_0)
{
 processor_set_t VAR_1 = VAR_0->processor_set;
 int VAR_2 = FUNC_0(VAR_0)->count;
 VAR_2 -= VAR_1->pset_runq_bound_count;
 VAR_2 += VAR_0->runq_bound_count;

 return VAR_2 == 0;
}
