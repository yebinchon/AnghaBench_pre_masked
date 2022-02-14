
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {scalar_t__ last_tsc_write; int tsc_catchup_shift; int tsc_catchup_mult; scalar_t__ last_tsc_nsec; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef scalar_t__ s64 ;


 int FUNC_0 (scalar_t__,int ,int ) ;

__attribute__((used)) static u64 FUNC_1(struct kvm_vcpu *VAR_0, s64 VAR_1)
{
 u64 VAR_2 = FUNC_0(VAR_1-VAR_0->arch.last_tsc_nsec,
          VAR_0->arch.tsc_catchup_mult,
          VAR_0->arch.tsc_catchup_shift);
 VAR_2 += VAR_0->arch.last_tsc_write;
 return VAR_2;
}
