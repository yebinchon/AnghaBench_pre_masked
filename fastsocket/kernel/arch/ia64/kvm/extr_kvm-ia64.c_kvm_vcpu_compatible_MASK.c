
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * apic; } ;
struct kvm_vcpu {TYPE_1__ arch; int kvm; } ;


 int FUNC_0 (int ) ;

bool FUNC_1(struct kvm_vcpu *VAR_0)
{
 return FUNC_0(VAR_0->kvm) == (VAR_0->arch.apic != ((void*)0));
}
