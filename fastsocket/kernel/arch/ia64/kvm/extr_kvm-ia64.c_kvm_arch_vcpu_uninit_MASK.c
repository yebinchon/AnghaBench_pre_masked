
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int apic; int hlt_timer; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct kvm_vcpu *VAR_0)
{

 FUNC_0(&VAR_0->arch.hlt_timer);
 FUNC_1(VAR_0->arch.apic);
}
