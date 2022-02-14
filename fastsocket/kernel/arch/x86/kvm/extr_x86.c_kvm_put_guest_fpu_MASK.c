
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int fpu_reload; } ;
struct TYPE_3__ {int guest_fpu; } ;
struct kvm_vcpu {int requests; TYPE_2__ stat; TYPE_1__ arch; scalar_t__ guest_fpu_loaded; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(struct kvm_vcpu *VAR_1)
{
 FUNC_2(VAR_1);

 if (!VAR_1->guest_fpu_loaded)
  return;

 VAR_1->guest_fpu_loaded = 0;
 FUNC_0(&VAR_1->arch.guest_fpu);
 FUNC_1();
 ++VAR_1->stat.fpu_reload;
 FUNC_3(VAR_0, &VAR_1->requests);
}
