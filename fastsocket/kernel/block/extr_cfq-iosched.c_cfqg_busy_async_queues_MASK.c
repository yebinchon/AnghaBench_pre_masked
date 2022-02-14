
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfq_group {TYPE_1__** service_trees; } ;
struct cfq_data {int dummy; } ;
struct TYPE_2__ {int count; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static inline int FUNC_0(struct cfq_data *VAR_3,
     struct cfq_group *VAR_4)
{
 return VAR_4->service_trees[VAR_2][VAR_0].count
  + VAR_4->service_trees[VAR_1][VAR_0].count;
}
