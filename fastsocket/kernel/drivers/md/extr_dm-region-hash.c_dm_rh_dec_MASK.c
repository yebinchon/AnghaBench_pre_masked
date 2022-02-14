
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_region_hash {int context; int (* wakeup_workers ) (int ) ;int region_lock; int clean_regions; int quiesced_regions; int flush_failure; int hash_lock; } ;
struct dm_region {scalar_t__ state; int list; int pending; } ;
typedef int region_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct dm_region* FUNC_0 (struct dm_region_hash*,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;

void FUNC_10(struct dm_region_hash *VAR_4, region_t VAR_5)
{
 unsigned long VAR_6;
 struct dm_region *VAR_7;
 int VAR_8 = 0;

 FUNC_4(&VAR_4->hash_lock);
 VAR_7 = FUNC_0(VAR_4, VAR_5);
 FUNC_5(&VAR_4->hash_lock);

 FUNC_6(&VAR_4->region_lock, VAR_6);
 if (FUNC_1(&VAR_7->pending)) {
  if (FUNC_9(VAR_4->flush_failure)) {





   VAR_7->state = VAR_2;
  } else if (VAR_7->state == VAR_3) {
   FUNC_3(&VAR_7->list, &VAR_4->quiesced_regions);
  } else if (VAR_7->state == VAR_1) {
   VAR_7->state = VAR_0;
   FUNC_2(&VAR_7->list, &VAR_4->clean_regions);
  }
  VAR_8 = 1;
 }
 FUNC_7(&VAR_4->region_lock, VAR_6);

 if (VAR_8)
  VAR_4->wakeup_workers(VAR_4->context);
}
