
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmcb_control_area {int lbr_ctl; int nested_cr3; int event_inj_err; int event_inj; int nested_ctl; int exit_int_info_err; int exit_int_info; int exit_info_2; int exit_info_1; int exit_code_hi; int exit_code; int int_state; int int_vector; int int_ctl; int tlb_ctl; int asid; int tsc_offset; int msrpm_base_pa; int iopm_base_pa; int intercept; int intercept_exceptions; int intercept_dr_write; int intercept_dr_read; int intercept_cr_write; int intercept_cr_read; } ;
struct vmcb {struct vmcb_control_area control; } ;



__attribute__((used)) static inline void FUNC_0(struct vmcb *VAR_0, struct vmcb *VAR_1)
{
 struct vmcb_control_area *VAR_2 = &VAR_0->control;
 struct vmcb_control_area *VAR_3 = &VAR_1->control;

 VAR_2->intercept_cr_read = VAR_3->intercept_cr_read;
 VAR_2->intercept_cr_write = VAR_3->intercept_cr_write;
 VAR_2->intercept_dr_read = VAR_3->intercept_dr_read;
 VAR_2->intercept_dr_write = VAR_3->intercept_dr_write;
 VAR_2->intercept_exceptions = VAR_3->intercept_exceptions;
 VAR_2->intercept = VAR_3->intercept;
 VAR_2->iopm_base_pa = VAR_3->iopm_base_pa;
 VAR_2->msrpm_base_pa = VAR_3->msrpm_base_pa;
 VAR_2->tsc_offset = VAR_3->tsc_offset;
 VAR_2->asid = VAR_3->asid;
 VAR_2->tlb_ctl = VAR_3->tlb_ctl;
 VAR_2->int_ctl = VAR_3->int_ctl;
 VAR_2->int_vector = VAR_3->int_vector;
 VAR_2->int_state = VAR_3->int_state;
 VAR_2->exit_code = VAR_3->exit_code;
 VAR_2->exit_code_hi = VAR_3->exit_code_hi;
 VAR_2->exit_info_1 = VAR_3->exit_info_1;
 VAR_2->exit_info_2 = VAR_3->exit_info_2;
 VAR_2->exit_int_info = VAR_3->exit_int_info;
 VAR_2->exit_int_info_err = VAR_3->exit_int_info_err;
 VAR_2->nested_ctl = VAR_3->nested_ctl;
 VAR_2->event_inj = VAR_3->event_inj;
 VAR_2->event_inj_err = VAR_3->event_inj_err;
 VAR_2->nested_cr3 = VAR_3->nested_cr3;
 VAR_2->lbr_ctl = VAR_3->lbr_ctl;
}
