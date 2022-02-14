
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct TYPE_4__ {int r2; int r3; } ;
struct TYPE_5__ {TYPE_1__ M45; } ;
typedef TYPE_2__ INST64 ;


 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (struct kvm_vcpu*,int ) ;
 int FUNC_2 (struct kvm_vcpu*,unsigned long,int ) ;

void FUNC_3(struct kvm_vcpu *VAR_0, INST64 VAR_1)
{
 unsigned long VAR_2, VAR_3;

 VAR_2 = FUNC_1(VAR_0, VAR_1.M45.r3);
 VAR_3 = FUNC_1(VAR_0, VAR_1.M45.r2);
 FUNC_2(VAR_0, VAR_2, FUNC_0(VAR_3));
}
