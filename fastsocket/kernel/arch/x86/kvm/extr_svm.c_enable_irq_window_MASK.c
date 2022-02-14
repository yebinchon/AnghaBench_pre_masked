
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_svm {int dummy; } ;
struct kvm_vcpu {int dummy; } ;


 scalar_t__ FUNC_0 (struct vcpu_svm*) ;
 int FUNC_1 (struct vcpu_svm*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct vcpu_svm*,int) ;
 int FUNC_4 (struct vcpu_svm*) ;
 struct vcpu_svm* FUNC_5 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_6(struct kvm_vcpu *VAR_0)
{
 struct vcpu_svm *VAR_1 = FUNC_5(VAR_0);
 FUNC_2("Trying to open IRQ window\n");

 FUNC_1(VAR_1);





 if (FUNC_0(VAR_1)) {
  FUNC_4(VAR_1);
  FUNC_3(VAR_1, 0x0);
 }
}
