
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;
struct kvm_vcpu {int dummy; } ;
struct kvm_pt_regs {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct kvm_vcpu*,unsigned int) ;
 int FUNC_1 (struct kvm_vcpu*,char*) ;
 int FUNC_2 (int ,unsigned int,int ,int,struct kvm_pt_regs*) ;
 struct kvm_pt_regs* FUNC_3 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_2)
{
 unsigned VAR_3;
 uint64_t VAR_4;

 struct kvm_pt_regs *VAR_5 = FUNC_3(VAR_2);

 VAR_3 = FUNC_0(VAR_2, VAR_3);
 VAR_4 = VAR_3 & VAR_1;
 if (!(VAR_3 & VAR_0))
  FUNC_1(VAR_2, "Trying to inject one IRQ with psr.ic=0\n");
 FUNC_2(0, VAR_4, 0, 12, VAR_5);
}
