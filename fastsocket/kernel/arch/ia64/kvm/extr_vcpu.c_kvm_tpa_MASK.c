
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct TYPE_4__ {int r1; int r3; } ;
struct TYPE_5__ {TYPE_1__ M46; } ;
typedef TYPE_2__ INST64 ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (struct kvm_vcpu*,int ,unsigned long,int ) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*,unsigned long,unsigned long*) ;

int FUNC_3(struct kvm_vcpu *VAR_2, INST64 VAR_3)
{
 unsigned long VAR_4, VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_3.M46.r3);

 if (FUNC_2(VAR_2, VAR_5, &VAR_4))
  return VAR_0;

 FUNC_1(VAR_2, VAR_3.M46.r1, VAR_4, 0);
 return(VAR_1);
}
