
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_target {TYPE_1__* type; } ;
struct dm_table {int num_targets; struct dm_target* targets; } ;
struct TYPE_2__ {int (* presuspend ) (struct dm_target*) ;int (* postsuspend ) (struct dm_target*) ;} ;


 int FUNC_0 (struct dm_target*) ;
 int FUNC_1 (struct dm_target*) ;

__attribute__((used)) static void FUNC_2(struct dm_table *VAR_0, unsigned VAR_1)
{
 int VAR_2 = VAR_0->num_targets;
 struct dm_target *VAR_3 = VAR_0->targets;

 while (VAR_2--) {
  if (VAR_1) {
   if (VAR_3->type->postsuspend)
    VAR_3->type->postsuspend(VAR_3);
  } else if (VAR_3->type->presuspend)
   VAR_3->type->presuspend(VAR_3);

  VAR_3++;
 }
}
