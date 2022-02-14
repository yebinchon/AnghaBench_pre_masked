
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_mem_aliases {int naliases; struct kvm_mem_alias* aliases; } ;
struct kvm_mem_alias {scalar_t__ base_gfn; scalar_t__ npages; scalar_t__ target_gfn; } ;
struct TYPE_2__ {int aliases; } ;
struct kvm {TYPE_1__ arch; } ;
typedef scalar_t__ gfn_t ;


 struct kvm_mem_aliases* FUNC_0 (int ) ;

gfn_t FUNC_1(struct kvm *VAR_0, gfn_t VAR_1)
{
 int VAR_2;
 struct kvm_mem_alias *VAR_3;
 struct kvm_mem_aliases *VAR_4;

 VAR_4 = FUNC_0(VAR_0->arch.aliases);

 for (VAR_2 = 0; VAR_2 < VAR_4->naliases; ++VAR_2) {
  VAR_3 = &VAR_4->aliases[VAR_2];
  if (VAR_1 >= VAR_3->base_gfn
      && VAR_1 < VAR_3->base_gfn + VAR_3->npages)
   return VAR_3->target_gfn + VAR_1 - VAR_3->base_gfn;
 }
 return VAR_1;
}
