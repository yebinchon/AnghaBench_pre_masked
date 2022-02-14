
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct ia64_pal_retval {int dummy; } ;
struct TYPE_3__ {struct ia64_pal_retval ret; } ;
struct TYPE_4__ {TYPE_1__ pal_data; } ;
struct exit_ctl_data {scalar_t__ exit_reason; TYPE_2__ u; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ia64_pal_retval) ;
 struct exit_ctl_data* FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_1,
  struct ia64_pal_retval VAR_2) {

 struct exit_ctl_data *VAR_3;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3 && VAR_3->exit_reason == VAR_0) {
  VAR_3->u.pal_data.ret = VAR_2;
  return ;
 }
 FUNC_0(VAR_3->u.pal_data.ret);
}
