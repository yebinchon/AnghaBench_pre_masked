
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pae_root; } ;
struct TYPE_4__ {TYPE_1__ mmu; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;


 int FUNC_0 (unsigned long) ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_0)
{
 FUNC_0((unsigned long)VAR_0->arch.mmu.pae_root);
}
