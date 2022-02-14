
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_3__ {int in7; int in6; int in5; int in4; int in3; int in2; int in1; int in0; } ;
struct TYPE_4__ {TYPE_1__ sal_data; } ;
struct exit_ctl_data {scalar_t__ exit_reason; TYPE_2__ u; } ;


 scalar_t__ VAR_0 ;
 struct exit_ctl_data* FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_1, u64 *VAR_2, u64 *VAR_3,
  u64 *VAR_4, u64 *VAR_5, u64 *VAR_6, u64 *VAR_7, u64 *VAR_8, u64 *VAR_9){

 struct exit_ctl_data *VAR_10;

 VAR_10 = FUNC_0(VAR_1);

 if (VAR_10) {
  if (VAR_10->exit_reason == VAR_0) {
   *VAR_2 = VAR_10->u.sal_data.in0;
   *VAR_3 = VAR_10->u.sal_data.in1;
   *VAR_4 = VAR_10->u.sal_data.in2;
   *VAR_5 = VAR_10->u.sal_data.in3;
   *VAR_6 = VAR_10->u.sal_data.in4;
   *VAR_7 = VAR_10->u.sal_data.in5;
   *VAR_8 = VAR_10->u.sal_data.in6;
   *VAR_9 = VAR_10->u.sal_data.in7;
   return ;
  }
 }
 *VAR_2 = 0;
}
