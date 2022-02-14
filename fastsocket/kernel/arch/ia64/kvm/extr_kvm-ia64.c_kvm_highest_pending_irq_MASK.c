
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpd {unsigned long* irr; } ;
struct TYPE_2__ {int vpd; } ;
struct kvm_vcpu {TYPE_1__ arch; int kvm; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int*) ;
 struct vpd* FUNC_1 (int ,int ) ;

int FUNC_2(struct kvm_vcpu *VAR_2)
{
    struct vpd *VAR_3 = FUNC_1(VAR_2->kvm, VAR_2->arch.vpd);

    if (VAR_3->irr[0] & (1UL << VAR_1))
  return VAR_1;
    if (VAR_3->irr[0] & (1UL << VAR_0))
  return VAR_0;

    return FUNC_0((int *)&VAR_3->irr[0]);
}
