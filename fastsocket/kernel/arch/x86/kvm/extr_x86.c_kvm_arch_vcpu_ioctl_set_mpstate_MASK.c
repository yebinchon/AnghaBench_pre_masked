
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mp_state; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_mp_state {int mp_state; } ;


 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;

int FUNC_2(struct kvm_vcpu *VAR_0,
        struct kvm_mp_state *VAR_1)
{
 FUNC_0(VAR_0);
 VAR_0->arch.mp_state = VAR_1->mp_state;
 FUNC_1(VAR_0);
 return 0;
}
