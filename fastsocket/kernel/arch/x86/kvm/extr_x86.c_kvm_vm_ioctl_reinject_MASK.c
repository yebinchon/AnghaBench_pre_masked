
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct kvm_reinject_control {int pit_reinject; } ;
struct TYPE_8__ {TYPE_3__* vpit; } ;
struct kvm {TYPE_4__ arch; } ;
struct TYPE_5__ {int reinject; } ;
struct TYPE_6__ {int lock; TYPE_1__ pit_timer; } ;
struct TYPE_7__ {TYPE_2__ pit_state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct kvm *VAR_1,
     struct kvm_reinject_control *VAR_2)
{
 if (!VAR_1->arch.vpit)
  return -VAR_0;
 FUNC_0(&VAR_1->arch.vpit->pit_state.lock);
 VAR_1->arch.vpit->pit_state.pit_timer.reinject = VAR_2->pit_reinject;
 FUNC_1(&VAR_1->arch.vpit->pit_state.lock);
 return 0;
}
