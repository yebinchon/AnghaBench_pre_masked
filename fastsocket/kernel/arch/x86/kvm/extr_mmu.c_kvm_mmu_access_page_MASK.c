
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int* last_pte_updated; scalar_t__ last_pte_gfn; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef scalar_t__ gfn_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,unsigned long*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_2, gfn_t VAR_3)
{
 u64 *VAR_4 = VAR_2->arch.last_pte_updated;

 if (VAR_4
     && VAR_2->arch.last_pte_gfn == VAR_3
     && VAR_1
     && !(*VAR_4 & VAR_1)
     && FUNC_0(*VAR_4))
  FUNC_1(VAR_0, (unsigned long *)VAR_4);
}
