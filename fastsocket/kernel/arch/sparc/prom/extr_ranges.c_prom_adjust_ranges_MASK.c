
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linux_prom_ranges {scalar_t__ ot_parent_space; scalar_t__ ot_child_space; scalar_t__ ot_parent_base; scalar_t__ ot_child_base; unsigned int or_size; } ;


 int FUNC_0 (char*) ;

void
FUNC_1(struct linux_prom_ranges *VAR_0, int VAR_1,
     struct linux_prom_ranges *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 for(VAR_4=0; VAR_4 < VAR_1; VAR_4++) {
  for(VAR_5=0; VAR_5 < VAR_3; VAR_5++)
   if(VAR_0[VAR_4].ot_parent_space == VAR_2[VAR_5].ot_child_space &&
      VAR_0[VAR_4].ot_parent_base >= VAR_2[VAR_5].ot_child_base &&
      VAR_2[VAR_5].ot_child_base + VAR_2[VAR_5].or_size - VAR_0[VAR_4].ot_parent_base > 0U)
   break;
  if(VAR_5 == VAR_3)
   FUNC_0("adjust_ranges: Could not find matching bus type...\n");
  else if (VAR_0[VAR_4].ot_parent_base + VAR_0[VAR_4].or_size > VAR_2[VAR_5].ot_child_base + VAR_2[VAR_5].or_size)
   VAR_0[VAR_4].or_size =
    VAR_2[VAR_5].ot_child_base + VAR_2[VAR_5].or_size - VAR_0[VAR_4].ot_parent_base;
  VAR_0[VAR_4].ot_parent_space = VAR_2[VAR_5].ot_parent_space;
  VAR_0[VAR_4].ot_parent_base += VAR_2[VAR_5].ot_parent_base;
 }
}
