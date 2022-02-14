
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tcr; unsigned long dec; int dec_timer; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *,scalar_t__) ;
 unsigned long VAR_1 ;

void FUNC_3(struct kvm_vcpu *VAR_2)
{
 if (VAR_2->arch.tcr & VAR_0) {



  unsigned long VAR_3;

  VAR_3 = VAR_2->arch.dec / VAR_1;
  FUNC_2(&VAR_2->arch.dec_timer,
            FUNC_1() + VAR_3);
 } else {
  FUNC_0(&VAR_2->arch.dec_timer);
 }
}
