
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dm_region_hash {int hash_lock; int region_lock; int clean_regions; int region_pool; TYPE_2__* log; } ;
struct dm_region {scalar_t__ state; int list; int delayed_bios; int pending; int key; struct dm_region_hash* rh; } ;
typedef int region_t ;
struct TYPE_4__ {TYPE_1__* type; } ;
struct TYPE_3__ {scalar_t__ (* in_sync ) (TYPE_2__*,int ,int) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int FUNC_1 (struct dm_region_hash*,struct dm_region*) ;
 struct dm_region* FUNC_2 (struct dm_region_hash*,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 struct dm_region* FUNC_5 (int,int) ;
 int FUNC_6 (int *,int *) ;
 struct dm_region* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct dm_region*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static struct dm_region *FUNC_15(struct dm_region_hash *VAR_5, region_t VAR_6)
{
 struct dm_region *VAR_7, *VAR_8;

 VAR_8 = FUNC_7(VAR_5->region_pool, VAR_2);
 if (FUNC_12(!VAR_8))
  VAR_8 = FUNC_5(sizeof(*VAR_8), VAR_3 | VAR_4);

 VAR_8->state = VAR_5->log->type->in_sync(VAR_5->log, VAR_6, 1) ?
        VAR_0 : VAR_1;
 VAR_8->rh = VAR_5;
 VAR_8->key = VAR_6;
 FUNC_0(&VAR_8->list);
 FUNC_3(&VAR_8->pending, 0);
 FUNC_4(&VAR_8->delayed_bios);

 FUNC_13(&VAR_5->hash_lock);
 VAR_7 = FUNC_2(VAR_5, VAR_6);
 if (VAR_7)

  FUNC_8(VAR_8, VAR_5->region_pool);
 else {
  FUNC_1(VAR_5, VAR_8);
  if (VAR_8->state == VAR_0) {
   FUNC_9(&VAR_5->region_lock);
   FUNC_6(&VAR_8->list, &VAR_5->clean_regions);
   FUNC_10(&VAR_5->region_lock);
  }

  VAR_7 = VAR_8;
 }
 FUNC_14(&VAR_5->hash_lock);

 return VAR_7;
}
