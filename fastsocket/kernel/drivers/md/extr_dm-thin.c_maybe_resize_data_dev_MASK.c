
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool_c {struct pool* pool; } ;
struct pool {int pmd; int pool_md; int sectors_per_block; } ;
struct dm_target {scalar_t__ len; struct pool_c* private; } ;
typedef scalar_t__ sector_t ;
typedef scalar_t__ dm_block_t ;


 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (char*,int ,scalar_t__,unsigned long long) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (struct pool*,char*,int) ;
 int FUNC_7 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_8(struct dm_target *VAR_1, bool *VAR_2)
{
 int VAR_3;
 struct pool_c *VAR_4 = VAR_1->private;
 struct pool *VAR_5 = VAR_4->pool;
 sector_t VAR_6 = VAR_1->len;
 dm_block_t VAR_7;

 *VAR_2 = 0;

 (void) FUNC_7(VAR_6, VAR_5->sectors_per_block);

 VAR_3 = FUNC_3(VAR_5->pmd, &VAR_7);
 if (VAR_3) {
  FUNC_0("%s: failed to retrieve data device size",
        FUNC_2(VAR_5->pool_md));
  return VAR_3;
 }

 if (VAR_6 < VAR_7) {
  FUNC_0("%s: pool target (%llu blocks) too small: expected %llu",
        FUNC_2(VAR_5->pool_md),
        (unsigned long long)VAR_6, VAR_7);
  return -VAR_0;

 } else if (VAR_6 > VAR_7) {
  if (FUNC_4(VAR_5->pmd)) {
   FUNC_0("%s: unable to grow the data device until repaired.",
         FUNC_2(VAR_5->pool_md));
   return 0;
  }

  if (VAR_7)
   FUNC_1("%s: growing the data device from %llu to %llu blocks",
          FUNC_2(VAR_5->pool_md),
          VAR_7, (unsigned long long)VAR_6);
  VAR_3 = FUNC_5(VAR_5->pmd, VAR_6);
  if (VAR_3) {
   FUNC_6(VAR_5, "dm_pool_resize_data_dev", VAR_3);
   return VAR_3;
  }

  *VAR_2 = 1;
 }

 return 0;
}
