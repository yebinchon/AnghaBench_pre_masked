
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*,int,int*) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 int FUNC_2 (struct kvm_vcpu*,int ,int) ;

bool FUNC_3(struct kvm_vcpu *VAR_3)
{
 u32 VAR_4 = FUNC_1(VAR_3, VAR_1);
 u64 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_4, &VAR_5);
 if (VAR_6)
  return VAR_6;
 FUNC_2(VAR_3, VAR_0, (u32)VAR_5);
 FUNC_2(VAR_3, VAR_2, VAR_5 >> 32);
 return VAR_6;
}
