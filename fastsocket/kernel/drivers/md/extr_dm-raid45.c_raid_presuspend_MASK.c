
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int wq; int dws_do_raid; } ;
struct TYPE_5__ {int rh; struct dm_dirty_log* dl; } ;
struct raid_set {TYPE_3__ io; TYPE_2__ recover; } ;
struct dm_target {struct raid_set* private; } ;
struct dm_dirty_log {TYPE_1__* type; } ;
struct TYPE_4__ {scalar_t__ (* presuspend ) (struct dm_dirty_log*) ;} ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct raid_set*) ;
 int FUNC_2 (struct raid_set*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct dm_dirty_log*) ;
 int FUNC_7 (struct raid_set*) ;

__attribute__((used)) static void FUNC_8(struct dm_target *VAR_0)
{
 struct raid_set *VAR_1 = VAR_0->private;
 struct dm_dirty_log *VAR_2 = VAR_1->recover.dl;

 FUNC_2(VAR_1);

 if (FUNC_1(VAR_1))
  FUNC_4(VAR_1->recover.rh);

 FUNC_3(&VAR_1->io.dws_do_raid);
 FUNC_5(VAR_1->io.wq);
 FUNC_7(VAR_1);

 if (VAR_2->type->presuspend && VAR_2->type->presuspend(VAR_2))

  FUNC_0("log presuspend failed");
}
