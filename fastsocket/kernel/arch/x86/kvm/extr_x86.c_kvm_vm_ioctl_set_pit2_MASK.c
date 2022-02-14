
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct kvm_pit_state2 {int flags; int channels; } ;
struct TYPE_7__ {TYPE_2__* vpit; } ;
struct kvm {TYPE_3__ arch; } ;
struct TYPE_8__ {int count; } ;
struct TYPE_5__ {int flags; int lock; TYPE_4__* channels; } ;
struct TYPE_6__ {TYPE_1__ pit_state; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm*,int ,int ,int) ;
 int FUNC_1 (TYPE_4__**,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct kvm *VAR_1, struct kvm_pit_state2 *VAR_2)
{
 int VAR_3 = 0, VAR_4 = 0;
 u32 VAR_5, VAR_6;
 FUNC_2(&VAR_1->arch.vpit->pit_state.lock);
 VAR_5 = VAR_1->arch.vpit->pit_state.flags & VAR_0;
 VAR_6 = VAR_2->flags & VAR_0;
 if (!VAR_5 && VAR_6)
  VAR_4 = 1;
 FUNC_1(&VAR_1->arch.vpit->pit_state.channels, &VAR_2->channels,
        sizeof(VAR_1->arch.vpit->pit_state.channels));
 VAR_1->arch.vpit->pit_state.flags = VAR_2->flags;
 FUNC_0(VAR_1, 0, VAR_1->arch.vpit->pit_state.channels[0].count, VAR_4);
 FUNC_3(&VAR_1->arch.vpit->pit_state.lock);
 return VAR_3;
}
