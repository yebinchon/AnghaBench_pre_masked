
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_vcpu {TYPE_1__* kvm; } ;
typedef int pfn_t ;
typedef int gva_t ;
typedef int gfn_t ;
struct TYPE_3__ {unsigned long mmu_notifier_seq; int mmu_lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct kvm_vcpu*,int ,int,int,int,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int,int ) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct kvm_vcpu*,int) ;
 scalar_t__ FUNC_8 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct kvm_vcpu *VAR_1, gva_t VAR_2, int VAR_3, gfn_t VAR_4)
{
 int VAR_5;
 int VAR_6;
 pfn_t VAR_7;
 unsigned long VAR_8;

 VAR_8 = VAR_1->kvm->mmu_notifier_seq;
 FUNC_9();
 VAR_6 = FUNC_7(VAR_1, VAR_4);





 if (VAR_6 > VAR_0)
  VAR_6 = VAR_0;

 VAR_4 &= ~(FUNC_0(VAR_6) - 1);

 VAR_7 = FUNC_2(VAR_1->kvm, VAR_4);


 if (FUNC_3(VAR_7))
  return FUNC_4(VAR_1->kvm, VAR_4, VAR_7);

 FUNC_10(&VAR_1->kvm->mmu_lock);
 if (FUNC_8(VAR_1, VAR_8))
  goto out_unlock;
 FUNC_5(VAR_1);
 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_6, VAR_4, VAR_7);
 FUNC_11(&VAR_1->kvm->mmu_lock);


 return VAR_5;

out_unlock:
 FUNC_11(&VAR_1->kvm->mmu_lock);
 FUNC_6(VAR_7);
 return 0;
}
