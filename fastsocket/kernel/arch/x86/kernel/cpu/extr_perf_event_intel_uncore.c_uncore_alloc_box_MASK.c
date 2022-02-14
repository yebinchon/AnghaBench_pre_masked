
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_uncore_type {int num_shared_regs; } ;
struct intel_uncore_extra_reg {int dummy; } ;
struct intel_uncore_box {int cpu; int phys_id; int refcnt; TYPE_1__* shared_regs; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int) ;
 struct intel_uncore_box* FUNC_2 (int,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct intel_uncore_box*) ;

struct intel_uncore_box *FUNC_5(struct intel_uncore_type *VAR_2, int VAR_3)
{
 struct intel_uncore_box *VAR_4;
 int VAR_5, VAR_6;

 VAR_6 = sizeof(*VAR_4) + VAR_2->num_shared_regs * sizeof(struct intel_uncore_extra_reg);

 VAR_4 = FUNC_2(VAR_6, VAR_0 | VAR_1, FUNC_1(VAR_3));
 if (!VAR_4)
  return ((void*)0);

 for (VAR_5 = 0; VAR_5 < VAR_2->num_shared_regs; VAR_5++)
  FUNC_3(&VAR_4->shared_regs[VAR_5].lock);

 FUNC_4(VAR_4);
 FUNC_0(&VAR_4->refcnt, 1);
 VAR_4->cpu = -1;
 VAR_4->phys_id = -1;

 return VAR_4;
}
