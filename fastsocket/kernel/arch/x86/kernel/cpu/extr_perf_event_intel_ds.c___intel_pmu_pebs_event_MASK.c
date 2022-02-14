
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {int flags; int sp; int bp; int ip; } ;
struct perf_sample_data {int period; } ;
struct TYPE_4__ {int precise_ip; } ;
struct TYPE_3__ {int last_period; } ;
struct perf_event {TYPE_2__ attr; TYPE_1__ hw; } ;
struct pebs_record_core {int sp; int bp; int ip; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pt_regs*) ;
 int FUNC_1 (struct perf_event*) ;
 scalar_t__ FUNC_2 (struct perf_event*,struct perf_sample_data*,struct pt_regs*) ;
 int FUNC_3 (struct perf_sample_data*,int ) ;
 int FUNC_4 (struct perf_event*,int ) ;

__attribute__((used)) static void FUNC_5(struct perf_event *VAR_1,
       struct pt_regs *VAR_2, void *VAR_3)
{





 struct pebs_record_core *VAR_4 = VAR_3;
 struct perf_sample_data VAR_5;
 struct pt_regs VAR_6;

 if (!FUNC_1(VAR_1))
  return;

 FUNC_3(&VAR_5, 0);
 VAR_5.period = VAR_1->hw.last_period;
 VAR_6 = *VAR_2;
 VAR_6.ip = VAR_4->ip;
 VAR_6.bp = VAR_4->bp;
 VAR_6.sp = VAR_4->sp;

 if (VAR_1->attr.precise_ip > 1 && FUNC_0(&VAR_6))
  VAR_6.flags |= VAR_0;
 else
  VAR_6.flags &= ~VAR_0;

 if (FUNC_2(VAR_1, &VAR_5, &VAR_6))
  FUNC_4(VAR_1, 0);
}
