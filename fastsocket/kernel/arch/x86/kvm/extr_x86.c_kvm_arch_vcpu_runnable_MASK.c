
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mp_state; scalar_t__ nmi_pending; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;

int FUNC_2(struct kvm_vcpu *VAR_2)
{
 return VAR_2->arch.mp_state == VAR_0
  || VAR_2->arch.mp_state == VAR_1
  || VAR_2->arch.nmi_pending ||
  (FUNC_0(VAR_2) &&
   FUNC_1(VAR_2));
}
