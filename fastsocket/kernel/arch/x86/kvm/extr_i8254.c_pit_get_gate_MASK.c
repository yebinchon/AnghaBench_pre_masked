
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* vpit; } ;
struct kvm {TYPE_4__ arch; } ;
struct TYPE_6__ {TYPE_1__* channels; int lock; } ;
struct TYPE_7__ {TYPE_2__ pit_state; } ;
struct TYPE_5__ {int gate; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct kvm *VAR_0, int VAR_1)
{
 FUNC_0(!FUNC_1(&VAR_0->arch.vpit->pit_state.lock));

 return VAR_0->arch.vpit->pit_state.channels[VAR_1].gate;
}
