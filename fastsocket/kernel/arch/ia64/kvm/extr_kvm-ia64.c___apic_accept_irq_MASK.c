
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct vpd {int * irr; } ;
struct TYPE_2__ {int irq_new_pending; int vpd; } ;
struct kvm_vcpu {TYPE_1__ arch; int kvm; } ;


 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (int ,int *) ;
 struct vpd* FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_0, uint64_t VAR_1)
{
 struct vpd *VAR_2 = FUNC_2(VAR_0->kvm, VAR_0->arch.vpd);

 if (!FUNC_1(VAR_1, &VAR_2->irr[0])) {
  VAR_0->arch.irq_new_pending = 1;
  FUNC_0(VAR_0);
  return 1;
 }
 return 0;
}
