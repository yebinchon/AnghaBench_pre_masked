
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mp_state; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_mp_state {scalar_t__ mp_state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;

int FUNC_3(struct kvm_vcpu *VAR_1,
        struct kvm_mp_state *VAR_2)
{
 int VAR_3 = 0;

 FUNC_0(VAR_1);
 VAR_1->arch.mp_state = VAR_2->mp_state;
 if (VAR_1->arch.mp_state == VAR_0)
  VAR_3 = FUNC_2(VAR_1);
 FUNC_1(VAR_1);
 return VAR_3;
}
