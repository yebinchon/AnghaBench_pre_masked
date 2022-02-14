
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int guest_fpu; } ;
struct kvm_vcpu {int guest_fpu_loaded; TYPE_1__ arch; int fpu_active; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (struct kvm_vcpu*) ;

void FUNC_3(struct kvm_vcpu *VAR_0)
{
 if (!VAR_0->fpu_active || VAR_0->guest_fpu_loaded)
  return;






 FUNC_2(VAR_0);
 VAR_0->guest_fpu_loaded = 1;
 FUNC_1();
 FUNC_0(&VAR_0->arch.guest_fpu);
}
