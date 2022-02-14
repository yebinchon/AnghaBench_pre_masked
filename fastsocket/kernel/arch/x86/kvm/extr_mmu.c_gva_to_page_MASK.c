
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct kvm_vcpu {int kvm; } ;
typedef int gva_t ;
typedef int gpa_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_0 (int ,int) ;
 int FUNC_1 (struct kvm_vcpu*,int ,int *) ;

struct page *FUNC_2(struct kvm_vcpu *VAR_2, gva_t VAR_3)
{
 struct page *VAR_4;

 gpa_t VAR_5 = FUNC_1(VAR_2, VAR_3, ((void*)0));

 if (VAR_5 == VAR_1)
  return ((void*)0);

 VAR_4 = FUNC_0(VAR_2->kvm, VAR_5 >> VAR_0);

 return VAR_4;
}
