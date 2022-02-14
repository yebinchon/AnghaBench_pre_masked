
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int kvm; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline void FUNC_3(struct kvm_vcpu *VAR_1)
{
 if (FUNC_2(FUNC_1(VAR_1->kvm)< VAR_0))
  FUNC_0(VAR_1);
}
