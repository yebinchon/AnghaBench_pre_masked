
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool_c {struct pool* pool; } ;
struct pool {int pmd; int pool_md; int md_dev; } ;
struct dm_target {struct pool_c* private; } ;
typedef scalar_t__ dm_block_t ;


 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (char*,int ,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct pool*,char*,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct dm_target *VAR_1, bool *VAR_2)
{
 int VAR_3;
 struct pool_c *VAR_4 = VAR_1->private;
 struct pool *VAR_5 = VAR_4->pool;
 dm_block_t VAR_6, VAR_7;

 *VAR_2 = 0;

 VAR_6 = FUNC_6(VAR_5->md_dev);

 VAR_3 = FUNC_3(VAR_5->pmd, &VAR_7);
 if (VAR_3) {
  FUNC_0("%s: failed to retrieve metadata device size",
        FUNC_2(VAR_5->pool_md));
  return VAR_3;
 }

 if (VAR_6 < VAR_7) {
  FUNC_0("%s: metadata device (%llu blocks) too small: expected %llu",
        FUNC_2(VAR_5->pool_md),
        VAR_6, VAR_7);
  return -VAR_0;

 } else if (VAR_6 > VAR_7) {
  if (FUNC_4(VAR_5->pmd)) {
   FUNC_0("%s: unable to grow the metadata device until repaired.",
         FUNC_2(VAR_5->pool_md));
   return 0;
  }

  FUNC_8(VAR_5->md_dev);
  FUNC_1("%s: growing the metadata device from %llu to %llu blocks",
         FUNC_2(VAR_5->pool_md),
         VAR_7, VAR_6);
  VAR_3 = FUNC_5(VAR_5->pmd, VAR_6);
  if (VAR_3) {
   FUNC_7(VAR_5, "dm_pool_resize_metadata_dev", VAR_3);
   return VAR_3;
  }

  *VAR_2 = 1;
 }

 return 0;
}
