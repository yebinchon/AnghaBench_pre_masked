
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_2__* apic; int apic_attention; } ;
struct kvm_vcpu {TYPE_1__ arch; int kvm; } ;
struct TYPE_5__ {int vapic_cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (struct kvm_vcpu*,TYPE_2__*) ;
 int FUNC_2 (int ,int *,int*,int) ;
 scalar_t__ FUNC_3 (int ,int *) ;

void FUNC_4(struct kvm_vcpu *VAR_2)
{
 u32 VAR_3;

 if (FUNC_3(VAR_1, &VAR_2->arch.apic_attention))
  FUNC_1(VAR_2, VAR_2->arch.apic);

 if (!FUNC_3(VAR_0, &VAR_2->arch.apic_attention))
  return;

 FUNC_2(VAR_2->kvm, &VAR_2->arch.apic->vapic_cache, &VAR_3,
         sizeof(u32));

 FUNC_0(VAR_2->arch.apic, VAR_3 & 0xff);
}
