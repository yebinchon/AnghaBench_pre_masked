
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_lapic_irq {int vector; } ;


 int FUNC_0 (struct kvm_vcpu*,int ) ;

int FUNC_1(struct kvm_vcpu *VAR_0, struct kvm_lapic_irq *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1->vector);
}
