
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * gpr; int sprg6; int sprg5; int sprg4; int sprg3; int sprg2; int sprg1; int sprg0; int pid; int srr1; int srr0; int msr; int xer; int lr; int ctr; int cr; int pc; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_regs {int * gpr; int sprg7; int sprg6; int sprg5; int sprg3; int sprg2; int sprg1; int sprg0; int pid; int srr1; int srr0; int msr; int xer; int lr; int ctr; int cr; int pc; } ;


 int FUNC_0 (int *) ;

int FUNC_1(struct kvm_vcpu *VAR_0, struct kvm_regs *VAR_1)
{
 int VAR_2;

 VAR_1->pc = VAR_0->arch.pc;
 VAR_1->cr = VAR_0->arch.cr;
 VAR_1->ctr = VAR_0->arch.ctr;
 VAR_1->lr = VAR_0->arch.lr;
 VAR_1->xer = VAR_0->arch.xer;
 VAR_1->msr = VAR_0->arch.msr;
 VAR_1->srr0 = VAR_0->arch.srr0;
 VAR_1->srr1 = VAR_0->arch.srr1;
 VAR_1->pid = VAR_0->arch.pid;
 VAR_1->sprg0 = VAR_0->arch.sprg0;
 VAR_1->sprg1 = VAR_0->arch.sprg1;
 VAR_1->sprg2 = VAR_0->arch.sprg2;
 VAR_1->sprg3 = VAR_0->arch.sprg3;
 VAR_1->sprg5 = VAR_0->arch.sprg4;
 VAR_1->sprg6 = VAR_0->arch.sprg5;
 VAR_1->sprg7 = VAR_0->arch.sprg6;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->gpr); VAR_2++)
  VAR_1->gpr[VAR_2] = VAR_0->arch.gpr[VAR_2];

 return 0;
}
