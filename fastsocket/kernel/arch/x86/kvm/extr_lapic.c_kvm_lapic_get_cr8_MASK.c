
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {struct kvm_lapic* apic; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_lapic {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kvm_lapic*,int ) ;

u64 FUNC_1(struct kvm_vcpu *VAR_1)
{
 struct kvm_lapic *VAR_2 = VAR_1->arch.apic;
 u64 VAR_3;

 if (!VAR_2)
  return 0;
 VAR_3 = (u64) FUNC_0(VAR_2, VAR_0);

 return (VAR_3 & 0xf0) >> 4;
}
