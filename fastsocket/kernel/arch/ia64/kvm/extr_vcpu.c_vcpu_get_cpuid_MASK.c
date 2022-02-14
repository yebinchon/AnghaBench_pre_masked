
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;


 unsigned long FUNC_0 (unsigned long) ;

unsigned long FUNC_1(struct kvm_vcpu *VAR_0, unsigned long VAR_1)
{

 if (VAR_1 > (FUNC_0(3) & 0xff))
  return 0;
 else
  return FUNC_0(VAR_1);
}
