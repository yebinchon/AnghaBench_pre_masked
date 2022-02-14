
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_vmx {int invalid_state_emulation_result; } ;
struct kvm_vcpu {int dummy; } ;
typedef enum emulation_result { ____Placeholder_emulation_result } emulation_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,char*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int ) ;
 struct vcpu_vmx* FUNC_10 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_11(struct kvm_vcpu *VAR_3)
{
 struct vcpu_vmx *VAR_4 = FUNC_10(VAR_3);
 enum emulation_result VAR_5 = VAR_0;

 FUNC_4();
 FUNC_7();

 while (!FUNC_1(VAR_3)) {
  VAR_5 = FUNC_0(VAR_3, 0);

  if (VAR_5 == VAR_1)
   break;

  if (VAR_5 != VAR_0) {
   FUNC_2(VAR_3, "emulation failure");
   break;
  }

  if (FUNC_9(VAR_2))
   break;
  if (FUNC_5())
   FUNC_8();
 }

 FUNC_6();
 FUNC_3();

 VAR_4->invalid_state_emulation_result = VAR_5;
}
