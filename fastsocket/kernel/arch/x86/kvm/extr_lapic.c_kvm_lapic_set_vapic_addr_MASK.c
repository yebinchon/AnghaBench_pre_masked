
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* apic; int apic_attention; } ;
struct kvm_vcpu {TYPE_2__ arch; int kvm; } ;
typedef scalar_t__ gpa_t ;
struct TYPE_3__ {scalar_t__ vapic_addr; int vapic_cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int *,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

int FUNC_4(struct kvm_vcpu *VAR_3, gpa_t VAR_4)
{
 if (VAR_4) {
  if (FUNC_3(VAR_4) > VAR_2 - 4)
   return -VAR_0;

  if (FUNC_2(VAR_3->kvm,
           &VAR_3->arch.apic->vapic_cache,
           VAR_4))
   return -VAR_0;
  FUNC_1(VAR_1, &VAR_3->arch.apic_attention);
 } else
  FUNC_0(VAR_1, &VAR_3->arch.apic_attention);

 VAR_3->arch.apic->vapic_addr = VAR_4;
 return 0;
}
