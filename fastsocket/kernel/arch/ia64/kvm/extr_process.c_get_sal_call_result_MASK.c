
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int r11; int r10; int r9; int r8; } ;
struct TYPE_6__ {TYPE_1__ ret; } ;
struct TYPE_7__ {TYPE_2__ sal_data; } ;
struct exit_ctl_data {scalar_t__ exit_reason; TYPE_3__ u; } ;
struct TYPE_8__ {struct exit_ctl_data exit_data; } ;
struct kvm_vcpu {TYPE_4__ arch; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,char*) ;
 int FUNC_1 (struct kvm_vcpu*,int,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_1)
{
 struct exit_ctl_data *VAR_2 = &VAR_1->arch.exit_data;

 if (VAR_2->exit_reason == VAR_0) {
  FUNC_1(VAR_1, 8, VAR_2->u.sal_data.ret.r8, 0);
  FUNC_1(VAR_1, 9, VAR_2->u.sal_data.ret.r9, 0);
  FUNC_1(VAR_1, 10, VAR_2->u.sal_data.ret.r10, 0);
  FUNC_1(VAR_1, 11, VAR_2->u.sal_data.ret.r11, 0);
 } else
  FUNC_0(VAR_1, "Mis-set for exit reason!\n");
}
