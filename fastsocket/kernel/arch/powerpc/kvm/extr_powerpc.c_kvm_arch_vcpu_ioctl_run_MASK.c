
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dcr_needed; int dcr_is_write; } ;
struct kvm_vcpu {scalar_t__ sigset_active; TYPE_1__ arch; scalar_t__ mmio_needed; int mmio_is_write; int sigset; } ;
struct kvm_run {int dummy; } ;
typedef int sigset_t ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_run*,struct kvm_vcpu*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct kvm_vcpu*,struct kvm_run*) ;
 int FUNC_4 (struct kvm_vcpu*,struct kvm_run*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int *,int *) ;
 int FUNC_9 (struct kvm_vcpu*) ;
 int FUNC_10 (struct kvm_vcpu*) ;

int FUNC_11(struct kvm_vcpu *VAR_1, struct kvm_run *VAR_2)
{
 int VAR_3;
 sigset_t VAR_4;

 FUNC_9(VAR_1);

 if (VAR_1->sigset_active)
  FUNC_8(VAR_0, &VAR_1->sigset, &VAR_4);

 if (VAR_1->mmio_needed) {
  if (!VAR_1->mmio_is_write)
   FUNC_4(VAR_1, VAR_2);
  VAR_1->mmio_needed = 0;
 } else if (VAR_1->arch.dcr_needed) {
  if (!VAR_1->arch.dcr_is_write)
   FUNC_3(VAR_1, VAR_2);
  VAR_1->arch.dcr_needed = 0;
 }

 FUNC_5(VAR_1);

 FUNC_6();
 FUNC_1();
 VAR_3 = FUNC_0(VAR_2, VAR_1);
 FUNC_2();
 FUNC_7();

 if (VAR_1->sigset_active)
  FUNC_8(VAR_0, &VAR_4, ((void*)0));

 FUNC_10(VAR_1);

 return VAR_3;
}
