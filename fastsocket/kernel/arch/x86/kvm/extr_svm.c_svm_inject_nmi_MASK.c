
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vcpu_svm {TYPE_4__* vmcb; } ;
struct TYPE_5__ {int nmi_injections; } ;
struct TYPE_6__ {int hflags; } ;
struct kvm_vcpu {TYPE_1__ stat; TYPE_2__ arch; } ;
struct TYPE_7__ {int event_inj; unsigned long intercept; } ;
struct TYPE_8__ {TYPE_3__ control; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 struct vcpu_svm* FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_5)
{
 struct vcpu_svm *VAR_6 = FUNC_1(VAR_5);

 VAR_6->vmcb->control.event_inj = VAR_3 | VAR_2;
 VAR_5->arch.hflags |= VAR_0;
 VAR_6->vmcb->control.intercept |= (1UL << VAR_1);
 FUNC_0(VAR_6->vmcb, VAR_4);
 ++VAR_5->stat.nmi_injections;
}
