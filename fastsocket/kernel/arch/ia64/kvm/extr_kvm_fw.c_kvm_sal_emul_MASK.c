
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sal_ret_values {int dummy; } ;
struct kvm_vcpu {int kvm; } ;


 int FUNC_0 (struct kvm_vcpu*,int *,int *,int *,int *,int *,int *,int *,int *) ;
 struct sal_ret_values FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct kvm_vcpu*,struct sal_ret_values) ;

void FUNC_3(struct kvm_vcpu *VAR_0)
{

 struct sal_ret_values VAR_1;
 u64 VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

 FUNC_0(VAR_0, &VAR_2, &VAR_3, &VAR_4,
   &VAR_5, &VAR_6, &VAR_7, &VAR_8, &VAR_9);
 VAR_1 = FUNC_1(VAR_0->kvm, VAR_2, VAR_3, VAR_4, VAR_5,
     VAR_6, VAR_7, VAR_8, VAR_9);
 FUNC_2(VAR_0, VAR_1);
}
