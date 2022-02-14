
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_4__ {scalar_t__ msr_val; } ;
struct TYPE_5__ {TYPE_1__ pv_eoi; } ;
struct TYPE_6__ {TYPE_2__ arch; } ;


 int FUNC_0 (char*,unsigned long long) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*,int*) ;
 TYPE_3__* VAR_0 ;

__attribute__((used)) static bool FUNC_2(struct kvm_vcpu *VAR_1)
{
 u8 VAR_2;
 if (FUNC_1(VAR_1, &VAR_2) < 0)
  FUNC_0("Can't read EOI MSR value: 0x%llx\n",
      (unsigned long long)VAR_0->arch.pv_eoi.msr_val);
 return VAR_2 & 0x1;
}
