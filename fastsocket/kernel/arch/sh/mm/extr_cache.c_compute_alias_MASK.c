
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_info {int alias_mask; int sets; int entry_shift; int n_aliases; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct cache_info *VAR_2)
{
 VAR_2->alias_mask = ((VAR_2->sets - 1) << VAR_2->entry_shift) & ~(VAR_1 - 1);
 VAR_2->n_aliases = VAR_2->alias_mask ? (VAR_2->alias_mask >> VAR_0) + 1 : 0;
}
