
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ root_level; scalar_t__ (* sync_page ) (struct kvm_vcpu*,struct kvm_mmu_page*) ;} ;
struct TYPE_6__ {TYPE_2__ mmu; } ;
struct kvm_vcpu {int kvm; TYPE_3__ arch; } ;
struct TYPE_4__ {scalar_t__ glevels; } ;
struct kvm_mmu_page {int gfn; TYPE_1__ role; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int ,struct kvm_mmu_page*) ;
 int FUNC_3 (int ,struct kvm_mmu_page*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (struct kvm_vcpu*,struct kvm_mmu_page*) ;
 int FUNC_6 (struct kvm_mmu_page*) ;

__attribute__((used)) static int FUNC_7(struct kvm_vcpu *VAR_0, struct kvm_mmu_page *VAR_1)
{
 if (VAR_1->role.glevels != VAR_0->arch.mmu.root_level) {
  FUNC_2(VAR_0->kvm, VAR_1);
  return 1;
 }

 FUNC_6(VAR_1);
 if (FUNC_4(VAR_0->kvm, VAR_1->gfn))
  FUNC_0(VAR_0->kvm);
 FUNC_3(VAR_0->kvm, VAR_1);
 if (VAR_0->arch.mmu.sync_page(VAR_0, VAR_1)) {
  FUNC_2(VAR_0->kvm, VAR_1);
  return 1;
 }

 FUNC_1(VAR_0);
 return 0;
}
