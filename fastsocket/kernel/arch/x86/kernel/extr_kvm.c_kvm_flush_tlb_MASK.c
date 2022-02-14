
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int op; } ;
struct kvm_mmu_op_flush_tlb {TYPE_1__ header; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_mmu_op_flush_tlb*,int) ;

__attribute__((used)) static void FUNC_1(void)
{
 struct kvm_mmu_op_flush_tlb VAR_1 = {
  .header.op = VAR_0,
 };

 FUNC_0(&VAR_1, sizeof VAR_1);
}
