
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int fpu_active; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct kvm_vcpu *VAR_1)
{
 if (VAR_0)
  VAR_1->fpu_active = 1;
}
