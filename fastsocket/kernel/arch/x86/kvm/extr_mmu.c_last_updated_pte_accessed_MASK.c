
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int* last_pte_updated; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct kvm_vcpu *VAR_1)
{
 u64 *VAR_2 = VAR_1->arch.last_pte_updated;

 return !!(VAR_2 && (*VAR_2 & VAR_0));
}
