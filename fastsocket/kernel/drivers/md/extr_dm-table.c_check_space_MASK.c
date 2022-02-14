
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_table {int num_targets; int num_allocated; } ;


 int FUNC_0 (struct dm_table*,int) ;

__attribute__((used)) static inline int FUNC_1(struct dm_table *VAR_0)
{
 if (VAR_0->num_targets >= VAR_0->num_allocated)
  return FUNC_0(VAR_0, VAR_0->num_allocated * 2);

 return 0;
}
