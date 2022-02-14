
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pending; } ;
struct TYPE_4__ {TYPE_1__ interrupt; } ;
struct kvm_vcpu {int kvm; TYPE_2__ arch; } ;
struct kvm_pic {int output; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 struct kvm_pic* FUNC_3 (int ) ;

int FUNC_4(struct kvm_vcpu *VAR_0)
{
 struct kvm_pic *VAR_1;

 if (!FUNC_0(VAR_0->kvm))
  return VAR_0->arch.interrupt.pending;

 if (FUNC_2(VAR_0) == -1) {
  if (FUNC_1(VAR_0)) {
   VAR_1 = FUNC_3(VAR_0->kvm);
   return VAR_1->output;
  } else
   return 0;
 }
 return 1;
}
