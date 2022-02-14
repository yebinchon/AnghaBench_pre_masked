
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int msr; int pid; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef int gva_t ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,int ,int ,unsigned int) ;

int FUNC_1(struct kvm_vcpu *VAR_1, gva_t VAR_2)
{
 unsigned int VAR_3 = !!(VAR_1->arch.msr & VAR_0);

 return FUNC_0(VAR_1, VAR_2, VAR_1->arch.pid, VAR_3);
}
