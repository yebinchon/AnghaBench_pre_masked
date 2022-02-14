
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct exit_ctl_data {scalar_t__ exit_reason; } ;
struct TYPE_2__ {struct exit_ctl_data exit_data; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,char*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_2)
{
 struct exit_ctl_data *VAR_3 = &VAR_2->arch.exit_data;

 if (!VAR_1 && VAR_3->exit_reason != VAR_0) {
  FUNC_0(VAR_2, "Failed to do vmm sanity check,"
   "it maybe caused by crashed vmm!!\n\n");
 }
}
