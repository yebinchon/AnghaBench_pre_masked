
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned long gr29; unsigned long gr28; void* gr31; void* gr30; } ;
struct TYPE_6__ {TYPE_2__ pal_data; } ;
struct exit_ctl_data {int exit_reason; TYPE_3__ u; } ;
struct TYPE_4__ {struct exit_ctl_data exit_data; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;



 void* FUNC_0 (struct kvm_vcpu*,unsigned long) ;
 void* FUNC_1 (struct kvm_vcpu*,int) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_1)
{
 struct exit_ctl_data *VAR_2 = &VAR_1->arch.exit_data;
 unsigned long VAR_3 = FUNC_1(VAR_1, 28);
 unsigned long VAR_4 = FUNC_1(VAR_1, 29);
 unsigned long VAR_5 = FUNC_1(VAR_1, 30);





 switch (VAR_3) {
 case 128:
 case 129:
  VAR_2->u.pal_data.gr29 = FUNC_0(VAR_1, VAR_4);
  VAR_2->u.pal_data.gr30 = FUNC_1(VAR_1, 30);
  break;
 case 130:
  VAR_2->u.pal_data.gr29 = VAR_4;
  VAR_2->u.pal_data.gr30 = FUNC_0(VAR_1, VAR_5);
  break;
 default:
  VAR_2->u.pal_data.gr29 = VAR_4;
  VAR_2->u.pal_data.gr30 = FUNC_1(VAR_1, 30);
 }
 VAR_2->u.pal_data.gr28 = VAR_3;
 VAR_2->u.pal_data.gr31 = FUNC_1(VAR_1, 31);

 VAR_2->exit_reason = VAR_0;
}
