
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {int (* get_cpl ) (struct kvm_vcpu*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,int ,int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct kvm_vcpu*) ;

bool FUNC_2(struct kvm_vcpu *VAR_2, int VAR_3)
{
 if (VAR_1->get_cpl(VAR_2) <= VAR_3)
  return 1;
 FUNC_0(VAR_2, VAR_0, 0);
 return 0;
}
