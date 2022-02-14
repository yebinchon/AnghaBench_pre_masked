
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct kvm_kpit_state {int flags; TYPE_1__* channels; int lock; } ;
struct TYPE_5__ {TYPE_3__* vpit; } ;
struct kvm {TYPE_2__ arch; } ;
struct TYPE_6__ {struct kvm_kpit_state pit_state; } ;
struct TYPE_4__ {int count; int mode; int count_load_time; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct kvm*,int,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int,int) ;

__attribute__((used)) static void FUNC_6(struct kvm *VAR_1, int VAR_2, u32 VAR_3)
{
 struct kvm_kpit_state *VAR_4 = &VAR_1->arch.vpit->pit_state;

 FUNC_0(!FUNC_4(&VAR_4->lock));

 FUNC_5("pit: load_count val is %d, channel is %d\n", VAR_3, VAR_2);





 if (VAR_3 == 0)
  VAR_3 = 0x10000;

 VAR_4->channels[VAR_2].count = VAR_3;

 if (VAR_2 != 0) {
  VAR_4->channels[VAR_2].count_load_time = FUNC_3();
  return;
 }



 switch (VAR_4->channels[0].mode) {
 case 0:
 case 1:

 case 4:
  if (!(VAR_4->flags & VAR_0)) {
   FUNC_1(VAR_1, VAR_3, 0);
  }
  break;
 case 2:
 case 3:
  if (!(VAR_4->flags & VAR_0)){
   FUNC_1(VAR_1, VAR_3, 1);
  }
  break;
 default:
  FUNC_2(VAR_1->arch.vpit);
 }
}
