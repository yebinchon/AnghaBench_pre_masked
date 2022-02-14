
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ cur_count; } ;
struct TYPE_8__ {scalar_t__ mp_state; int mmio_fault_cr2; TYPE_1__ pio; } ;
struct kvm_vcpu {int mmio_read_completed; scalar_t__ sigset_active; void* srcu_idx; TYPE_5__* kvm; TYPE_3__ arch; scalar_t__ mmio_needed; int mmio_data; int requests; int sigset; } ;
struct TYPE_9__ {int ret; } ;
struct TYPE_7__ {int data; } ;
struct kvm_run {scalar_t__ exit_reason; TYPE_4__ hypercall; TYPE_2__ mmio; int cr8; } ;
typedef int sigset_t ;
struct TYPE_10__ {int srcu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (struct kvm_vcpu*,int ,int ) ;
 scalar_t__ FUNC_5 (struct kvm_vcpu*,int ) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (struct kvm_vcpu*) ;
 int FUNC_9 (int ,int *,int *) ;
 void* FUNC_10 (int *) ;
 int FUNC_11 (int *,void*) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (struct kvm_vcpu*) ;
 int FUNC_14 (struct kvm_vcpu*) ;
 int FUNC_15 (struct kvm_vcpu*,int ,int ,int *,int ) ;

int FUNC_16(struct kvm_vcpu *VAR_9, struct kvm_run *VAR_10)
{
 int VAR_11;
 sigset_t VAR_12;

 FUNC_13(VAR_9);

 if (VAR_9->sigset_active)
  FUNC_9(VAR_7, &VAR_9->sigset, &VAR_12);

 if (FUNC_12(VAR_9->arch.mp_state == VAR_5)) {
  FUNC_6(VAR_9);
  FUNC_1(VAR_6, &VAR_9->requests);
  VAR_11 = -VAR_0;
  goto out;
 }


 if (!FUNC_3(VAR_9->kvm)) {
  if (FUNC_5(VAR_9, VAR_10->cr8) != 0) {
   VAR_11 = -VAR_1;
   goto out;
  }
 }

 if (VAR_9->arch.pio.cur_count) {
  VAR_9->srcu_idx = FUNC_10(&VAR_9->kvm->srcu);
  VAR_11 = FUNC_2(VAR_9);
  FUNC_11(&VAR_9->kvm->srcu, VAR_9->srcu_idx);
  if (VAR_11)
   goto out;
 }
 if (VAR_10->exit_reason == VAR_4)
  FUNC_4(VAR_9, VAR_8,
         VAR_10->hypercall.ret);

 VAR_11 = FUNC_0(VAR_9);

out:
 FUNC_8(VAR_9);
 if (VAR_9->sigset_active)
  FUNC_9(VAR_7, &VAR_12, ((void*)0));

 FUNC_14(VAR_9);
 return VAR_11;
}
