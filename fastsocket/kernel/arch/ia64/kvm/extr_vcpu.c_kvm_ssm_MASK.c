
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct TYPE_4__ {int i; int i2; int imm; } ;
struct TYPE_5__ {TYPE_1__ M44; } ;
typedef TYPE_2__ INST64 ;


 unsigned long FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,unsigned long) ;

void FUNC_2(struct kvm_vcpu *VAR_0, INST64 VAR_1)
{
 unsigned long VAR_2;
 unsigned long VAR_3 = (VAR_1.M44.i << 23) | (VAR_1.M44.i2 << 21)
    | VAR_1.M44.imm;

 VAR_2 = FUNC_0(VAR_0);
 VAR_2 |= VAR_3;
 FUNC_1(VAR_0, VAR_2);
}
