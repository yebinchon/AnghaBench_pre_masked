
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_memory_slot {unsigned long* rmap; size_t base_gfn; TYPE_1__** lpage_info; } ;
struct kvm {int dummy; } ;
typedef size_t gfn_t ;
struct TYPE_2__ {unsigned long rmap_pde; } ;


 size_t FUNC_0 (int) ;
 int VAR_0 ;
 struct kvm_memory_slot* FUNC_1 (struct kvm*,size_t) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static unsigned long *FUNC_3(struct kvm *VAR_1, gfn_t VAR_2, int VAR_3)
{
 struct kvm_memory_slot *VAR_4;
 unsigned long VAR_5;

 VAR_4 = FUNC_1(VAR_1, VAR_2);
 if (FUNC_2(VAR_3 == VAR_0))
  return &VAR_4->rmap[VAR_2 - VAR_4->base_gfn];

 VAR_5 = (VAR_2 / FUNC_0(VAR_3)) -
  (VAR_4->base_gfn / FUNC_0(VAR_3));

 return &VAR_4->lpage_info[VAR_3 - 2][VAR_5].rmap_pde;
}
