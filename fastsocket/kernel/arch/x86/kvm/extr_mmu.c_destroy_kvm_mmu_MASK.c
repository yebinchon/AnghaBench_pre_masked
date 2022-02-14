
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int root_hpa; int (* free ) (struct kvm_vcpu*) ;} ;
struct TYPE_4__ {TYPE_1__ mmu; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;


 int FUNC_0 (struct kvm_vcpu*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_1)
{
 FUNC_0(VAR_1);
 if (FUNC_1(VAR_1->arch.mmu.root_hpa)) {
  VAR_1->arch.mmu.free(VAR_1);
  VAR_1->arch.mmu.root_hpa = VAR_0;
 }
}
