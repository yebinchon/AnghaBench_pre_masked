
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int** rsvd_bits_mask; } ;
struct TYPE_4__ {TYPE_1__ mmu; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;



__attribute__((used)) static bool FUNC_0(struct kvm_vcpu *VAR_0, u64 VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_3 = (VAR_1 >> 7) & 1;
 return (VAR_1 & VAR_0->arch.mmu.rsvd_bits_mask[VAR_3][VAR_2-1]) != 0;
}
