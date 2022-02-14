
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int root_hpa; } ;
struct TYPE_6__ {TYPE_1__ mmu; } ;
struct kvm_vcpu {TYPE_3__* kvm; TYPE_2__ arch; } ;
typedef int pfn_t ;
typedef int gva_t ;
typedef int gfn_t ;
struct TYPE_7__ {unsigned long mmu_notifier_seq; int mmu_lock; } ;


 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct kvm_vcpu* FUNC_2 (int ) ;
 int FUNC_3 (struct kvm_vcpu*,int,int,int,int,int ) ;
 int FUNC_4 (TYPE_3__*,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*,int,int ) ;
 int FUNC_7 (struct kvm_vcpu*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct kvm_vcpu*,int) ;
 scalar_t__ FUNC_10 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_11 (struct kvm_vcpu*) ;
 int FUNC_12 () ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct kvm_vcpu *VAR_2, gva_t VAR_3,
    u32 VAR_4)
{
 pfn_t VAR_5;
 int VAR_6;
 int VAR_7;
 gfn_t VAR_8 = VAR_3 >> VAR_0;
 unsigned long VAR_9;

 FUNC_0(VAR_2);
 FUNC_0(FUNC_2(VAR_2->arch.mmu.root_hpa));

 VAR_6 = FUNC_11(VAR_2);
 if (VAR_6)
  return VAR_6;

 VAR_9 = VAR_2->kvm->mmu_notifier_seq;
 FUNC_12();
 VAR_7 = FUNC_9(VAR_2, VAR_8);

 VAR_8 &= ~(FUNC_1(VAR_7) - 1);

 VAR_5 = FUNC_4(VAR_2->kvm, VAR_8);
 if (FUNC_5(VAR_5))
  return FUNC_6(VAR_2->kvm, VAR_8, VAR_5);
 FUNC_13(&VAR_2->kvm->mmu_lock);
 if (FUNC_10(VAR_2, VAR_9))
  goto out_unlock;
 FUNC_7(VAR_2);
 VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_4 & VAR_1,
    VAR_7, VAR_8, VAR_5);
 FUNC_14(&VAR_2->kvm->mmu_lock);

 return VAR_6;

out_unlock:
 FUNC_14(&VAR_2->kvm->mmu_lock);
 FUNC_8(VAR_5);
 return 0;
}
