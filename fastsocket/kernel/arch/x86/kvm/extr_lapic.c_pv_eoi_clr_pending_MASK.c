
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int apic_attention; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
struct TYPE_5__ {scalar_t__ msr_val; } ;
struct TYPE_6__ {TYPE_1__ pv_eoi; } ;
struct TYPE_8__ {TYPE_2__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*,unsigned long long) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*,int ) ;
 TYPE_4__* VAR_2 ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_3)
{
 if (FUNC_2(VAR_3, VAR_1) < 0) {
  FUNC_1("Can't clear EOI MSR value: 0x%llx\n",
      (unsigned long long)VAR_2->arch.pv_eoi.msr_val);
  return;
 }
 FUNC_0(VAR_0, &VAR_3->arch.apic_attention);
}
