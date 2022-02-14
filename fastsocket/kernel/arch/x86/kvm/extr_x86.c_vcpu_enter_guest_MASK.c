
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int nmi_pending; int switch_db_regs; scalar_t__ apic_attention; int last_guest_tsc; int * eff_db; } ;
struct TYPE_11__ {int exits; } ;
struct kvm_vcpu {TYPE_4__ arch; TYPE_7__* kvm; int srcu_idx; TYPE_3__ stat; scalar_t__ requests; int vcpu_id; scalar_t__ fpu_active; TYPE_1__* run; } ;
struct TYPE_15__ {int srcu; } ;
struct TYPE_14__ {int (* handle_exit ) (struct kvm_vcpu*) ;int (* run ) (struct kvm_vcpu*) ;int (* enable_irq_window ) (struct kvm_vcpu*) ;int (* enable_nmi_window ) (struct kvm_vcpu*) ;int (* prepare_guest_switch ) (struct kvm_vcpu*) ;int (* fpu_deactivate ) (struct kvm_vcpu*) ;int (* tlb_flush ) (struct kvm_vcpu*) ;} ;
struct TYPE_10__ {int debugreg7; int debugreg6; int debugreg3; int debugreg2; int debugreg1; int debugreg0; } ;
struct TYPE_13__ {TYPE_2__ thread; } ;
struct TYPE_9__ {int exit_reason; scalar_t__ request_interrupt_window; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,scalar_t__*) ;
 TYPE_5__* VAR_18 ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (TYPE_7__*) ;
 scalar_t__ FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (struct kvm_vcpu*) ;
 int FUNC_8 (struct kvm_vcpu*,int ,int *) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (struct kvm_vcpu*) ;
 int FUNC_12 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_13 (struct kvm_vcpu*) ;
 int FUNC_14 (struct kvm_vcpu*) ;
 int FUNC_15 (struct kvm_vcpu*) ;
 int FUNC_16 (struct kvm_vcpu*) ;
 int FUNC_17 (struct kvm_vcpu*) ;
 int FUNC_18 (struct kvm_vcpu*) ;
 int FUNC_19 (struct kvm_vcpu*) ;
 int FUNC_20 (struct kvm_vcpu*) ;
 unsigned long FUNC_21 (struct kvm_vcpu*) ;
 TYPE_6__* VAR_19 ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 scalar_t__ FUNC_24 () ;
 int FUNC_25 () ;
 int FUNC_26 () ;
 scalar_t__ VAR_20 ;
 int FUNC_27 (scalar_t__,void*) ;
 int FUNC_28 (struct kvm_vcpu*) ;
 int FUNC_29 (int ,scalar_t__*) ;
 int FUNC_30 (int ,int) ;
 scalar_t__ FUNC_31 (TYPE_5__*) ;
 int FUNC_32 () ;
 int FUNC_33 () ;
 int FUNC_34 (int *) ;
 int FUNC_35 (int *,int ) ;
 int FUNC_36 (struct kvm_vcpu*) ;
 int FUNC_37 (struct kvm_vcpu*) ;
 int FUNC_38 (struct kvm_vcpu*) ;
 int FUNC_39 (struct kvm_vcpu*) ;
 int FUNC_40 (struct kvm_vcpu*) ;
 int FUNC_41 (struct kvm_vcpu*) ;
 int FUNC_42 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_43 (int ,scalar_t__*) ;
 scalar_t__ FUNC_44 (int ) ;
 int FUNC_45 (int ) ;
 scalar_t__ FUNC_46 (int) ;
 int FUNC_47 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_48(struct kvm_vcpu *VAR_21)
{
 int VAR_22;
 bool VAR_23;
 bool VAR_24 = !FUNC_4(VAR_21->kvm) &&
  VAR_21->run->request_interrupt_window;

 if (VAR_21->requests)
  if (FUNC_43(VAR_8, &VAR_21->requests))
   FUNC_20(VAR_21);

 VAR_22 = FUNC_18(VAR_21);
 if (FUNC_46(VAR_22))
  goto out;

 if (VAR_21->requests) {
  if (FUNC_43(VAR_7, &VAR_21->requests))
   FUNC_0(VAR_21);
  if (FUNC_43(VAR_5,
      &VAR_21->requests))
   FUNC_7(VAR_21);
  if (FUNC_43(VAR_3, &VAR_21->requests)) {
   VAR_22 = FUNC_11(VAR_21);
   if (FUNC_46(VAR_22))
    goto out;
  }
  if (FUNC_43(VAR_9, &VAR_21->requests))
   FUNC_19(VAR_21);
  if (FUNC_43(VAR_14, &VAR_21->requests))
   VAR_19->tlb_flush(VAR_21);
  if (FUNC_43(VAR_12,
           &VAR_21->requests)) {
   VAR_21->run->exit_reason = VAR_1;
   VAR_22 = 0;
   goto out;
  }
  if (FUNC_43(VAR_15, &VAR_21->requests)) {
   VAR_21->run->exit_reason = VAR_0;
   VAR_22 = 0;
   goto out;
  }
  if (FUNC_43(VAR_4, &VAR_21->requests)) {
   VAR_21->fpu_active = 0;
   VAR_19->fpu_deactivate(VAR_21);
  }
  if (FUNC_43(VAR_11, &VAR_21->requests))
   FUNC_12(VAR_21);
  if (FUNC_43(VAR_10, &VAR_21->requests))
   FUNC_6(VAR_21);
  if (FUNC_43(VAR_13, &VAR_21->requests))
   FUNC_28(VAR_21);
 }

 FUNC_25();

 VAR_19->prepare_guest_switch(VAR_21);
 FUNC_16(VAR_21);
 FUNC_17(VAR_21);

 FUNC_22();

 FUNC_2(VAR_6, &VAR_21->requests);
 FUNC_33();

 if (VAR_21->requests || FUNC_24() || FUNC_31(VAR_18)) {
  FUNC_29(VAR_6, &VAR_21->requests);
  FUNC_23();
  FUNC_26();
  VAR_22 = 1;
  goto out;
 }







 VAR_23 = VAR_21->arch.nmi_pending;
 FUNC_32();

 FUNC_3(VAR_21);


 if (VAR_23)
  VAR_19->enable_nmi_window(VAR_21);
 else if (FUNC_5(VAR_21) || VAR_24)
  VAR_19->enable_irq_window(VAR_21);

 if (FUNC_13(VAR_21)) {
  FUNC_47(VAR_21);
  FUNC_15(VAR_21);
 }

 FUNC_35(&VAR_21->kvm->srcu, VAR_21->srcu_idx);

 FUNC_9();

 if (FUNC_46(VAR_21->arch.switch_db_regs)) {
  FUNC_30(0, 7);
  FUNC_30(VAR_21->arch.eff_db[0], 0);
  FUNC_30(VAR_21->arch.eff_db[1], 1);
  FUNC_30(VAR_21->arch.eff_db[2], 2);
  FUNC_30(VAR_21->arch.eff_db[3], 3);
 }

 FUNC_45(VAR_21->vcpu_id);
 VAR_19->run(VAR_21);

 if (FUNC_46(VAR_21->arch.switch_db_regs || FUNC_44(VAR_17))) {
  FUNC_30(VAR_18->thread.debugreg0, 0);
  FUNC_30(VAR_18->thread.debugreg1, 1);
  FUNC_30(VAR_18->thread.debugreg2, 2);
  FUNC_30(VAR_18->thread.debugreg3, 3);
  FUNC_30(VAR_18->thread.debugreg6, 6);
  FUNC_30(VAR_18->thread.debugreg7, 7);
 }

 FUNC_8(VAR_21, VAR_16, &VAR_21->arch.last_guest_tsc);
 FUNC_29(VAR_6, &VAR_21->requests);
 FUNC_23();

 ++VAR_21->stat.exits;







 FUNC_1();

 FUNC_10();

 FUNC_26();

 VAR_21->srcu_idx = FUNC_34(&VAR_21->kvm->srcu);




 if (FUNC_46(VAR_20 == VAR_2)) {
  unsigned long VAR_25 = FUNC_21(VAR_21);
  FUNC_27(VAR_2, (void *)VAR_25);
 }

 if (VAR_21->arch.apic_attention)
  FUNC_14(VAR_21);

 VAR_22 = VAR_19->handle_exit(VAR_21);
out:
 return VAR_22;
}
