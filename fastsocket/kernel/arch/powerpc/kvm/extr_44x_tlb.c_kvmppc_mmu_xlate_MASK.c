
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vcpu_44x {struct kvmppc_44x_tlbe* guest_tlb; } ;
struct kvmppc_44x_tlbe {int dummy; } ;
struct kvm_vcpu {int dummy; } ;
typedef unsigned int gva_t ;
typedef unsigned int gpa_t ;


 int FUNC_0 (struct kvmppc_44x_tlbe*) ;
 unsigned int FUNC_1 (struct kvmppc_44x_tlbe*) ;
 struct kvmppc_vcpu_44x* FUNC_2 (struct kvm_vcpu*) ;

gpa_t FUNC_3(struct kvm_vcpu *VAR_0, unsigned int VAR_1,
                       gva_t VAR_2)
{
 struct kvmppc_vcpu_44x *VAR_3 = FUNC_2(VAR_0);
 struct kvmppc_44x_tlbe *VAR_4 = &VAR_3->guest_tlb[VAR_1];
 unsigned int VAR_5 = FUNC_0(VAR_4) - 1;

 return FUNC_1(VAR_4) | (VAR_2 & VAR_5);
}
