
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,unsigned long) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_1)
{
 unsigned long VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 VAR_2 += FUNC_2(VAR_0);
 FUNC_1(VAR_1, VAR_2);


 FUNC_3(VAR_1, 0);
}
