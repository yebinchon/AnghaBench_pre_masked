
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int apic; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct kvm_vcpu *VAR_3)
{
 u32 VAR_4 = FUNC_1(VAR_3->arch.apic, VAR_0);
 int VAR_5 = 0;

 if (!FUNC_2(VAR_3->arch.apic))
  VAR_5 = 1;
 if ((VAR_4 & VAR_1) == 0 &&
     FUNC_0(VAR_4) == VAR_2)
  VAR_5 = 1;
 return VAR_5;
}
