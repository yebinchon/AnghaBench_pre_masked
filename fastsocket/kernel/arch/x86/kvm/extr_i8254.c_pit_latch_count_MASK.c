
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kvm_kpit_channel_state {scalar_t__ rw_mode; scalar_t__ count_latched; int latched_count; } ;
struct TYPE_6__ {TYPE_2__* vpit; } ;
struct kvm {TYPE_3__ arch; } ;
struct TYPE_4__ {int lock; struct kvm_kpit_channel_state* channels; } ;
struct TYPE_5__ {TYPE_1__ pit_state; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct kvm*,int) ;

__attribute__((used)) static void FUNC_3(struct kvm *VAR_0, int VAR_1)
{
 struct kvm_kpit_channel_state *VAR_2 =
  &VAR_0->arch.vpit->pit_state.channels[VAR_1];

 FUNC_0(!FUNC_1(&VAR_0->arch.vpit->pit_state.lock));

 if (!VAR_2->count_latched) {
  VAR_2->latched_count = FUNC_2(VAR_0, VAR_1);
  VAR_2->count_latched = VAR_2->rw_mode;
 }
}
