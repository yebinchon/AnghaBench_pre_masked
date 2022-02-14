
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_uncore_box {TYPE_3__* pmu; int flags; } ;
struct TYPE_6__ {TYPE_2__* type; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* init_box ) (struct intel_uncore_box*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct intel_uncore_box*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static inline void FUNC_2(struct intel_uncore_box *VAR_1)
{
 if (!FUNC_1(VAR_0, &VAR_1->flags)) {
  if (VAR_1->pmu->type->ops->init_box)
   VAR_1->pmu->type->ops->init_box(VAR_1);
 }
}
