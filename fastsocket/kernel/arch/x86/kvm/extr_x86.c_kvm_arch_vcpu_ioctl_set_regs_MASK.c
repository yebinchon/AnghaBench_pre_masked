
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pending; } ;
struct TYPE_5__ {TYPE_1__ exception; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct kvm_regs {int rflags; int rip; int r15; int r14; int r13; int r12; int r11; int r10; int r9; int r8; int rbp; int rsp; int rdi; int rsi; int rdx; int rcx; int rbx; int rax; } ;
struct TYPE_6__ {int (* set_rflags ) (struct kvm_vcpu*,int ) ;} ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct kvm_vcpu*,int ,int ) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 TYPE_3__* VAR_16 ;
 int FUNC_2 (struct kvm_vcpu*,int ) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;

int FUNC_5(struct kvm_vcpu *VAR_17, struct kvm_regs *VAR_18)
{
 FUNC_3(VAR_17);

 FUNC_0(VAR_17, VAR_8, VAR_18->rax);
 FUNC_0(VAR_17, VAR_10, VAR_18->rbx);
 FUNC_0(VAR_17, VAR_11, VAR_18->rcx);
 FUNC_0(VAR_17, VAR_13, VAR_18->rdx);
 FUNC_0(VAR_17, VAR_14, VAR_18->rsi);
 FUNC_0(VAR_17, VAR_12, VAR_18->rdi);
 FUNC_0(VAR_17, VAR_15, VAR_18->rsp);
 FUNC_0(VAR_17, VAR_9, VAR_18->rbp);
 FUNC_1(VAR_17, VAR_18->rip);
 VAR_16->set_rflags(VAR_17, VAR_18->rflags);


 VAR_17->arch.exception.pending = 0;

 FUNC_4(VAR_17);

 return 0;
}
