
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_lapic {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct kvm_lapic*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_lapic*,int) ;

__attribute__((used)) static void FUNC_6(struct kvm_vcpu *VAR_0,
     struct kvm_lapic *VAR_1)
{
 bool VAR_2;
 int VAR_3;
 FUNC_0(!FUNC_3(VAR_0));
 VAR_2 = FUNC_4(VAR_0);





 FUNC_2(VAR_0);
 if (VAR_2)
  return;
 VAR_3 = FUNC_1(VAR_1);
 FUNC_5(VAR_1, VAR_3);
}
