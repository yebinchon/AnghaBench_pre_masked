
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvmppc_vcpu_e500 {int* guest_tlb_size; } ;
struct TYPE_2__ {int* gpr; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef int gva_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvmppc_vcpu_e500*,int,int) ;
 int FUNC_3 (struct kvmppc_vcpu_e500*,int,int,int ,int) ;
 struct kvmppc_vcpu_e500* FUNC_4 (struct kvm_vcpu*) ;

int FUNC_5(struct kvm_vcpu *VAR_1, int VAR_2, int VAR_3)
{
 struct kvmppc_vcpu_e500 *VAR_4 = FUNC_4(VAR_1);
 unsigned int VAR_5;
 int VAR_6, VAR_7;
 gva_t VAR_8;

 VAR_8 = ((VAR_2) ? VAR_1->arch.gpr[VAR_2] : 0) + VAR_1->arch.gpr[VAR_3];

 VAR_5 = (VAR_8 >> 2) & 0x1;


 VAR_7 = (VAR_8 >> 3) & 0x1;

 if (VAR_5) {

  for (VAR_6 = 0; VAR_6 < VAR_4->guest_tlb_size[VAR_7]; VAR_6++)
   FUNC_2(VAR_4, VAR_7, VAR_6);
 } else {
  VAR_8 &= 0xfffff000;
  VAR_6 = FUNC_3(VAR_4, VAR_8, VAR_7,
    FUNC_1(VAR_1), -1);
  if (VAR_6 >= 0)
   FUNC_2(VAR_4, VAR_7, VAR_6);
 }

 FUNC_0();

 return VAR_0;
}
