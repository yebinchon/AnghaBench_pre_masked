
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_mem_aliases {int naliases; struct kvm_mem_alias* aliases; } ;
struct kvm_mem_alias {int flags; scalar_t__ base_gfn; scalar_t__ npages; scalar_t__ target_gfn; } ;
struct TYPE_2__ {int aliases; } ;
struct kvm {TYPE_1__ arch; } ;
typedef scalar_t__ gfn_t ;


 int VAR_0 ;
 struct kvm_mem_aliases* FUNC_0 (int ) ;

gfn_t FUNC_1(struct kvm *VAR_1, gfn_t VAR_2)
{
 int VAR_3;
 struct kvm_mem_alias *VAR_4;
 struct kvm_mem_aliases *VAR_5;

 VAR_5 = FUNC_0(VAR_1->arch.aliases);

 for (VAR_3 = 0; VAR_3 < VAR_5->naliases; ++VAR_3) {
  VAR_4 = &VAR_5->aliases[VAR_3];
  if (VAR_4->flags & VAR_0)
   continue;
  if (VAR_2 >= VAR_4->base_gfn
      && VAR_2 < VAR_4->base_gfn + VAR_4->npages)
   return VAR_4->target_gfn + VAR_2 - VAR_4->base_gfn;
 }
 return VAR_2;
}
