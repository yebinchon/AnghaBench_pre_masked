
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ mp_state; } ;
struct kvm_vcpu {int mmio_read_completed; scalar_t__ sigset_active; scalar_t__ mmio_needed; int mmio_data; int requests; TYPE_1__ arch; int sigset; } ;
struct TYPE_4__ {int data; } ;
struct kvm_run {TYPE_2__ mmio; } ;
typedef int sigset_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kvm_vcpu*,struct kvm_run*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int *,int *) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct kvm_vcpu*) ;
 int FUNC_8 (struct kvm_vcpu*) ;

int FUNC_9(struct kvm_vcpu *VAR_4, struct kvm_run *VAR_5)
{
 int VAR_6;
 sigset_t VAR_7;

 FUNC_7(VAR_4);

 if (VAR_4->sigset_active)
  FUNC_5(VAR_3, &VAR_4->sigset, &VAR_7);

 if (FUNC_6(VAR_4->arch.mp_state == VAR_1)) {
  FUNC_3(VAR_4);
  FUNC_1(VAR_2, &VAR_4->requests);
  VAR_6 = -VAR_0;
  goto out;
 }

 if (VAR_4->mmio_needed) {
  FUNC_4(VAR_4->mmio_data, VAR_5->mmio.data, 8);
  FUNC_2(VAR_4);
  VAR_4->mmio_read_completed = 1;
  VAR_4->mmio_needed = 0;
 }
 VAR_6 = FUNC_0(VAR_4, VAR_5);
out:
 if (VAR_4->sigset_active)
  FUNC_5(VAR_3, &VAR_7, ((void*)0));

 FUNC_8(VAR_4);
 return VAR_6;
}
