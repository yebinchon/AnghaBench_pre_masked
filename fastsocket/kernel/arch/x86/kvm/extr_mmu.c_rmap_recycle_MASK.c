
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct kvm_vcpu {int kvm; } ;
struct TYPE_2__ {int level; } ;
struct kvm_mmu_page {TYPE_1__ role; } ;
typedef int gfn_t ;


 int FUNC_0 (int *) ;
 unsigned long* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned long*,int ) ;
 struct kvm_mmu_page* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct kvm_vcpu *VAR_0, u64 *VAR_1, gfn_t VAR_2)
{
 unsigned long *VAR_3;
 struct kvm_mmu_page *VAR_4;

 VAR_4 = FUNC_4(FUNC_0(VAR_1));

 VAR_2 = FUNC_5(VAR_0->kvm, VAR_2);
 VAR_3 = FUNC_1(VAR_0->kvm, VAR_2, VAR_4->role.level);

 FUNC_3(VAR_0->kvm, VAR_3, 0);
 FUNC_2(VAR_0->kvm);
}
