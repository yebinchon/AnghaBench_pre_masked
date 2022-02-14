
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vcpu_e500 {int * guest_tlb; int * shadow_tlb; int * shadow_pages; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct kvmppc_vcpu_e500 *VAR_0)
{
 FUNC_0(VAR_0->shadow_pages[1]);
 FUNC_0(VAR_0->shadow_pages[0]);
 FUNC_0(VAR_0->shadow_tlb[1]);
 FUNC_0(VAR_0->guest_tlb[1]);
 FUNC_0(VAR_0->shadow_tlb[0]);
 FUNC_0(VAR_0->guest_tlb[0]);
}
