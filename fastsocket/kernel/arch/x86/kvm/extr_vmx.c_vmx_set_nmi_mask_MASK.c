
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_vmx {int soft_vnmi_blocked; scalar_t__ vnmi_blocked_time; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 struct vcpu_vmx* FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_2, bool VAR_3)
{
 struct vcpu_vmx *VAR_4 = FUNC_1(VAR_2);

 if (!FUNC_0()) {
  if (VAR_4->soft_vnmi_blocked != VAR_3) {
   VAR_4->soft_vnmi_blocked = VAR_3;
   VAR_4->vnmi_blocked_time = 0;
  }
 } else {
  if (VAR_3)
   FUNC_3(VAR_0,
          VAR_1);
  else
   FUNC_2(VAR_0,
     VAR_1);
 }
}
