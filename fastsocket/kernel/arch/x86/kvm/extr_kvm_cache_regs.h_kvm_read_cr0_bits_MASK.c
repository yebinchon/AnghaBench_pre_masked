
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ulong ;
struct TYPE_3__ {int cr0_guest_owned_bits; int cr0; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_4__ {int (* decache_cr0_guest_bits ) (struct kvm_vcpu*) ;} ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static inline ulong FUNC_1(struct kvm_vcpu *VAR_1, ulong VAR_2)
{
 if (VAR_2 & VAR_1->arch.cr0_guest_owned_bits)
  VAR_0->decache_cr0_guest_bits(VAR_1);
 return VAR_1->arch.cr0 & VAR_2;
}
