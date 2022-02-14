
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ pending; } ;
struct TYPE_5__ {int error_code; int has_error_code; int nr; scalar_t__ pending; } ;
struct TYPE_7__ {int nmi_injected; int nmi_pending; TYPE_2__ interrupt; TYPE_1__ exception; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
struct TYPE_8__ {int (* set_irq ) (struct kvm_vcpu*) ;scalar_t__ (* interrupt_allowed ) (struct kvm_vcpu*) ;int (* set_nmi ) (struct kvm_vcpu*) ;scalar_t__ (* nmi_allowed ) (struct kvm_vcpu*) ;int (* queue_exception ) (struct kvm_vcpu*,int ,int ,int ) ;} ;


 int FUNC_0 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int ,int) ;
 TYPE_4__* VAR_0 ;
 int FUNC_3 (struct kvm_vcpu*,int ,int ,int ) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_8 (struct kvm_vcpu*) ;
 int FUNC_9 (struct kvm_vcpu*) ;
 int FUNC_10 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_11(struct kvm_vcpu *VAR_1)
{

 if (VAR_1->arch.exception.pending) {
  FUNC_10(VAR_1->arch.exception.nr,
     VAR_1->arch.exception.has_error_code,
     VAR_1->arch.exception.error_code);
  VAR_0->queue_exception(VAR_1, VAR_1->arch.exception.nr,
       VAR_1->arch.exception.has_error_code,
       VAR_1->arch.exception.error_code);
  return;
 }

 if (VAR_1->arch.nmi_injected) {
  VAR_0->set_nmi(VAR_1);
  return;
 }

 if (VAR_1->arch.interrupt.pending) {
  VAR_0->set_irq(VAR_1);
  return;
 }


 if (VAR_1->arch.nmi_pending) {
  if (VAR_0->nmi_allowed(VAR_1)) {
   VAR_1->arch.nmi_pending = 0;
   VAR_1->arch.nmi_injected = 1;
   VAR_0->set_nmi(VAR_1);
  }
 } else if (FUNC_1(VAR_1)) {
  if (VAR_0->interrupt_allowed(VAR_1)) {
   FUNC_2(VAR_1, FUNC_0(VAR_1),
         0);
   VAR_0->set_irq(VAR_1);
  }
 }
}
