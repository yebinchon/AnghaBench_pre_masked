
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pending; int vector; scalar_t__ rip; } ;
struct TYPE_6__ {TYPE_2__ irq; scalar_t__ vm86_active; } ;
struct vcpu_vmx {int soft_vnmi_blocked; TYPE_3__ rmode; scalar_t__ vnmi_blocked_time; } ;
struct TYPE_4__ {int nmi_injections; } ;
struct kvm_vcpu {TYPE_1__ stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,scalar_t__) ;
 struct vcpu_vmx* FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_6(struct kvm_vcpu *VAR_6)
{
 struct vcpu_vmx *VAR_7 = FUNC_3(VAR_6);

 if (!FUNC_0()) {
  VAR_7->soft_vnmi_blocked = 1;
  VAR_7->vnmi_blocked_time = 0;
 }

 ++VAR_6->stat.nmi_injections;
 if (VAR_7->rmode.vm86_active) {
  VAR_7->rmode.irq.pending = 1;
  VAR_7->rmode.irq.vector = VAR_3;
  VAR_7->rmode.irq.rip = FUNC_1(VAR_6);
  FUNC_4(VAR_5,
        VAR_3 | VAR_2 |
        VAR_0);
  FUNC_4(VAR_4, 1);
  FUNC_2(VAR_6, VAR_7->rmode.irq.rip - 1);
  return;
 }
 FUNC_4(VAR_5,
   VAR_1 | VAR_0 | VAR_3);
 FUNC_5(VAR_6);
}
