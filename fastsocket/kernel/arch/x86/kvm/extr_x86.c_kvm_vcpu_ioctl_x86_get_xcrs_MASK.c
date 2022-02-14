
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_xcrs {int nr_xcrs; TYPE_2__* xcrs; scalar_t__ flags; } ;
struct TYPE_3__ {int xcr0; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_4__ {int value; int xcr; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct kvm_vcpu *VAR_2,
     struct kvm_xcrs *VAR_3)
{
 if (!VAR_1) {
  VAR_3->nr_xcrs = 0;
  return;
 }

 VAR_3->nr_xcrs = 1;
 VAR_3->flags = 0;
 VAR_3->xcrs[0].xcr = VAR_0;
 VAR_3->xcrs[0].value = VAR_2->arch.xcr0;
}
