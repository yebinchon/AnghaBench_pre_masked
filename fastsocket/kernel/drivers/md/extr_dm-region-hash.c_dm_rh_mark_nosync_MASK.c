
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_region_hash {int flush_failure; int region_lock; int hash_lock; struct dm_dirty_log* log; } ;
struct dm_region {scalar_t__ state; int list; } ;
struct dm_dirty_log {TYPE_1__* type; } ;
struct bio {int bi_rw; } ;
typedef int region_t ;
struct TYPE_2__ {int (* set_region_sync ) (struct dm_dirty_log*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct dm_region* FUNC_1 (struct dm_region_hash*,int ) ;
 int FUNC_2 (struct dm_region*,int ) ;
 int FUNC_3 (struct dm_region_hash*,struct bio*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct dm_dirty_log*,int ,int ) ;

void FUNC_10(struct dm_region_hash *VAR_4, struct bio *VAR_5)
{
 unsigned long VAR_6;
 struct dm_dirty_log *VAR_7 = VAR_4->log;
 struct dm_region *VAR_8;
 region_t VAR_9 = FUNC_3(VAR_4, VAR_5);
 int VAR_10 = 0;

 if (VAR_5->bi_rw & VAR_1) {
  VAR_4->flush_failure = 1;
  return;
 }

 if (VAR_5->bi_rw & VAR_0)
  return;


 VAR_7->type->set_region_sync(VAR_7, VAR_9, 0);

 FUNC_5(&VAR_4->hash_lock);
 VAR_8 = FUNC_1(VAR_4, VAR_9);
 FUNC_6(&VAR_4->hash_lock);


 FUNC_0(!VAR_8);
 FUNC_0(!FUNC_4(&VAR_8->list));

 FUNC_7(&VAR_4->region_lock, VAR_6);







 VAR_10 = (VAR_8->state == VAR_3);
 VAR_8->state = VAR_2;
 FUNC_0(!FUNC_4(&VAR_8->list));
 FUNC_8(&VAR_4->region_lock, VAR_6);

 if (VAR_10)
  FUNC_2(VAR_8, 0);
}
