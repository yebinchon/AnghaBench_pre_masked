
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tlbe {int dummy; } ;
struct kvmppc_vcpu_e500 {struct tlbe** guest_tlb; } ;
struct kvm_vcpu {int dummy; } ;
typedef int gva_t ;
typedef int gpa_t ;


 size_t FUNC_0 (unsigned int) ;
 int FUNC_1 (struct tlbe*) ;
 int FUNC_2 (struct tlbe*) ;
 size_t FUNC_3 (unsigned int) ;
 struct kvmppc_vcpu_e500* FUNC_4 (struct kvm_vcpu*) ;

gpa_t FUNC_5(struct kvm_vcpu *VAR_0, unsigned int VAR_1,
   gva_t VAR_2)
{
 struct kvmppc_vcpu_e500 *VAR_3 = FUNC_4(VAR_0);
 struct tlbe *VAR_4 =
  &VAR_3->guest_tlb[FUNC_3(VAR_1)][FUNC_0(VAR_1)];
 u64 VAR_5 = FUNC_1(VAR_4) - 1;

 return FUNC_2(VAR_4) | (VAR_2 & VAR_5);
}
