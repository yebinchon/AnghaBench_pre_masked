
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_lapic {TYPE_2__* vcpu; } ;
struct TYPE_3__ {int apic_base; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct kvm_lapic *VAR_1)
{
 return (VAR_1)->vcpu->arch.apic_base & VAR_0;
}
