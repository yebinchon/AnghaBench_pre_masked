
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kvm_pit_state {int dummy; } ;
struct TYPE_4__ {TYPE_2__* vpit; } ;
struct kvm {TYPE_1__ arch; } ;
struct TYPE_6__ {int lock; } ;
struct TYPE_5__ {TYPE_3__ pit_state; } ;


 int FUNC_0 (struct kvm_pit_state*,TYPE_3__*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct kvm *VAR_0, struct kvm_pit_state *VAR_1)
{
 int VAR_2 = 0;

 FUNC_1(&VAR_0->arch.vpit->pit_state.lock);
 FUNC_0(VAR_1, &VAR_0->arch.vpit->pit_state, sizeof(struct kvm_pit_state));
 FUNC_2(&VAR_0->arch.vpit->pit_state.lock);
 return VAR_2;
}
