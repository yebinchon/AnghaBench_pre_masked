
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int** rsvd_bits_mask; } ;
struct TYPE_4__ {int* pdptrs; int regs_dirty; int regs_avail; TYPE_1__ mmu; } ;
struct kvm_vcpu {TYPE_2__ arch; int kvm; } ;
typedef int pdpte ;
typedef unsigned long gfn_t ;


 int FUNC_0 (int*) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,unsigned long*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,unsigned long,int*,unsigned int,int) ;
 int FUNC_4 (int*,int*,int) ;

int FUNC_5(struct kvm_vcpu *VAR_3, unsigned long VAR_4)
{
 gfn_t VAR_5 = VAR_4 >> VAR_0;
 unsigned VAR_6 = ((VAR_4 & (VAR_1-1)) >> 5) << 2;
 int VAR_7;
 int VAR_8;
 u64 VAR_9[FUNC_0(VAR_3->arch.pdptrs)];

 VAR_8 = FUNC_3(VAR_3->kvm, VAR_5, VAR_9,
      VAR_6 * sizeof(u64), sizeof(VAR_9));
 if (VAR_8 < 0) {
  VAR_8 = 0;
  goto out;
 }
 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_9); ++VAR_7) {
  if (FUNC_2(VAR_9[VAR_7]) &&
      (VAR_9[VAR_7] & VAR_3->arch.mmu.rsvd_bits_mask[0][2])) {
   VAR_8 = 0;
   goto out;
  }
 }
 VAR_8 = 1;

 FUNC_4(VAR_3->arch.pdptrs, VAR_9, sizeof(VAR_3->arch.pdptrs));
 FUNC_1(VAR_2,
    (unsigned long *)&VAR_3->arch.regs_avail);
 FUNC_1(VAR_2,
    (unsigned long *)&VAR_3->arch.regs_dirty);
out:

 return VAR_8;
}
