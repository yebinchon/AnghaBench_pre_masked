
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct kvm_vcpu {int dummy; } ;
typedef int gva_t ;
typedef int gpa_t ;



__attribute__((used)) static gpa_t FUNC_0(struct kvm_vcpu *VAR_0, gva_t VAR_1,
      u32 VAR_2, u32 *VAR_3)
{
 if (VAR_3)
  *VAR_3 = 0;
 return VAR_1;
}
