
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vcpu_e500 {int* guest_tlb_size; } ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct kvmppc_vcpu_e500*,int,int) ;
 struct kvmppc_vcpu_e500* FUNC_2 (struct kvm_vcpu*) ;

void FUNC_3(struct kvm_vcpu *VAR_0)
{
 struct kvmppc_vcpu_e500 *VAR_1 = FUNC_2(VAR_0);
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < 2; VAR_2++)
  for (VAR_3 = 0; VAR_3 < VAR_1->guest_tlb_size[VAR_2]; VAR_3++)
   FUNC_1(VAR_1, VAR_2, VAR_3);


 FUNC_0();
}
