
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlbe {int mas1; int mas7; int mas3; int mas2; } ;
struct kvmppc_vcpu_e500 {int* guest_tlb_size; int* shadow_tlb_size; struct tlbe** shadow_tlb; struct tlbe** guest_tlb; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 struct kvmppc_vcpu_e500* FUNC_1 (struct kvm_vcpu*) ;

void FUNC_2(struct kvm_vcpu *VAR_1)
{
 struct kvmppc_vcpu_e500 *VAR_2 = FUNC_1(VAR_1);
 struct tlbe *VAR_3;
 int VAR_4, VAR_5;

 FUNC_0("| %8s | %8s | %8s | %8s | %8s |\n",
   "nr", "mas1", "mas2", "mas3", "mas7");

 for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {
  FUNC_0("Guest TLB%d:\n", VAR_5);
  for (VAR_4 = 0; VAR_4 < VAR_2->guest_tlb_size[VAR_5]; VAR_4++) {
   VAR_3 = &VAR_2->guest_tlb[VAR_5][VAR_4];
   if (VAR_3->mas1 & VAR_0)
    FUNC_0(" G[%d][%3d] |  %08X | %08X | %08X | %08X |\n",
     VAR_5, VAR_4, VAR_3->mas1, VAR_3->mas2,
     VAR_3->mas3, VAR_3->mas7);
  }
 }

 for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {
  FUNC_0("Shadow TLB%d:\n", VAR_5);
  for (VAR_4 = 0; VAR_4 < VAR_2->shadow_tlb_size[VAR_5]; VAR_4++) {
   VAR_3 = &VAR_2->shadow_tlb[VAR_5][VAR_4];
   if (VAR_3->mas1 & VAR_0)
    FUNC_0(" S[%d][%3d] |  %08X | %08X | %08X | %08X |\n",
     VAR_5, VAR_4, VAR_3->mas1, VAR_3->mas2,
     VAR_3->mas3, VAR_3->mas7);
  }
 }
}
