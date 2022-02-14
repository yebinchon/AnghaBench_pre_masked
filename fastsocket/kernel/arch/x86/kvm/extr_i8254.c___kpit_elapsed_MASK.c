
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ period; int timer; } ;
struct kvm_kpit_state {TYPE_3__ pit_timer; } ;
struct TYPE_5__ {TYPE_1__* vpit; } ;
struct kvm {TYPE_2__ arch; } ;
typedef scalar_t__ s64 ;
typedef int ktime_t ;
struct TYPE_4__ {struct kvm_kpit_state pit_state; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static s64 FUNC_3(struct kvm *VAR_0)
{
 s64 VAR_1;
 ktime_t VAR_2;
 struct kvm_kpit_state *VAR_3 = &VAR_0->arch.vpit->pit_state;

 if (!VAR_3->pit_timer.period)
  return 0;
 VAR_2 = FUNC_0(&VAR_3->pit_timer.timer);
 VAR_1 = VAR_3->pit_timer.period - FUNC_1(VAR_2);
 VAR_1 = FUNC_2(VAR_1, VAR_3->pit_timer.period);

 return VAR_1;
}
