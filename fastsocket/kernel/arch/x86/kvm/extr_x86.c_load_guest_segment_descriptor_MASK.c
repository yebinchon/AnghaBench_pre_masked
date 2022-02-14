
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct kvm_vcpu {int dummy; } ;
struct descriptor_table {int limit; scalar_t__ base; } ;
struct desc_struct {int dummy; } ;
typedef scalar_t__ gva_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*,int,struct descriptor_table*) ;
 int FUNC_1 (struct kvm_vcpu*,scalar_t__,int ) ;
 int FUNC_2 (struct kvm_vcpu*,int ,int) ;
 int FUNC_3 (scalar_t__,struct desc_struct*,int,struct kvm_vcpu*,int *) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_2, u16 VAR_3,
      struct desc_struct *VAR_4)
{
 struct descriptor_table VAR_5;
 u16 VAR_6 = VAR_3 >> 3;
 int VAR_7;
 u32 VAR_8;
 gva_t VAR_9;

 FUNC_0(VAR_2, VAR_3, &VAR_5);

 if (VAR_5.limit < VAR_6 * 8 + 7) {
  FUNC_2(VAR_2, VAR_0, VAR_3 & 0xfffc);
  return 1;
 }
 VAR_9 = VAR_5.base + VAR_6 * 8;
 VAR_7 = FUNC_3(VAR_9, VAR_4, sizeof(*VAR_4),
      VAR_2, &VAR_8);
 if (VAR_7 == VAR_1)
  FUNC_1(VAR_2, VAR_9, VAR_8);

       return VAR_7;
}
