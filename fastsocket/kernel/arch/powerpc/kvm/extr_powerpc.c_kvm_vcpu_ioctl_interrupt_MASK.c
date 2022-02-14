
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int halt_wakeup; } ;
struct kvm_vcpu {TYPE_1__ stat; int wq; } ;
struct kvm_interrupt {int dummy; } ;


 int FUNC_0 (struct kvm_vcpu*,struct kvm_interrupt*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct kvm_vcpu *VAR_0, struct kvm_interrupt *VAR_1)
{
 FUNC_0(VAR_0, VAR_1);

 if (FUNC_1(&VAR_0->wq)) {
  FUNC_2(&VAR_0->wq);
  VAR_0->stat.halt_wakeup++;
 }

 return 0;
}
