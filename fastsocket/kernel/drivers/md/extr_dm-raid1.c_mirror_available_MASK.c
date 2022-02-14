
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mirror_set {int rh; } ;
struct dm_dirty_log {TYPE_1__* type; } ;
struct bio {int bi_sector; } ;
typedef int region_t ;
struct TYPE_2__ {scalar_t__ (* in_sync ) (struct dm_dirty_log*,int ,int ) ;} ;


 scalar_t__ FUNC_0 (struct mirror_set*,int ) ;
 int FUNC_1 (int ,struct bio*) ;
 struct dm_dirty_log* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct dm_dirty_log*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct mirror_set *VAR_0, struct bio *VAR_1)
{
 struct dm_dirty_log *VAR_2 = FUNC_2(VAR_0->rh);
 region_t VAR_3 = FUNC_1(VAR_0->rh, VAR_1);

 if (VAR_2->type->in_sync(VAR_2, VAR_3, 0))
  return FUNC_0(VAR_0, VAR_1->bi_sector) ? 1 : 0;

 return 0;
}
