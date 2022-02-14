
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfq_rb_root {int dummy; } ;
struct cfq_group {struct cfq_rb_root** service_trees; struct cfq_rb_root service_tree_idle; } ;
typedef enum wl_type_t { ____Placeholder_wl_type_t } wl_type_t ;
typedef enum wl_prio_t { ____Placeholder_wl_prio_t } wl_prio_t ;


 int VAR_0 ;

__attribute__((used)) static struct cfq_rb_root *FUNC_0(struct cfq_group *VAR_1,
         enum wl_prio_t VAR_2,
         enum wl_type_t VAR_3)
{
 if (!VAR_1)
  return ((void*)0);

 if (VAR_2 == VAR_0)
  return &VAR_1->service_tree_idle;

 return &VAR_1->service_trees[VAR_2][VAR_3];
}
