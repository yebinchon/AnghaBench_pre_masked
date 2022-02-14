
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_3__ {int gr28; } ;
struct TYPE_4__ {TYPE_1__ pal_data; } ;
struct exit_ctl_data {scalar_t__ exit_reason; TYPE_2__ u; } ;


 scalar_t__ VAR_0 ;
 struct exit_ctl_data* FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static u64 FUNC_1(struct kvm_vcpu *VAR_1)
{
 u64 VAR_2 = 0;
 struct exit_ctl_data *VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 && (VAR_3->exit_reason == VAR_0))
  VAR_2 = VAR_3->u.pal_data.gr28;

 return VAR_2;
}
