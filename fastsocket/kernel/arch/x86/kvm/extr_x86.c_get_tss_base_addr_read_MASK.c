
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_vcpu {int dummy; } ;
struct desc_struct {int dummy; } ;
typedef int gpa_t ;


 int FUNC_0 (struct desc_struct*) ;
 int FUNC_1 (struct kvm_vcpu*,int ,int *) ;

__attribute__((used)) static gpa_t FUNC_2(struct kvm_vcpu *VAR_0,
        struct desc_struct *VAR_1)
{
 u32 VAR_2 = FUNC_0(VAR_1);

 return FUNC_1(VAR_0, VAR_2, ((void*)0));
}
