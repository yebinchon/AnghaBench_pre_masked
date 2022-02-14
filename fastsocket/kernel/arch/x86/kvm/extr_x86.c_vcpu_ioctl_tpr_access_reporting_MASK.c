
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tpr_access_reporting; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_tpr_access_ctl {int enabled; scalar_t__ flags; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct kvm_vcpu *VAR_1,
        struct kvm_tpr_access_ctl *VAR_2)
{
 if (VAR_2->flags)
  return -VAR_0;
 VAR_1->arch.tpr_access_reporting = !!VAR_2->enabled;
 return 0;
}
