
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vcpu_44x {struct kvmppc_44x_tlbe* guest_tlb; } ;
struct kvmppc_44x_tlbe {int dummy; } ;
struct kvm_vcpu {int dummy; } ;
typedef scalar_t__ gva_t ;


 int FUNC_0 (struct kvmppc_44x_tlbe*) ;
 scalar_t__ FUNC_1 (struct kvmppc_44x_tlbe*) ;
 scalar_t__ FUNC_2 (struct kvmppc_44x_tlbe*) ;
 unsigned int FUNC_3 (struct kvmppc_44x_tlbe*) ;
 unsigned int FUNC_4 (struct kvmppc_44x_tlbe*) ;
 int FUNC_5 (struct kvmppc_44x_tlbe*) ;
 struct kvmppc_vcpu_44x* FUNC_6 (struct kvm_vcpu*) ;

int FUNC_7(struct kvm_vcpu *VAR_0, gva_t VAR_1, unsigned int VAR_2,
                         unsigned int VAR_3)
{
 struct kvmppc_vcpu_44x *VAR_4 = FUNC_6(VAR_0);
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4->guest_tlb); VAR_5++) {
  struct kvmppc_44x_tlbe *VAR_6 = &VAR_4->guest_tlb[VAR_5];
  unsigned int VAR_7;

  if (VAR_1 < FUNC_1(VAR_6))
   continue;

  if (VAR_1 > FUNC_2(VAR_6))
   continue;

  VAR_7 = FUNC_3(VAR_6);
  if (VAR_7 && (VAR_7 != VAR_2))
   continue;

  if (!FUNC_5(VAR_6))
   continue;

  if (FUNC_4(VAR_6) != VAR_3)
   continue;

  return VAR_5;
 }

 return -1;
}
