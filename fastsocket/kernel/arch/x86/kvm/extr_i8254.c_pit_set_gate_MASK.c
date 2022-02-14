
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct kvm_kpit_channel_state {int mode; int gate; int count_load_time; } ;
struct TYPE_6__ {TYPE_2__* vpit; } ;
struct kvm {TYPE_3__ arch; } ;
struct TYPE_4__ {int lock; struct kvm_kpit_channel_state* channels; } ;
struct TYPE_5__ {TYPE_1__ pit_state; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct kvm *VAR_0, int VAR_1, u32 VAR_2)
{
 struct kvm_kpit_channel_state *VAR_3 =
  &VAR_0->arch.vpit->pit_state.channels[VAR_1];

 FUNC_0(!FUNC_2(&VAR_0->arch.vpit->pit_state.lock));

 switch (VAR_3->mode) {
 default:
 case 0:
 case 4:

  break;
 case 1:
 case 2:
 case 3:
 case 5:

  if (VAR_3->gate < VAR_2)
   VAR_3->count_load_time = FUNC_1();
  break;
 }

 VAR_3->gate = VAR_2;
}
