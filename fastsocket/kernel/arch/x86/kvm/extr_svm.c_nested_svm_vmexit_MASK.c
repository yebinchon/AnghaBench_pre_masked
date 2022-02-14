
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct vmcb_control_area {int exit_int_info; int event_inj; int int_ctl; scalar_t__ event_inj_err; scalar_t__ tlb_ctl; scalar_t__ exit_int_info_err; int exit_info_2; int exit_info_1; int exit_code_hi; int exit_code; int int_state; int int_vector; } ;
struct TYPE_17__ {int cr0; scalar_t__ cpl; scalar_t__ dr7; int rip; int rsp; int rax; int cr3; int cr4; int efer; int rflags; int idtr; int gdtr; int ds; int ss; int cs; int es; int dr6; int cr2; } ;
struct vmcb {struct vmcb_control_area control; TYPE_4__ save; } ;
struct TYPE_14__ {int pending; } ;
struct TYPE_15__ {int hflags; int cr3; TYPE_1__ exception; } ;
struct TYPE_18__ {TYPE_2__ arch; } ;
struct TYPE_16__ {int vmcb; struct vmcb* hsave; } ;
struct vcpu_svm {TYPE_5__ vcpu; struct vmcb* vmcb; TYPE_3__ nested; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
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
 scalar_t__ VAR_9 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (TYPE_5__*,int) ;
 int FUNC_14 (TYPE_5__*,int ) ;
 int FUNC_15 (TYPE_5__*,int ) ;

__attribute__((used)) static int FUNC_16(struct vcpu_svm *VAR_10)
{
 struct vmcb *VAR_11;
 struct vmcb *VAR_12 = VAR_10->nested.hsave;
 struct vmcb *VAR_13 = VAR_10->vmcb;

 VAR_11 = FUNC_10(VAR_10, VAR_10->nested.vmcb, VAR_1);
 if (!VAR_11)
  return 1;


 FUNC_1(VAR_10);

 VAR_11->save.es = VAR_13->save.es;
 VAR_11->save.cs = VAR_13->save.cs;
 VAR_11->save.ss = VAR_13->save.ss;
 VAR_11->save.ds = VAR_13->save.ds;
 VAR_11->save.gdtr = VAR_13->save.gdtr;
 VAR_11->save.idtr = VAR_13->save.idtr;
 if (VAR_9)
  VAR_11->save.cr3 = VAR_13->save.cr3;
 VAR_11->save.cr2 = VAR_13->save.cr2;
 VAR_11->save.rflags = VAR_13->save.rflags;
 VAR_11->save.rip = VAR_13->save.rip;
 VAR_11->save.rsp = VAR_13->save.rsp;
 VAR_11->save.rax = VAR_13->save.rax;
 VAR_11->save.dr7 = VAR_13->save.dr7;
 VAR_11->save.dr6 = VAR_13->save.dr6;
 VAR_11->save.cpl = VAR_13->save.cpl;

 VAR_11->control.int_ctl = VAR_13->control.int_ctl;
 VAR_11->control.int_vector = VAR_13->control.int_vector;
 VAR_11->control.int_state = VAR_13->control.int_state;
 VAR_11->control.exit_code = VAR_13->control.exit_code;
 VAR_11->control.exit_code_hi = VAR_13->control.exit_code_hi;
 VAR_11->control.exit_info_1 = VAR_13->control.exit_info_1;
 VAR_11->control.exit_info_2 = VAR_13->control.exit_info_2;
 VAR_11->control.exit_int_info = VAR_13->control.exit_int_info;
 VAR_11->control.exit_int_info_err = VAR_13->control.exit_int_info_err;
 if (VAR_13->control.event_inj & VAR_2) {
  struct vmcb_control_area *VAR_14 = &VAR_11->control;

  VAR_14->exit_int_info = VAR_13->control.event_inj;
  VAR_14->exit_int_info_err = VAR_13->control.event_inj_err;
 }

 VAR_11->control.tlb_ctl = 0;
 VAR_11->control.event_inj = 0;
 VAR_11->control.event_inj_err = 0;


 if (!(VAR_10->vcpu.arch.hflags & VAR_0))
  VAR_11->control.int_ctl &= ~VAR_7;


 FUNC_0(VAR_13, VAR_12);


 if (VAR_10->vcpu.arch.exception.pending == 1)
  FUNC_12("WARNING: Pending Exception\n");

 FUNC_2(&VAR_10->vcpu);
 FUNC_3(&VAR_10->vcpu);


 VAR_10->vmcb->save.es = VAR_12->save.es;
 VAR_10->vmcb->save.cs = VAR_12->save.cs;
 VAR_10->vmcb->save.ss = VAR_12->save.ss;
 VAR_10->vmcb->save.ds = VAR_12->save.ds;
 VAR_10->vmcb->save.gdtr = VAR_12->save.gdtr;
 VAR_10->vmcb->save.idtr = VAR_12->save.idtr;
 VAR_10->vmcb->save.rflags = VAR_12->save.rflags;
 FUNC_15(&VAR_10->vcpu, VAR_12->save.efer);
 FUNC_13(&VAR_10->vcpu, VAR_12->save.cr0 | VAR_8);
 FUNC_14(&VAR_10->vcpu, VAR_12->save.cr4);
 if (VAR_9) {
  VAR_10->vmcb->save.cr3 = VAR_12->save.cr3;
  VAR_10->vcpu.arch.cr3 = VAR_12->save.cr3;
 } else {
  (void)FUNC_7(&VAR_10->vcpu, VAR_12->save.cr3);
 }
 FUNC_9(VAR_10->vmcb, VAR_6);
 FUNC_6(&VAR_10->vcpu, VAR_3, VAR_12->save.rax);
 FUNC_6(&VAR_10->vcpu, VAR_5, VAR_12->save.rsp);
 FUNC_6(&VAR_10->vcpu, VAR_4, VAR_12->save.rip);
 VAR_10->vmcb->save.dr7 = 0;
 VAR_10->vmcb->save.cpl = 0;
 VAR_10->vmcb->control.exit_int_info = 0;


 VAR_10->nested.vmcb = 0;

 FUNC_8(VAR_10->vmcb);

 FUNC_11(VAR_11, VAR_1);

 FUNC_5(&VAR_10->vcpu);
 FUNC_4(&VAR_10->vcpu);

 return 0;
}
