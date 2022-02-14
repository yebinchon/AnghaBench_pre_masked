
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nmi_pending; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;



void FUNC_0(struct kvm_vcpu *VAR_0)
{
 VAR_0->arch.nmi_pending = 1;
}
