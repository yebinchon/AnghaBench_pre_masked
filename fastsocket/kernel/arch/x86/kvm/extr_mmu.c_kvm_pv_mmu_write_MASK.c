
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
typedef int gpa_t ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,int ,int *,int) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_1,
        gpa_t VAR_2, gpa_t VAR_3)
{
 int VAR_4 = 8;
 int VAR_5;

 if (!FUNC_1(VAR_1) && !FUNC_2(VAR_1))
  VAR_4 = 4;

 VAR_5 = FUNC_3(VAR_1);
 if (VAR_5)
  return VAR_5;

 if (!FUNC_0(VAR_1, VAR_2, &VAR_3, VAR_4))
  return -VAR_0;

 return 1;
}
