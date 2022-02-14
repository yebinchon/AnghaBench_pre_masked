
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct perf_event {int dummy; } ;
struct intel_uncore_box {TYPE_3__* pmu; } ;
struct TYPE_6__ {TYPE_2__* type; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* put_constraint ) (struct intel_uncore_box*,struct perf_event*) ;} ;


 int FUNC_0 (struct intel_uncore_box*,struct perf_event*) ;

__attribute__((used)) static void FUNC_1(struct intel_uncore_box *VAR_0, struct perf_event *VAR_1)
{
 if (VAR_0->pmu->type->ops->put_constraint)
  VAR_0->pmu->type->ops->put_constraint(VAR_0, VAR_1);
}
