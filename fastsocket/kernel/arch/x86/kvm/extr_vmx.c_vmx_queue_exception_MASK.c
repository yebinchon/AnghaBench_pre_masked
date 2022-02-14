
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int event_exit_inst_len; } ;
struct TYPE_8__ {TYPE_3__ arch; } ;
struct TYPE_5__ {int pending; unsigned int vector; scalar_t__ rip; } ;
struct TYPE_6__ {TYPE_1__ irq; scalar_t__ vm86_active; } ;
struct vcpu_vmx {TYPE_4__ vcpu; TYPE_2__ rmode; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,scalar_t__) ;
 struct vcpu_vmx* FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_6(struct kvm_vcpu *VAR_8, unsigned VAR_9,
    bool VAR_10, u32 VAR_11)
{
 struct vcpu_vmx *VAR_12 = FUNC_3(VAR_8);
 u32 VAR_13 = VAR_9 | VAR_1;

 if (VAR_10) {
  FUNC_4(VAR_5, VAR_11);
  VAR_13 |= VAR_0;
 }

 if (VAR_12->rmode.vm86_active) {
  VAR_12->rmode.irq.pending = 1;
  VAR_12->rmode.irq.vector = VAR_9;
  VAR_12->rmode.irq.rip = FUNC_1(VAR_8);
  if (FUNC_0(VAR_9))
   VAR_12->rmode.irq.rip +=
    VAR_12->vcpu.arch.event_exit_inst_len;
  VAR_13 |= VAR_4;
  FUNC_4(VAR_7, VAR_13);
  FUNC_4(VAR_6, 1);
  FUNC_2(VAR_8, VAR_12->rmode.irq.rip - 1);
  return;
 }

 if (FUNC_0(VAR_9)) {
  FUNC_4(VAR_6,
        VAR_12->vcpu.arch.event_exit_inst_len);
  VAR_13 |= VAR_3;
 } else
  VAR_13 |= VAR_2;

 FUNC_4(VAR_7, VAR_13);
 FUNC_5(VAR_8);
}
