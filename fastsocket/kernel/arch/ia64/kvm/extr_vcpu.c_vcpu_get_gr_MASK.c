
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_pt_regs {int dummy; } ;


 int FUNC_0 (unsigned long,unsigned long*,int ,struct kvm_pt_regs*) ;
 struct kvm_pt_regs* FUNC_1 (struct kvm_vcpu*) ;

u64 FUNC_2(struct kvm_vcpu *VAR_0, unsigned long VAR_1)
{
 struct kvm_pt_regs *VAR_2 = FUNC_1(VAR_0);
 unsigned long VAR_3;

 if (!VAR_1)
  return 0;
 FUNC_0(VAR_1, &VAR_3, 0, VAR_2);
 return VAR_3;
}
