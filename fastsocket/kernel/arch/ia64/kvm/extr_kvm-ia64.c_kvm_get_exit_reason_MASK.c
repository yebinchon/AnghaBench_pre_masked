
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct kvm_vcpu {int dummy; } ;
struct exit_ctl_data {int exit_reason; } ;


 struct exit_ctl_data* FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static uint32_t FUNC_1(struct kvm_vcpu *VAR_0)
{
 struct exit_ctl_data *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 return VAR_1->exit_reason;
}
