
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_3)
{
 if (!FUNC_0(VAR_3, VAR_1))
  return 0;

 if (FUNC_2(VAR_3) & VAR_2)
  return 3;

 return FUNC_1(VAR_0) & 3;
}
