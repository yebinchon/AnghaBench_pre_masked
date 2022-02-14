
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {int int_ctl; int event_inj; int event_inj_err; scalar_t__ tsc_offset; int int_state; int int_vector; int exit_int_info; int exit_int_info_err; int intercept; int intercept_exceptions; int intercept_dr_write; int intercept_dr_read; int intercept_cr_write; int intercept_cr_read; int msrpm_base_pa; } ;
struct TYPE_15__ {int rflags; int cpl; int dr6; int dr7; int rip; int rsp; int rax; int cr2; int cr3; int cr4; int cr0; int efer; int idtr; int gdtr; int ds; int ss; int cs; int es; } ;
struct vmcb {TYPE_4__ control; TYPE_1__ save; } ;
struct TYPE_17__ {int hflags; int cr2; int cr3; int cr4; int shadow_efer; } ;
struct TYPE_19__ {TYPE_3__ arch; } ;
struct TYPE_16__ {int intercept; int intercept_exceptions; int intercept_dr_write; int intercept_dr_read; int intercept_cr_write; int intercept_cr_read; int vmcb_msrpm; int vmcb; struct vmcb* hsave; } ;
struct vcpu_svm {struct vmcb* vmcb; TYPE_5__ vcpu; TYPE_2__ nested; int next_rip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct vmcb*,struct vmcb*) ;
 int FUNC_1 (struct vcpu_svm*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*,int ,int ) ;
 int FUNC_7 (TYPE_5__*,int ) ;
 int FUNC_8 (struct vmcb*) ;
 int FUNC_9 (struct vmcb*,int ) ;
 struct vmcb* FUNC_10 (struct vcpu_svm*,int ,int ) ;
 int FUNC_11 (struct vmcb*,int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_12 (char*,int,...) ;
 int FUNC_13 (TYPE_5__*) ;
 int FUNC_14 (TYPE_5__*,int ) ;
 int FUNC_15 (TYPE_5__*,int ) ;
 int FUNC_16 (TYPE_5__*,int ) ;

__attribute__((used)) static bool FUNC_17(struct vcpu_svm *VAR_12)
{
 struct vmcb *VAR_13;
 struct vmcb *VAR_14 = VAR_12->nested.hsave;
 struct vmcb *VAR_15 = VAR_12->vmcb;

 VAR_13 = FUNC_10(VAR_12, VAR_12->vmcb->save.rax, VAR_2);
 if (!VAR_13)
  return 0;


 VAR_12->nested.vmcb = VAR_12->vmcb->save.rax;


 FUNC_2(&VAR_12->vcpu);
 FUNC_3(&VAR_12->vcpu);



 VAR_14->save.es = VAR_15->save.es;
 VAR_14->save.cs = VAR_15->save.cs;
 VAR_14->save.ss = VAR_15->save.ss;
 VAR_14->save.ds = VAR_15->save.ds;
 VAR_14->save.gdtr = VAR_15->save.gdtr;
 VAR_14->save.idtr = VAR_15->save.idtr;
 VAR_14->save.efer = VAR_12->vcpu.arch.shadow_efer;
 VAR_14->save.cr0 = FUNC_5(&VAR_12->vcpu);
 VAR_14->save.cr4 = VAR_12->vcpu.arch.cr4;
 VAR_14->save.rflags = VAR_15->save.rflags;
 VAR_14->save.rip = VAR_12->next_rip;
 VAR_14->save.rsp = VAR_15->save.rsp;
 VAR_14->save.rax = VAR_15->save.rax;
 if (VAR_11)
  VAR_14->save.cr3 = VAR_15->save.cr3;
 else
  VAR_14->save.cr3 = VAR_12->vcpu.arch.cr3;

 FUNC_0(VAR_14, VAR_15);

 if (VAR_12->vmcb->save.rflags & VAR_10)
  VAR_12->vcpu.arch.hflags |= VAR_0;
 else
  VAR_12->vcpu.arch.hflags &= ~VAR_0;


 VAR_12->vmcb->save.es = VAR_13->save.es;
 VAR_12->vmcb->save.cs = VAR_13->save.cs;
 VAR_12->vmcb->save.ss = VAR_13->save.ss;
 VAR_12->vmcb->save.ds = VAR_13->save.ds;
 VAR_12->vmcb->save.gdtr = VAR_13->save.gdtr;
 VAR_12->vmcb->save.idtr = VAR_13->save.idtr;
 VAR_12->vmcb->save.rflags = VAR_13->save.rflags;
 FUNC_16(&VAR_12->vcpu, VAR_13->save.efer);
 FUNC_14(&VAR_12->vcpu, VAR_13->save.cr0);
 FUNC_15(&VAR_12->vcpu, VAR_13->save.cr4);
 if (VAR_11) {
  VAR_12->vmcb->save.cr3 = VAR_13->save.cr3;
  VAR_12->vcpu.arch.cr3 = VAR_13->save.cr3;
 } else {
  (void)FUNC_7(&VAR_12->vcpu, VAR_13->save.cr3);
  FUNC_4(&VAR_12->vcpu);
 }
 FUNC_9(VAR_12->vmcb, VAR_7);
 VAR_12->vmcb->save.cr2 = VAR_12->vcpu.arch.cr2 = VAR_13->save.cr2;
 FUNC_6(&VAR_12->vcpu, VAR_4, VAR_13->save.rax);
 FUNC_6(&VAR_12->vcpu, VAR_6, VAR_13->save.rsp);
 FUNC_6(&VAR_12->vcpu, VAR_5, VAR_13->save.rip);

 VAR_12->vmcb->save.rax = VAR_13->save.rax;
 VAR_12->vmcb->save.rsp = VAR_13->save.rsp;
 VAR_12->vmcb->save.rip = VAR_13->save.rip;
 VAR_12->vmcb->save.dr7 = VAR_13->save.dr7;
 VAR_12->vmcb->save.dr6 = VAR_13->save.dr6;
 VAR_12->vmcb->save.cpl = VAR_13->save.cpl;



 VAR_12->vmcb->control.intercept_cr_read |=
  VAR_13->control.intercept_cr_read;
 VAR_12->vmcb->control.intercept_cr_write |=
  VAR_13->control.intercept_cr_write;
 VAR_12->vmcb->control.intercept_dr_read |=
  VAR_13->control.intercept_dr_read;
 VAR_12->vmcb->control.intercept_dr_write |=
  VAR_13->control.intercept_dr_write;
 VAR_12->vmcb->control.intercept_exceptions |=
  VAR_13->control.intercept_exceptions;

 VAR_12->vmcb->control.intercept |= VAR_13->control.intercept;

 VAR_12->nested.vmcb_msrpm = VAR_13->control.msrpm_base_pa;


 VAR_12->nested.intercept_cr_read = VAR_13->control.intercept_cr_read;
 VAR_12->nested.intercept_cr_write = VAR_13->control.intercept_cr_write;
 VAR_12->nested.intercept_dr_read = VAR_13->control.intercept_dr_read;
 VAR_12->nested.intercept_dr_write = VAR_13->control.intercept_dr_write;
 VAR_12->nested.intercept_exceptions = VAR_13->control.intercept_exceptions;
 VAR_12->nested.intercept = VAR_13->control.intercept;

 FUNC_13(&VAR_12->vcpu);
 VAR_12->vmcb->control.exit_int_info = VAR_13->control.exit_int_info;
 VAR_12->vmcb->control.exit_int_info_err = VAR_13->control.exit_int_info_err;
 VAR_12->vmcb->control.int_ctl = VAR_13->control.int_ctl | VAR_8;
 if (VAR_13->control.int_ctl & VAR_9) {
  FUNC_12("nSVM Injecting Interrupt: 0x%x\n",
    VAR_13->control.int_ctl);
 }
 if (VAR_13->control.int_ctl & VAR_8)
  VAR_12->vcpu.arch.hflags |= VAR_1;
 else
  VAR_12->vcpu.arch.hflags &= ~VAR_1;

 FUNC_12("nSVM exit_int_info: 0x%x | int_state: 0x%x\n",
   VAR_13->control.exit_int_info,
   VAR_13->control.int_state);

 VAR_12->vmcb->control.int_vector = VAR_13->control.int_vector;
 VAR_12->vmcb->control.int_state = VAR_13->control.int_state;
 VAR_12->vmcb->control.tsc_offset += VAR_13->control.tsc_offset;
 if (VAR_13->control.event_inj & VAR_3)
  FUNC_12("Injecting Event: 0x%x\n",
    VAR_13->control.event_inj);
 VAR_12->vmcb->control.event_inj = VAR_13->control.event_inj;
 VAR_12->vmcb->control.event_inj_err = VAR_13->control.event_inj_err;

 FUNC_11(VAR_13, VAR_2);

 FUNC_1(VAR_12);

 FUNC_8(VAR_12->vmcb);

 return 1;
}
