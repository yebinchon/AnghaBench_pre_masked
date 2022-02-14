
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {int hardware_exit_reason; } ;
struct kvm_run {TYPE_1__ hw; int exit_reason; } ;
struct exit_ctl_data {scalar_t__ exit_reason; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct exit_ctl_data* FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_2, struct kvm_run *VAR_3)
{
 struct exit_ctl_data *VAR_4;

 VAR_4 = FUNC_0(VAR_2);

 if (VAR_4->exit_reason == VAR_0) {
  FUNC_1(VAR_2);
  return 1;
 } else {
  VAR_3->exit_reason = VAR_1;
  VAR_3->hw.hardware_exit_reason = 3;
  return 0;
 }

}
