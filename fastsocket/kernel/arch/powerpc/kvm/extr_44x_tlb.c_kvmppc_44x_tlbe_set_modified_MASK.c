
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vcpu_44x {int* shadow_tlb_mod; } ;



__attribute__((used)) static void FUNC_0(struct kvmppc_vcpu_44x *VAR_0,
                                         unsigned int VAR_1)
{
 VAR_0->shadow_tlb_mod[VAR_1] = 1;
}
