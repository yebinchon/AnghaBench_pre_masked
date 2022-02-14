
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vcpu_svm {int * host_user_msrs; } ;
struct TYPE_2__ {int host_state_reload; } ;
struct kvm_vcpu {TYPE_1__ stat; } ;


 int VAR_0 ;
 int * VAR_1 ;
 struct vcpu_svm* FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_2)
{
 struct vcpu_svm *VAR_3 = FUNC_0(VAR_2);
 int VAR_4;

 ++VAR_2->stat.host_state_reload;
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_1(VAR_1[VAR_4], VAR_3->host_user_msrs[VAR_4]);
}
