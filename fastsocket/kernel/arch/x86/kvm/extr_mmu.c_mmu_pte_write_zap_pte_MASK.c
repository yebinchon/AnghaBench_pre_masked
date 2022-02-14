
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct kvm_vcpu {TYPE_3__* kvm; } ;
struct TYPE_4__ {int level; } ;
struct kvm_mmu_page {TYPE_1__ role; } ;
struct TYPE_5__ {int lpages; } ;
struct TYPE_6__ {TYPE_2__ stat; } ;


 int VAR_0 ;
 int FUNC_0 (int*,int ) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct kvm_mmu_page*,int*) ;
 struct kvm_mmu_page* FUNC_5 (int) ;
 int FUNC_6 (TYPE_3__*,int*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_7(struct kvm_vcpu *VAR_2,
      struct kvm_mmu_page *VAR_3,
      u64 *VAR_4)
{
 u64 VAR_5;
 struct kvm_mmu_page *VAR_6;

 VAR_5 = *VAR_4;
 if (FUNC_3(VAR_5)) {
  if (FUNC_2(VAR_5, VAR_3->role.level))
   FUNC_6(VAR_2->kvm, VAR_4);
  else {
   VAR_6 = FUNC_5(VAR_5 & VAR_0);
   FUNC_4(VAR_6, VAR_4);
  }
 }
 FUNC_0(VAR_4, VAR_1);
 if (FUNC_1(VAR_5))
  --VAR_2->kvm->stat.lpages;
}
