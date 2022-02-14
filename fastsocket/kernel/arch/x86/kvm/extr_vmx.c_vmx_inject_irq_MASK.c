
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_13__ {int event_exit_inst_len; } ;
struct TYPE_14__ {TYPE_6__ arch; } ;
struct TYPE_9__ {int pending; int vector; scalar_t__ rip; } ;
struct TYPE_10__ {TYPE_2__ irq; scalar_t__ vm86_active; } ;
struct vcpu_vmx {TYPE_7__ vcpu; TYPE_3__ rmode; } ;
struct TYPE_11__ {int nr; scalar_t__ soft; } ;
struct TYPE_12__ {TYPE_4__ interrupt; } ;
struct TYPE_8__ {int irq_injections; } ;
struct kvm_vcpu {TYPE_5__ arch; TYPE_1__ stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,scalar_t__) ;
 struct vcpu_vmx* FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_6(struct kvm_vcpu *VAR_5)
{
 struct vcpu_vmx *VAR_6 = FUNC_2(VAR_5);
 uint32_t VAR_7;
 int VAR_8 = VAR_5->arch.interrupt.nr;

 FUNC_3(VAR_8);

 ++VAR_5->stat.irq_injections;
 if (VAR_6->rmode.vm86_active) {
  VAR_6->rmode.irq.pending = 1;
  VAR_6->rmode.irq.vector = VAR_8;
  VAR_6->rmode.irq.rip = FUNC_0(VAR_5);
  if (VAR_5->arch.interrupt.soft)
   VAR_6->rmode.irq.rip +=
    VAR_6->vcpu.arch.event_exit_inst_len;
  FUNC_4(VAR_4,
        VAR_8 | VAR_2 | VAR_0);
  FUNC_4(VAR_3, 1);
  FUNC_1(VAR_5, VAR_6->rmode.irq.rip - 1);
  return;
 }
 VAR_7 = VAR_8 | VAR_0;
 if (VAR_5->arch.interrupt.soft) {
  VAR_7 |= VAR_2;
  FUNC_4(VAR_3,
        VAR_6->vcpu.arch.event_exit_inst_len);
 } else
  VAR_7 |= VAR_1;
 FUNC_4(VAR_4, VAR_7);
 FUNC_5(VAR_5);
}
