
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int kvm; } ;
typedef int gva_t ;
typedef int gpa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct kvm_vcpu*,int ,int *) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*,int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool FUNC_4(struct kvm_vcpu *VAR_3, gva_t VAR_4)
{
 gpa_t VAR_5;

 if (VAR_2)
  return 0;





 if (FUNC_3(VAR_3, VAR_4))
  return 1;

 VAR_5 = FUNC_2(VAR_3, VAR_4, ((void*)0));

 if (VAR_5 == VAR_1)
  return 1;

 if (!FUNC_1(FUNC_0(VAR_3->kvm, VAR_5 >> VAR_0)))
  return 1;

 return 0;
}
