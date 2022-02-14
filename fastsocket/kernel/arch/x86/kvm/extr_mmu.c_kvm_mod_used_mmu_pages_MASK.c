
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int n_used_mmu_pages; } ;
struct kvm {TYPE_1__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static inline void FUNC_1(struct kvm *VAR_1, int VAR_2)
{
 VAR_1->arch.n_used_mmu_pages += VAR_2;
 FUNC_0(&VAR_0, VAR_2);
}
