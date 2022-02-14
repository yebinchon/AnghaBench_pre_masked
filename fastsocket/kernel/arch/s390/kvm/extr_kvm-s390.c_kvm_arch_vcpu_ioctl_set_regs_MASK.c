
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int guest_gprs; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_regs {int gprs; } ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;

int FUNC_3(struct kvm_vcpu *VAR_0, struct kvm_regs *VAR_1)
{
 FUNC_1(VAR_0);
 FUNC_0(&VAR_0->arch.guest_gprs, &VAR_1->gprs, sizeof(VAR_1->gprs));
 FUNC_2(VAR_0);
 return 0;
}
