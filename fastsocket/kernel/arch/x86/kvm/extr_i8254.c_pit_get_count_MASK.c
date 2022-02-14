
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kvm_kpit_channel_state {int mode; int count; } ;
struct TYPE_6__ {TYPE_2__* vpit; } ;
struct kvm {TYPE_3__ arch; } ;
typedef int s64 ;
struct TYPE_4__ {int lock; struct kvm_kpit_channel_state* channels; } ;
struct TYPE_5__ {TYPE_1__ pit_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct kvm*,struct kvm_kpit_channel_state*,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct kvm *VAR_2, int VAR_3)
{
 struct kvm_kpit_channel_state *VAR_4 =
  &VAR_2->arch.vpit->pit_state.channels[VAR_3];
 s64 VAR_5, VAR_6;
 int VAR_7;

 FUNC_0(!FUNC_4(&VAR_2->arch.vpit->pit_state.lock));

 VAR_6 = FUNC_1(VAR_2, VAR_4, VAR_3);
 VAR_5 = FUNC_3(VAR_6, VAR_0, VAR_1);

 switch (VAR_4->mode) {
 case 0:
 case 1:
 case 4:
 case 5:
  VAR_7 = (VAR_4->count - VAR_5) & 0xffff;
  break;
 case 3:

  VAR_7 = VAR_4->count - (FUNC_2((2 * VAR_5), VAR_4->count));
  break;
 default:
  VAR_7 = VAR_4->count - FUNC_2(VAR_5, VAR_4->count);
  break;
 }
 return VAR_7;
}
