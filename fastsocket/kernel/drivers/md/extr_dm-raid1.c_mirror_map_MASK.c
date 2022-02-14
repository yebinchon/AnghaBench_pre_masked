
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union map_info {struct dm_raid1_read_record* ptr; int ll; } ;
struct mirror_set {int read_record_pool; int rh; } ;
struct mirror {int dummy; } ;
struct dm_target {struct mirror_set* private; } ;
struct dm_raid1_read_record {struct mirror* m; int details; } ;
struct dm_dirty_log {TYPE_1__* type; } ;
struct bio {int bi_sector; } ;
struct TYPE_2__ {int (* in_sync ) (struct dm_dirty_log*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bio*) ;
 struct mirror* FUNC_1 (struct mirror_set*,int ) ;
 int FUNC_2 (int *,struct bio*) ;
 int FUNC_3 (int ,struct bio*) ;
 struct dm_dirty_log* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct dm_raid1_read_record*) ;
 int FUNC_6 (struct mirror*,struct bio*) ;
 struct dm_raid1_read_record* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct mirror_set*,struct bio*,int) ;
 int FUNC_9 (struct dm_dirty_log*,int ,int ) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct dm_target *VAR_7, struct bio *VAR_8,
        union map_info *VAR_9)
{
 int VAR_10, VAR_11 = FUNC_0(VAR_8);
 struct mirror *VAR_12;
 struct mirror_set *VAR_13 = VAR_7->private;
 struct dm_raid1_read_record *VAR_14 = ((void*)0);
 struct dm_dirty_log *VAR_15 = FUNC_4(VAR_13->rh);

 if (VAR_11 == VAR_6) {

  VAR_9->ll = FUNC_3(VAR_13->rh, VAR_8);
  FUNC_8(VAR_13, VAR_8, VAR_11);
  return VAR_1;
 }

 VAR_10 = VAR_15->type->in_sync(VAR_15, FUNC_3(VAR_13->rh, VAR_8), 0);
 if (VAR_10 < 0 && VAR_10 != -VAR_3)
  return VAR_10;




 if (!VAR_10 || (VAR_10 == -VAR_3)) {
  if (VAR_11 == VAR_5)
   return -VAR_3;

  FUNC_8(VAR_13, VAR_8, VAR_11);
  return VAR_1;
 }





 VAR_12 = FUNC_1(VAR_13, VAR_8->bi_sector);
 if (FUNC_10(!VAR_12))
  return -VAR_2;

 VAR_14 = FUNC_7(VAR_13->read_record_pool, VAR_4);
 if (FUNC_5(VAR_14)) {
  FUNC_2(&VAR_14->details, VAR_8);
  VAR_9->ptr = VAR_14;
  VAR_14->m = VAR_12;
 }

 FUNC_6(VAR_12, VAR_8);

 return VAR_0;
}
