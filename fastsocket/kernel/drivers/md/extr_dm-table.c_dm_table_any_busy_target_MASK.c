
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_target {TYPE_1__* type; } ;
struct dm_table {unsigned int num_targets; struct dm_target* targets; } ;
struct TYPE_2__ {scalar_t__ (* busy ) (struct dm_target*) ;} ;


 scalar_t__ FUNC_0 (struct dm_target*) ;

int FUNC_1(struct dm_table *VAR_0)
{
 unsigned VAR_1;
 struct dm_target *VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_targets; VAR_1++) {
  VAR_2 = VAR_0->targets + VAR_1;
  if (VAR_2->type->busy && VAR_2->type->busy(VAR_2))
   return 1;
 }

 return 0;
}
