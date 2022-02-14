
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int mp_state; } ;
struct TYPE_4__ {int halt_exits; } ;
struct kvm_vcpu {TYPE_3__* run; TYPE_2__ arch; int kvm; TYPE_1__ stat; } ;
struct TYPE_6__ {int exit_reason; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

int FUNC_1(struct kvm_vcpu *VAR_2)
{
 ++VAR_2->stat.halt_exits;
 if (FUNC_0(VAR_2->kvm)) {
  VAR_2->arch.mp_state = VAR_1;
  return 1;
 } else {
  VAR_2->run->exit_reason = VAR_0;
  return 0;
 }
}
