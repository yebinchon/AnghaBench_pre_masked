
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int config1; } ;
struct hw_perf_event_extra {int config; scalar_t__ reg; int idx; } ;
struct TYPE_5__ {struct hw_perf_event_extra extra_reg; } ;
struct perf_event {TYPE_1__ attr; TYPE_2__ hw; } ;
struct extra_reg {int event; int config_mask; int valid_mask; scalar_t__ msr; int idx; } ;
struct TYPE_6__ {struct extra_reg* extra_regs; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;

__attribute__((used)) static int FUNC_0(u64 VAR_2, struct perf_event *VAR_3)
{
 struct hw_perf_event_extra *VAR_4;
 struct extra_reg *VAR_5;

 VAR_4 = &VAR_3->hw.extra_reg;

 if (!VAR_1.extra_regs)
  return 0;

 for (VAR_5 = VAR_1.extra_regs; VAR_5->msr; VAR_5++) {
  if (VAR_5->event != (VAR_2 & VAR_5->config_mask))
   continue;
  if (VAR_3->attr.config1 & ~VAR_5->valid_mask)
   return -VAR_0;

  VAR_4->idx = VAR_5->idx;
  VAR_4->config = VAR_3->attr.config1;
  VAR_4->reg = VAR_5->msr;
  break;
 }
 return 0;
}
