
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int tc_regions; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct kvm_vcpu*,int ,int ) ;
 int FUNC_3 (struct kvm_vcpu*,int ,int ) ;

void FUNC_4(struct kvm_vcpu *VAR_0, u64 VAR_1, u64 VAR_2)
{
 u64 VAR_3 = VAR_1;
 VAR_1 = FUNC_0(VAR_1);
 if (FUNC_1(VAR_0->arch.tc_regions, VAR_3))
  FUNC_3(VAR_0, VAR_1, VAR_2);
 FUNC_2(VAR_0, VAR_1, VAR_2);
}
