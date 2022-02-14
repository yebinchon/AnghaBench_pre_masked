
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int halt_wakeup; } ;
struct kvm_vcpu {int cpu; int requests; TYPE_1__ stat; int wq; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 unsigned int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct kvm_vcpu *VAR_2)
{
 int VAR_3;
 int VAR_4 = VAR_2->cpu;

 if (FUNC_5(&VAR_2->wq)) {
  FUNC_6(&VAR_2->wq);
  ++VAR_2->stat.halt_wakeup;
 }

 VAR_3 = FUNC_1();
 if (VAR_4 != VAR_3 && (unsigned)VAR_4 < VAR_1 && FUNC_0(VAR_4))
  if (!FUNC_4(VAR_0, &VAR_2->requests))
   FUNC_3(VAR_4);
 FUNC_2();
}
