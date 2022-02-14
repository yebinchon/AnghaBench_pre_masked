
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* processor_set_t ;
struct TYPE_3__ {scalar_t__ pset_runq_bound_count; int pset_runq; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_1(processor_set_t VAR_1)
{
 if (VAR_0) {
  FUNC_0(&VAR_1->pset_runq);
 }
 VAR_1->pset_runq_bound_count = 0;
}
