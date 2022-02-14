
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ vpd; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 struct kvm_vcpu* VAR_1 ;
 int FUNC_0 (int ,unsigned long,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 () ;

int FUNC_6(void)
{
 struct kvm_vcpu *VAR_2;
 VAR_2 = VAR_1;

 FUNC_0(VAR_0, (unsigned long)VAR_2->arch.vpd,
      0, 0, 0, 0, 0, 0);
 FUNC_4(VAR_2);
 FUNC_3(VAR_2);
 FUNC_1(VAR_2);
 FUNC_2(VAR_2);
 FUNC_5();

 return 0;
}
