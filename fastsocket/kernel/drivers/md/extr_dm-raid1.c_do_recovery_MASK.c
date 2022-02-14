
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mirror_set {int in_sync; scalar_t__ nr_regions; TYPE_2__* ti; int rh; } ;
struct dm_region {int dummy; } ;
struct dm_dirty_log {TYPE_1__* type; } ;
struct TYPE_4__ {int table; } ;
struct TYPE_3__ {scalar_t__ (* get_sync_count ) (struct dm_dirty_log*) ;} ;


 struct dm_dirty_log* FUNC_0 (int ) ;
 int FUNC_1 (struct dm_region*,int ) ;
 int FUNC_2 (int ) ;
 struct dm_region* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mirror_set*,struct dm_region*) ;
 scalar_t__ FUNC_6 (struct dm_dirty_log*) ;

__attribute__((used)) static void FUNC_7(struct mirror_set *VAR_0)
{
 struct dm_region *VAR_1;
 struct dm_dirty_log *VAR_2 = FUNC_0(VAR_0->rh);
 int VAR_3;




 FUNC_2(VAR_0->rh);




 while ((VAR_1 = FUNC_3(VAR_0->rh))) {
  VAR_3 = FUNC_5(VAR_0, VAR_1);
  if (VAR_3)
   FUNC_1(VAR_1, 0);
 }




 if (!VAR_0->in_sync &&
     (VAR_2->type->get_sync_count(VAR_2) == VAR_0->nr_regions)) {

  FUNC_4(VAR_0->ti->table);
  VAR_0->in_sync = 1;
 }
}
