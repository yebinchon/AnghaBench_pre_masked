
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tss_segment_32 {void* ldt_selector; void* gs; void* fs; void* ds; void* ss; void* cs; void* es; void* edi; void* esi; void* ebp; void* esp; void* ebx; void* edx; void* ecx; void* eax; int eflags; int eip; int cr3; } ;
struct TYPE_3__ {int cr3; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_4__ {int (* get_rflags ) (struct kvm_vcpu*) ;} ;


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
 void* FUNC_0 (struct kvm_vcpu*,int ) ;
 void* FUNC_1 (struct kvm_vcpu*,int ) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 TYPE_2__* VAR_15 ;
 int FUNC_3 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_16,
    struct tss_segment_32 *VAR_17)
{
 VAR_17->cr3 = VAR_16->arch.cr3;
 VAR_17->eip = FUNC_2(VAR_16);
 VAR_17->eflags = VAR_15->get_rflags(VAR_16);
 VAR_17->eax = FUNC_1(VAR_16, VAR_0);
 VAR_17->ecx = FUNC_1(VAR_16, VAR_3);
 VAR_17->edx = FUNC_1(VAR_16, VAR_5);
 VAR_17->ebx = FUNC_1(VAR_16, VAR_2);
 VAR_17->esp = FUNC_1(VAR_16, VAR_7);
 VAR_17->ebp = FUNC_1(VAR_16, VAR_1);
 VAR_17->esi = FUNC_1(VAR_16, VAR_6);
 VAR_17->edi = FUNC_1(VAR_16, VAR_4);
 VAR_17->es = FUNC_0(VAR_16, VAR_10);
 VAR_17->cs = FUNC_0(VAR_16, VAR_8);
 VAR_17->ss = FUNC_0(VAR_16, VAR_14);
 VAR_17->ds = FUNC_0(VAR_16, VAR_9);
 VAR_17->fs = FUNC_0(VAR_16, VAR_11);
 VAR_17->gs = FUNC_0(VAR_16, VAR_12);
 VAR_17->ldt_selector = FUNC_0(VAR_16, VAR_13);
}
