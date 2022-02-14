
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int kvm; } ;
struct TYPE_2__ {scalar_t__ level; } ;
struct kvm_mmu_page {scalar_t__ unsync; TYPE_1__ role; } ;
typedef int gfn_t ;


 scalar_t__ VAR_0 ;
 struct kvm_mmu_page* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct kvm_vcpu*,struct kvm_mmu_page*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_2, gfn_t VAR_3,
      bool VAR_4)
{
 struct kvm_mmu_page *VAR_5;

 VAR_5 = FUNC_0(VAR_2->kvm, VAR_3);
 if (VAR_5) {
  if (VAR_5->role.level != VAR_0)
   return 1;
  if (VAR_5->unsync)
   return 0;
  if (VAR_4 && VAR_1)
   return FUNC_1(VAR_2, VAR_5);
  return 1;
 }
 return 0;
}
