
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_pv_mmu_op_buffer {int dummy; } ;
struct kvm_mmu_op_write_pte {int pte_val; int pte_phys; } ;
struct kvm_mmu_op_release_pt {int pt_phys; } ;
struct kvm_mmu_op_header {int op; } ;
struct kvm_mmu_op_flush_tlb {int dummy; } ;





 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 int FUNC_2 (struct kvm_vcpu*,int ,int ) ;
 struct kvm_mmu_op_header* FUNC_3 (struct kvm_pv_mmu_op_buffer*,int) ;
 void* FUNC_4 (struct kvm_pv_mmu_op_buffer*,int) ;

__attribute__((used)) static int FUNC_5(struct kvm_vcpu *VAR_0,
        struct kvm_pv_mmu_op_buffer *VAR_1)
{
 struct kvm_mmu_op_header *VAR_2;

 VAR_2 = FUNC_3(VAR_1, sizeof *VAR_2);
 if (!VAR_2)
  return 0;
 switch (VAR_2->op) {
 case 128: {
  struct kvm_mmu_op_write_pte *VAR_3;

  VAR_3 = FUNC_4(VAR_1, sizeof *VAR_3);
  if (!VAR_3)
   return 0;
  return FUNC_2(VAR_0, VAR_3->pte_phys,
     VAR_3->pte_val);
 }
 case 130: {
  struct kvm_mmu_op_flush_tlb *VAR_4;

  VAR_4 = FUNC_4(VAR_1, sizeof *VAR_4);
  if (!VAR_4)
   return 0;
  return FUNC_0(VAR_0);
 }
 case 129: {
  struct kvm_mmu_op_release_pt *VAR_5;

  VAR_5 = FUNC_4(VAR_1, sizeof *VAR_5);
  if (!VAR_5)
   return 0;
  return FUNC_1(VAR_0, VAR_5->pt_phys);
 }
 default: return 0;
 }
}
