
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ptc_g_count; } ;
struct kvm_vcpu {TYPE_1__ arch; int requests; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_6(struct kvm_vcpu *VAR_3)
{
 FUNC_5(VAR_3);

 if (FUNC_1(VAR_1, &VAR_3->requests)) {
  FUNC_4(VAR_3);
  return;
 }

 if (FUNC_3(FUNC_1(VAR_2, &VAR_3->requests))) {
  FUNC_2(VAR_3);
  return;
 }

 if (FUNC_1(VAR_0, &VAR_3->requests)) {
  while (VAR_3->arch.ptc_g_count > 0)
   FUNC_0(VAR_3, --VAR_3->arch.ptc_g_count);
 }
}
