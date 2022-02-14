
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; } ;
struct cfq_group {TYPE_2__** service_trees; TYPE_1__ service_tree_idle; } ;
struct cfq_data {int dummy; } ;
typedef enum wl_prio_t { ____Placeholder_wl_prio_t } wl_prio_t ;
struct TYPE_4__ {int count; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static inline int FUNC_0(enum wl_prio_t VAR_4,
     struct cfq_data *VAR_5,
     struct cfq_group *VAR_6)
{
 if (VAR_4 == VAR_1)
  return VAR_6->service_tree_idle.count;

 return VAR_6->service_trees[VAR_4][VAR_0].count
  + VAR_6->service_trees[VAR_4][VAR_2].count
  + VAR_6->service_trees[VAR_4][VAR_3].count;
}
