
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ virtual_tsc_khz; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;

u64 FUNC_1(struct kvm_vcpu *VAR_1)
{
 if (VAR_1->arch.virtual_tsc_khz)
  return VAR_1->arch.virtual_tsc_khz;
 else
  return FUNC_0(VAR_0);
}
