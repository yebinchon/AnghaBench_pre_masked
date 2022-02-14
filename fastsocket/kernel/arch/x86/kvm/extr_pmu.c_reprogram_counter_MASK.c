
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct perf_event_attr {int size; int pinned; int exclude_idle; int exclude_host; int exclude_user; int exclude_kernel; unsigned int config; int sample_period; int type; } ;
struct perf_event {int dummy; } ;
struct kvm_pmc {int counter; TYPE_3__* vcpu; int idx; struct perf_event* perf_event; } ;
typedef int attr ;
struct TYPE_4__ {int reprogram_pmi; } ;
struct TYPE_5__ {TYPE_1__ pmu; } ;
struct TYPE_6__ {TYPE_2__ arch; } ;


 scalar_t__ FUNC_0 (struct perf_event*) ;
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 (int ,unsigned long*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct perf_event* FUNC_3 (struct perf_event_attr*,int,int ,int ,struct kvm_pmc*) ;
 int FUNC_4 (struct kvm_pmc*) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static void FUNC_6(struct kvm_pmc *VAR_3, u32 VAR_4,
  unsigned VAR_5, bool VAR_6, bool VAR_7,
  bool VAR_8)
{
 struct perf_event *VAR_9;
 struct perf_event_attr VAR_10 = {
  .type = VAR_4,
  .size = sizeof(VAR_10),
  .pinned = 1,
  .exclude_idle = 1,
  .exclude_host = 1,
  .exclude_user = VAR_6,
  .exclude_kernel = VAR_7,
  .config = VAR_5,
 };

 VAR_10.sample_period = (-VAR_3->counter) & FUNC_4(VAR_3);

 VAR_9 = FUNC_3(&VAR_10, -1, VAR_0,
       VAR_8 ? VAR_2 :
       VAR_1, VAR_3);
 if (FUNC_0(VAR_9)) {
  FUNC_5("kvm: pmu event creation failed %ld\n",
    FUNC_1(VAR_9));
  return;
 }

 VAR_3->perf_event = VAR_9;
 FUNC_2(VAR_3->idx, (unsigned long*)&VAR_3->vcpu->arch.pmu.reprogram_pmi);
}
