
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct TYPE_4__ {unsigned long imm; scalar_t__ s; } ;
struct TYPE_5__ {TYPE_1__ M30; } ;
typedef TYPE_2__ INST64 ;


 int FUNC_0 (struct kvm_vcpu*,unsigned long) ;

void FUNC_1(struct kvm_vcpu *VAR_0, INST64 VAR_1)
{
 unsigned long VAR_2;

 if (VAR_1.M30.s)
  VAR_2 = -VAR_1.M30.imm;
 else
  VAR_2 = VAR_1.M30.imm;

 FUNC_0(VAR_0, VAR_2);
}
