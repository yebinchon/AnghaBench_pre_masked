
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_target {TYPE_1__* type; } ;
struct dm_table {int num_targets; struct dm_target* targets; int md; } ;
struct TYPE_2__ {int (* preresume ) (struct dm_target*) ;int (* resume ) (struct dm_target*) ;int name; } ;


 int FUNC_0 (char*,int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dm_target*) ;
 int FUNC_3 (struct dm_target*) ;

int FUNC_4(struct dm_table *VAR_0)
{
 int VAR_1, VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_targets; VAR_1++) {
  struct dm_target *VAR_3 = VAR_0->targets + VAR_1;

  if (!VAR_3->type->preresume)
   continue;

  VAR_2 = VAR_3->type->preresume(VAR_3);
  if (VAR_2) {
   FUNC_0("%s: %s: preresume failed, error = %d",
         FUNC_1(VAR_0->md), VAR_3->type->name, VAR_2);
   return VAR_2;
  }
 }

 for (VAR_1 = 0; VAR_1 < VAR_0->num_targets; VAR_1++) {
  struct dm_target *VAR_4 = VAR_0->targets + VAR_1;

  if (VAR_4->type->resume)
   VAR_4->type->resume(VAR_4);
 }

 return 0;
}
