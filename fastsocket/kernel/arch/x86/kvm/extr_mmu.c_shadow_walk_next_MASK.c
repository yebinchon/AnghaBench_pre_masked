
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_shadow_walk_iterator {int shadow_addr; int* sptep; int level; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct kvm_shadow_walk_iterator *VAR_1)
{
 VAR_1->shadow_addr = *VAR_1->sptep & VAR_0;
 --VAR_1->level;
}
