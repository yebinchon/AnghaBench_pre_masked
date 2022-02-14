
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long cr8; } ;
struct kvm_vcpu {TYPE_1__ arch; int kvm; } ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct kvm_vcpu*,unsigned long) ;

int FUNC_2(struct kvm_vcpu *VAR_1, unsigned long VAR_2)
{
 if (VAR_2 & VAR_0)
  return 1;
 if (FUNC_0(VAR_1->kvm))
  FUNC_1(VAR_1, VAR_2);
 else
  VAR_1->arch.cr8 = VAR_2;
 return 0;
}
