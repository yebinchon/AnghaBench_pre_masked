
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct kvm_pit_state {TYPE_1__* channels; } ;
struct TYPE_6__ {TYPE_3__* vpit; } ;
struct kvm {TYPE_2__ arch; } ;
struct TYPE_8__ {int lock; } ;
struct TYPE_7__ {TYPE_4__ pit_state; } ;
struct TYPE_5__ {int count; } ;


 int FUNC_0 (struct kvm*,int ,int ,int ) ;
 int FUNC_1 (TYPE_4__*,struct kvm_pit_state*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct kvm *VAR_0, struct kvm_pit_state *VAR_1)
{
 int VAR_2 = 0;

 FUNC_2(&VAR_0->arch.vpit->pit_state.lock);
 FUNC_1(&VAR_0->arch.vpit->pit_state, VAR_1, sizeof(struct kvm_pit_state));
 FUNC_0(VAR_0, 0, VAR_1->channels[0].count, 0);
 FUNC_3(&VAR_0->arch.vpit->pit_state.lock);
 return VAR_2;
}
