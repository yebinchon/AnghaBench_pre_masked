
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int tsc_catchup_mult; int tsc_catchup_shift; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int *,int *) ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_1, u32 VAR_2)
{

 FUNC_0(VAR_2, VAR_0 / 1000,
      &VAR_1->arch.tsc_catchup_shift,
      &VAR_1->arch.tsc_catchup_mult);
}
