
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct kvm_vcpu {int dummy; } ;
struct descriptor_table {int limit; scalar_t__ base; } ;
struct desc_struct {int dummy; } ;


 int FUNC_0 (struct kvm_vcpu*,int,struct descriptor_table*) ;
 int FUNC_1 (scalar_t__,struct desc_struct*,int,struct kvm_vcpu*,int *) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_0, u16 VAR_1,
      struct desc_struct *VAR_2)
{
 struct descriptor_table VAR_3;
 u16 VAR_4 = VAR_1 >> 3;

 FUNC_0(VAR_0, VAR_1, &VAR_3);

 if (VAR_3.limit < VAR_4 * 8 + 7)
  return 1;
 return FUNC_1(VAR_3.base + VAR_4*8, VAR_2, sizeof(*VAR_2), VAR_0, ((void*)0));
}
