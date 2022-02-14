
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct kvm_lapic* apic; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_lapic {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_lapic*) ;
 int FUNC_1 (struct kvm_lapic*) ;
 int FUNC_2 (struct kvm_lapic*,int ) ;
 int FUNC_3 (struct kvm_lapic*) ;

int FUNC_4(struct kvm_vcpu *VAR_1)
{
 struct kvm_lapic *VAR_2 = VAR_1->arch.apic;
 int VAR_3;

 if (!VAR_2 || !FUNC_0(VAR_2))
  return -1;

 FUNC_3(VAR_2);
 VAR_3 = FUNC_1(VAR_2);
 if ((VAR_3 == -1) ||
     ((VAR_3 & 0xF0) <= FUNC_2(VAR_2, VAR_0)))
  return -1;
 return VAR_3;
}
