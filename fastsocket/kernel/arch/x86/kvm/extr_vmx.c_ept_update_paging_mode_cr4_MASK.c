
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long cr4; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_1(unsigned long *VAR_2,
     struct kvm_vcpu *VAR_3)
{
 if (!FUNC_0(VAR_3)) {
  *VAR_2 &= ~VAR_0;
  *VAR_2 |= VAR_1;
 } else if (!(VAR_3->arch.cr4 & VAR_0))
  *VAR_2 &= ~VAR_0;
}
