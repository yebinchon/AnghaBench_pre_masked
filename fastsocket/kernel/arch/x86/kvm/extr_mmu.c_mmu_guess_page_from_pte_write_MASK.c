
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_5__ {int gfn; int pfn; int mmu_seq; } ;
struct TYPE_6__ {TYPE_1__ update_pte; } ;
struct kvm_vcpu {TYPE_2__ arch; TYPE_3__* kvm; } ;
typedef int pfn_t ;
typedef int gpa_t ;
typedef int gfn_t ;
struct TYPE_7__ {int mmu_notifier_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_3__*,int,int*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (void*,int const*,int) ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(struct kvm_vcpu *VAR_2, gpa_t VAR_3,
       const u8 *VAR_4, int VAR_5)
{
 gfn_t VAR_6;
 int VAR_7;
 u64 VAR_8 = 0;
 pfn_t VAR_9;

 if (VAR_5 != 4 && VAR_5 != 8)
  return;







 if (FUNC_2(VAR_2)) {

  if ((VAR_5 == 4) && (VAR_3 % 4 == 0)) {
   VAR_7 = FUNC_4(VAR_2->kvm, VAR_3 & ~(u64)7, &VAR_8, 8);
   if (VAR_7)
    return;
   FUNC_6((void *)&VAR_8 + (VAR_3 % 8), VAR_4, 4);
  } else if ((VAR_5 == 8) && (VAR_3 % 8 == 0)) {
   FUNC_6((void *)&VAR_8, VAR_4, 8);
  }
 } else {
  if ((VAR_5 == 4) && (VAR_3 % 4 == 0))
   FUNC_6((void *)&VAR_8, VAR_4, 4);
 }
 if (!FUNC_3(VAR_8))
  return;
 VAR_6 = (VAR_8 & VAR_1) >> VAR_0;

 VAR_2->arch.update_pte.mmu_seq = VAR_2->kvm->mmu_notifier_seq;
 FUNC_7();
 VAR_9 = FUNC_0(VAR_2->kvm, VAR_6);

 if (FUNC_1(VAR_9)) {
  FUNC_5(VAR_9);
  return;
 }
 VAR_2->arch.update_pte.gfn = VAR_6;
 VAR_2->arch.update_pte.pfn = VAR_9;
}
