
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int msrpm; int hsave; } ;
struct vcpu_svm {int vmcb_pa; TYPE_1__ nested; int msrpm; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,struct vcpu_svm*) ;
 int VAR_2 ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (int) ;
 struct vcpu_svm* FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct kvm_vcpu *VAR_3)
{
 struct vcpu_svm *VAR_4 = FUNC_5(VAR_3);

 FUNC_0(FUNC_4(VAR_4->vmcb_pa >> VAR_1));
 FUNC_1(FUNC_6(VAR_4->msrpm), VAR_0);
 FUNC_0(FUNC_6(VAR_4->nested.hsave));
 FUNC_1(FUNC_6(VAR_4->nested.msrpm), VAR_0);
 FUNC_3(VAR_3);
 FUNC_2(VAR_2, VAR_4);
}
