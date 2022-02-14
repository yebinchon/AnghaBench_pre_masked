
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int guest_debug; } ;
struct kvm_regs {int rflags; int rip; void* r15; void* r14; void* r13; void* r12; void* r11; void* r10; void* r9; void* r8; void* rbp; void* rsp; void* rdi; void* rsi; void* rdx; void* rcx; void* rbx; void* rax; } ;
struct TYPE_2__ {int (* get_rflags ) (struct kvm_vcpu*) ;} ;


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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void* FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 TYPE_1__* VAR_19 ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;

int FUNC_5(struct kvm_vcpu *VAR_20, struct kvm_regs *VAR_21)
{
 FUNC_3(VAR_20);

 VAR_21->rax = FUNC_0(VAR_20, VAR_9);
 VAR_21->rbx = FUNC_0(VAR_20, VAR_11);
 VAR_21->rcx = FUNC_0(VAR_20, VAR_12);
 VAR_21->rdx = FUNC_0(VAR_20, VAR_14);
 VAR_21->rsi = FUNC_0(VAR_20, VAR_15);
 VAR_21->rdi = FUNC_0(VAR_20, VAR_13);
 VAR_21->rsp = FUNC_0(VAR_20, VAR_16);
 VAR_21->rbp = FUNC_0(VAR_20, VAR_10);
 VAR_21->rip = FUNC_1(VAR_20);
 VAR_21->rflags = VAR_19->get_rflags(VAR_20);




 if (VAR_20->guest_debug & VAR_0)
  VAR_21->rflags &= ~(VAR_18 | VAR_17);

 FUNC_4(VAR_20);

 return 0;
}
