
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct thin_c {TYPE_4__* origin_dev; scalar_t__ dev_id; TYPE_2__* pool_dev; TYPE_5__* pool; int td; } ;
struct dm_target {struct thin_c* private; } ;
typedef int status_type_t ;
typedef int ssize_t ;
typedef int dm_block_t ;
struct TYPE_10__ {int sectors_per_block; } ;
struct TYPE_9__ {TYPE_3__* bdev; } ;
struct TYPE_8__ {int bd_dev; } ;
struct TYPE_7__ {TYPE_1__* bdev; } ;
struct TYPE_6__ {int bd_dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ VAR_1 ;


 int FUNC_2 (int ,int*) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_6(struct dm_target *VAR_2, status_type_t VAR_3,
         char *VAR_4, unsigned VAR_5)
{
 int VAR_6;
 ssize_t VAR_7 = 0;
 dm_block_t VAR_8, VAR_9;
 char VAR_10[VAR_0];
 struct thin_c *VAR_11 = VAR_2->private;

 if (FUNC_5(VAR_11->pool) == VAR_1) {
  FUNC_0("Fail");
  return 0;
 }

 if (!VAR_11->td)
  FUNC_0("-");
 else {
  switch (VAR_3) {
  case 129:
   VAR_6 = FUNC_3(VAR_11->td, &VAR_8);
   if (VAR_6) {
    FUNC_1("dm_thin_get_mapped_count returned %d", VAR_6);
    goto err;
   }

   VAR_6 = FUNC_2(VAR_11->td, &VAR_9);
   if (VAR_6 < 0) {
    FUNC_1("dm_thin_get_highest_mapped_block returned %d", VAR_6);
    goto err;
   }

   FUNC_0("%llu ", VAR_8 * VAR_11->pool->sectors_per_block);
   if (VAR_6)
    FUNC_0("%llu", ((VAR_9 + 1) *
      VAR_11->pool->sectors_per_block) - 1);
   else
    FUNC_0("-");
   break;

  case 128:
   FUNC_0("%s %lu",
          FUNC_4(VAR_10, VAR_11->pool_dev->bdev->bd_dev),
          (unsigned long) VAR_11->dev_id);
   if (VAR_11->origin_dev)
    FUNC_0(" %s", FUNC_4(VAR_10, VAR_11->origin_dev->bdev->bd_dev));
   break;
  }
 }

 return 0;

err:
 FUNC_0("Error");
 return 0;
}
