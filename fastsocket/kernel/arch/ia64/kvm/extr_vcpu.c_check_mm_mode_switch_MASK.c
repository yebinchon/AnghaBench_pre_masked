
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct ia64_psr {scalar_t__ dt; scalar_t__ it; scalar_t__ rt; } ;


 int FUNC_0 (struct kvm_vcpu*,struct ia64_psr,struct ia64_psr) ;

void FUNC_1(struct kvm_vcpu *VAR_0, struct ia64_psr VAR_1,
     struct ia64_psr VAR_2)
{

 if ((VAR_1.dt != VAR_2.dt)
   || (VAR_1.it != VAR_2.it)
   || (VAR_1.rt != VAR_2.rt))
  FUNC_0(VAR_0, VAR_1, VAR_2);

 return;
}
