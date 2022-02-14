
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int halt_wakeup; } ;
struct kvm_vcpu {TYPE_1__ stat; int wq; } ;


 int FUNC_0 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_0)
{
 struct kvm_vcpu *VAR_1 = (struct kvm_vcpu *)VAR_0;

 FUNC_0(VAR_1);

 if (FUNC_1(&VAR_1->wq)) {
  FUNC_2(&VAR_1->wq);
  VAR_1->stat.halt_wakeup++;
 }
}
