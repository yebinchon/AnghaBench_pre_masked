
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {void* in7; void* in6; void* in5; void* in4; void* in3; void* in2; void* in1; void* in0; } ;
struct TYPE_6__ {TYPE_2__ sal_data; } ;
struct exit_ctl_data {int exit_reason; TYPE_3__ u; } ;
struct TYPE_4__ {struct exit_ctl_data exit_data; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 void* FUNC_0 (struct kvm_vcpu*,int) ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_1)
{
 struct exit_ctl_data *VAR_2 = &VAR_1->arch.exit_data;

 VAR_2->u.sal_data.in0 = FUNC_0(VAR_1, 32);
 VAR_2->u.sal_data.in1 = FUNC_0(VAR_1, 33);
 VAR_2->u.sal_data.in2 = FUNC_0(VAR_1, 34);
 VAR_2->u.sal_data.in3 = FUNC_0(VAR_1, 35);
 VAR_2->u.sal_data.in4 = FUNC_0(VAR_1, 36);
 VAR_2->u.sal_data.in5 = FUNC_0(VAR_1, 37);
 VAR_2->u.sal_data.in6 = FUNC_0(VAR_1, 38);
 VAR_2->u.sal_data.in7 = FUNC_0(VAR_1, 39);
 VAR_2->exit_reason = VAR_0;
}
