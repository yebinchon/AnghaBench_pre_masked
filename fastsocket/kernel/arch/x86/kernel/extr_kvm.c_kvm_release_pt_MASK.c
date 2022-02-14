
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int op; } ;
struct kvm_mmu_op_release_pt {int pt_phys; TYPE_1__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_mmu_op_release_pt*,int) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_2)
{
 struct kvm_mmu_op_release_pt VAR_3 = {
  .header.op = VAR_0,
  .pt_phys = (u64)VAR_2 << VAR_1,
 };

 FUNC_0(&VAR_3, sizeof VAR_3);
}
