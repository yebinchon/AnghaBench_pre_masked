
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ht_active; } ;
struct kvm_vcpu {int cpu; TYPE_1__ arch; } ;


 int FUNC_0 (struct kvm_vcpu*) ;

void FUNC_1(struct kvm_vcpu *VAR_0, int VAR_1)
{
 if (VAR_1 != VAR_0->cpu) {
  VAR_0->cpu = VAR_1;
  if (VAR_0->arch.ht_active)
   FUNC_0(VAR_0);
 }
}
