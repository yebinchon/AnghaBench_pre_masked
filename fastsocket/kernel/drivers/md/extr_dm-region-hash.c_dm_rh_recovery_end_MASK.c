
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_region_hash {int context; int (* wakeup_workers ) (int ) ;int region_lock; int failed_recovered_regions; int recovered_regions; } ;
struct dm_region {struct dm_region_hash* rh; int list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct dm_region *VAR_0, int VAR_1)
{
 struct dm_region_hash *VAR_2 = VAR_0->rh;

 FUNC_1(&VAR_2->region_lock);
 if (VAR_1)
  FUNC_0(&VAR_0->list, &VAR_0->rh->recovered_regions);
 else
  FUNC_0(&VAR_0->list, &VAR_0->rh->failed_recovered_regions);

 FUNC_2(&VAR_2->region_lock);

 VAR_2->wakeup_workers(VAR_2->context);
}
