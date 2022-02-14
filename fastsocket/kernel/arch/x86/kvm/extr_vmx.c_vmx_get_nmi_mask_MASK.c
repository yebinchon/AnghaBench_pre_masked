
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {int soft_vnmi_blocked; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(struct kvm_vcpu *VAR_2)
{
 if (!FUNC_0())
  return FUNC_1(VAR_2)->soft_vnmi_blocked;
 else
  return !!(FUNC_2(VAR_0) &
     VAR_1);
}
