
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nr; } ;
struct TYPE_4__ {TYPE_1__ interrupt; } ;
struct kvm_vcpu {int kvm; TYPE_2__ arch; } ;
struct kvm_pic {scalar_t__ output; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (int ) ;
 struct kvm_pic* FUNC_4 (int ) ;

int FUNC_5(struct kvm_vcpu *VAR_0)
{
 struct kvm_pic *VAR_1;
 int VAR_2;

 if (!FUNC_0(VAR_0->kvm))
  return VAR_0->arch.interrupt.nr;

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2 == -1) {
  if (FUNC_1(VAR_0)) {
   VAR_1 = FUNC_4(VAR_0->kvm);
   VAR_1->output = 0;
   VAR_2 = FUNC_3(VAR_0->kvm);
  }
 }
 return VAR_2;
}
