
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_cpuid_entry2 {int edx; int ecx; int ebx; int eax; } ;
struct TYPE_2__ {int (* skip_emulated_instruction ) (struct kvm_vcpu*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct kvm_cpuid_entry2* FUNC_0 (struct kvm_vcpu*,int ,int ) ;
 struct kvm_cpuid_entry2* FUNC_1 (struct kvm_vcpu*,int ,int ) ;
 int FUNC_2 (struct kvm_vcpu*,int ) ;
 int FUNC_3 (struct kvm_vcpu*,int ,int ) ;
 TYPE_1__* VAR_4 ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;

void FUNC_6(struct kvm_vcpu *VAR_5)
{
 u32 VAR_6, VAR_7;
 struct kvm_cpuid_entry2 *VAR_8;

 VAR_6 = FUNC_2(VAR_5, VAR_0);
 VAR_7 = FUNC_2(VAR_5, VAR_2);
 FUNC_3(VAR_5, VAR_0, 0);
 FUNC_3(VAR_5, VAR_1, 0);
 FUNC_3(VAR_5, VAR_2, 0);
 FUNC_3(VAR_5, VAR_3, 0);
 VAR_8 = FUNC_1(VAR_5, VAR_6, VAR_7);

 if (!VAR_8)
  VAR_8 = FUNC_0(VAR_5, VAR_6, VAR_7);

 if (VAR_8) {
  FUNC_3(VAR_5, VAR_0, VAR_8->eax);
  FUNC_3(VAR_5, VAR_1, VAR_8->ebx);
  FUNC_3(VAR_5, VAR_2, VAR_8->ecx);
  FUNC_3(VAR_5, VAR_3, VAR_8->edx);
 }
 VAR_4->skip_emulated_instruction(VAR_5);
 FUNC_5(VAR_6,
   FUNC_2(VAR_5, VAR_0),
   FUNC_2(VAR_5, VAR_1),
   FUNC_2(VAR_5, VAR_2),
   FUNC_2(VAR_5, VAR_3));
}
