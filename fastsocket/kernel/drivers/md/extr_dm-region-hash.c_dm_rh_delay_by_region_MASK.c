
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_region_hash {int hash_lock; } ;
struct dm_region {int delayed_bios; } ;
struct bio {int dummy; } ;
typedef int region_t ;


 struct dm_region* FUNC_0 (struct dm_region_hash*,int ) ;
 int FUNC_1 (int *,struct bio*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct dm_region_hash *VAR_0,
      struct bio *VAR_1, region_t VAR_2)
{
 struct dm_region *VAR_3;


 FUNC_2(&VAR_0->hash_lock);
 VAR_3 = FUNC_0(VAR_0, VAR_2);
 FUNC_1(&VAR_3->delayed_bios, VAR_1);
 FUNC_3(&VAR_0->hash_lock);
}
