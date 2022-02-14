
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long pending_exceptions; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (unsigned long) ;
 unsigned int FUNC_1 (unsigned long*,int,unsigned int) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*,unsigned int) ;

void FUNC_3(struct kvm_vcpu *VAR_2)
{
 unsigned long *VAR_3 = &VAR_2->arch.pending_exceptions;
 unsigned int VAR_4;

 VAR_4 = FUNC_0(*VAR_3);
 while (VAR_4 <= VAR_1) {
  if (FUNC_2(VAR_2, VAR_4))
   break;

  VAR_4 = FUNC_1(VAR_3,
                           VAR_0 * sizeof(*VAR_3),
                           VAR_4 + 1);
 }
}
