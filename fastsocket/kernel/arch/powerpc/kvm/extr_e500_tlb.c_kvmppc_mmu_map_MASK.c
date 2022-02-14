
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tlbe {int dummy; } ;
struct kvmppc_vcpu_e500 {struct tlbe** guest_tlb; } ;
struct kvm_vcpu {int dummy; } ;
typedef int gpa_t ;
typedef int gfn_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct kvmppc_vcpu_e500*,int ,int,struct tlbe*) ;
 int FUNC_3 (unsigned int) ;
 struct kvmppc_vcpu_e500* FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvmppc_vcpu_e500*,int,int) ;

void FUNC_6(struct kvm_vcpu *VAR_1, u64 VAR_2, gpa_t VAR_3,
   unsigned int VAR_4)
{
 struct kvmppc_vcpu_e500 *VAR_5 = FUNC_4(VAR_1);
 int VAR_6 = FUNC_3(VAR_4);
 int VAR_7 = FUNC_1(VAR_4);
 int VAR_8, VAR_9;

 switch (VAR_6) {
 case 0:
  VAR_8 = 0;
  VAR_9 = VAR_7;
  break;

 case 1: {
  gfn_t VAR_10 = VAR_3 >> VAR_0;
  struct tlbe *VAR_11
   = &VAR_5->guest_tlb[VAR_6][VAR_7];

  VAR_8 = 1;
  VAR_9 = FUNC_2(VAR_5, VAR_2, VAR_10, VAR_11);
  break;
 }

 default:
  FUNC_0();
  break;
 }
 FUNC_5(VAR_5, VAR_8, VAR_9);
}
