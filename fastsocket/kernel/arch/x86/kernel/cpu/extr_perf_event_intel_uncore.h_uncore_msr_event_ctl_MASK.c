
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_uncore_box {TYPE_2__* pmu; } ;
struct TYPE_4__ {TYPE_1__* type; } ;
struct TYPE_3__ {int event_ctl; scalar_t__ pair_ctr_ctl; } ;


 int FUNC_0 (struct intel_uncore_box*) ;

__attribute__((used)) static inline
unsigned FUNC_1(struct intel_uncore_box *VAR_0, int VAR_1)
{
 return VAR_0->pmu->type->event_ctl +
  (VAR_0->pmu->type->pair_ctr_ctl ? 2 * VAR_1 : VAR_1) +
  FUNC_0(VAR_0);
}
