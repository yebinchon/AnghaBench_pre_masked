
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlbe {int dummy; } ;
struct kvmppc_vcpu_e500 {struct tlbe** shadow_tlb; } ;
struct kvm_vcpu {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct tlbe*) ;
 scalar_t__ FUNC_3 (struct tlbe*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 unsigned int FUNC_6 (int ) ;
 int FUNC_7 (int ,unsigned int) ;
 int FUNC_8 () ;
 struct kvmppc_vcpu_e500* FUNC_9 (struct kvm_vcpu*) ;
 int FUNC_10 (int) ;

void FUNC_11(struct kvm_vcpu *VAR_1, int VAR_2)
{
 struct kvmppc_vcpu_e500 *VAR_3 = FUNC_9(VAR_1);
 int VAR_4;
 unsigned register VAR_5;


 FUNC_4();
 VAR_5 = FUNC_6(VAR_0);
 for (VAR_4 = 0; VAR_4 < FUNC_8(); VAR_4++) {
  struct tlbe *VAR_6 = &VAR_3->shadow_tlb[1][VAR_4];

  if (FUNC_3(VAR_6)) {
   FUNC_7(VAR_0, FUNC_1(1)
     | FUNC_0(FUNC_10(VAR_4)));
   FUNC_2(VAR_6);
  }
 }
 FUNC_7(VAR_0, VAR_5);
 FUNC_5();
}
