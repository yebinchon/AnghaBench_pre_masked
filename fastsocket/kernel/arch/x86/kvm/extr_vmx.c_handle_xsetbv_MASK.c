
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*,int ,int ) ;
 int FUNC_3 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_1)
{
 u64 VAR_2 = FUNC_0(VAR_1);
 u32 VAR_3 = FUNC_1(VAR_1, VAR_0);

 if (FUNC_2(VAR_1, VAR_3, VAR_2) == 0)
  FUNC_3(VAR_1);
 return 1;
}
