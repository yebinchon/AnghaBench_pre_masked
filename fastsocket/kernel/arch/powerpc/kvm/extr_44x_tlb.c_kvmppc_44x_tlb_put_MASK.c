
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vcpu_44x {scalar_t__* shadow_tlb_mod; struct kvmppc_44x_tlbe* shadow_tlb; } ;
struct kvmppc_44x_tlbe {int dummy; } ;
struct kvm_vcpu {int dummy; } ;


 scalar_t__ FUNC_0 (struct kvmppc_44x_tlbe*) ;
 scalar_t__ FUNC_1 (struct kvmppc_44x_tlbe*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,struct kvmppc_44x_tlbe*) ;
 int VAR_0 ;
 struct kvmppc_vcpu_44x* FUNC_4 (struct kvm_vcpu*) ;

void FUNC_5(struct kvm_vcpu *VAR_1)
{
 struct kvmppc_vcpu_44x *VAR_2 = FUNC_4(VAR_1);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 <= VAR_0; VAR_3++) {
  struct kvmppc_44x_tlbe *VAR_4 = &VAR_2->shadow_tlb[VAR_3];

  if (VAR_2->shadow_tlb_mod[VAR_3])
   FUNC_3(VAR_3, VAR_4);

  if (FUNC_1(VAR_4) && FUNC_0(VAR_4))
   FUNC_2(VAR_3);
 }
}
