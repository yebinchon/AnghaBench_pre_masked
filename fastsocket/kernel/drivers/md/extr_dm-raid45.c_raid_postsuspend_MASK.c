
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct dm_dirty_log* dl; } ;
struct raid_set {TYPE_1__ recover; } ;
struct dm_target {struct raid_set* private; } ;
struct dm_dirty_log {TYPE_2__* type; } ;
struct TYPE_4__ {scalar_t__ (* postsuspend ) (struct dm_dirty_log*) ;} ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct dm_dirty_log*) ;

__attribute__((used)) static void FUNC_2(struct dm_target *VAR_0)
{
 struct raid_set *VAR_1 = VAR_0->private;
 struct dm_dirty_log *VAR_2 = VAR_1->recover.dl;

 if (VAR_2->type->postsuspend && VAR_2->type->postsuspend(VAR_2))

  FUNC_0("log postsuspend failed");

}
