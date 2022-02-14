
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {struct kvm_lapic* apic; } ;
struct kvm_vcpu {int kvm; TYPE_1__ arch; } ;
struct kvm_lapic {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct kvm_lapic*,int,int,int*) ;
 int FUNC_1 (struct kvm_lapic*) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct kvm_vcpu *VAR_2, u32 VAR_3, u64 *VAR_4)
{
 struct kvm_lapic *VAR_5 = VAR_2->arch.apic;
 u32 VAR_6 = (VAR_3 - VAR_0) << 4, VAR_7, VAR_8 = 0;

 if (!FUNC_2(VAR_2->kvm) || !FUNC_1(VAR_5))
  return 1;

 if (FUNC_0(VAR_5, VAR_6, 4, &VAR_7))
  return 1;
 if (VAR_3 == 0x830)
  FUNC_0(VAR_5, VAR_1, 4, &VAR_8);

 *VAR_4 = (((u64)VAR_8) << 32) | VAR_7;

 return 0;
}
