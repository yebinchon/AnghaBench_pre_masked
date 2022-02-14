
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct pool_c {int requested_pf; scalar_t__ low_water_blocks; TYPE_5__* data_dev; TYPE_3__* metadata_dev; struct pool* pool; } ;
struct TYPE_6__ {int error_if_no_space; int discard_passdown; int discard_enabled; int mode; } ;
struct pool {scalar_t__ sectors_per_block; TYPE_1__ pf; int pool_md; int pmd; } ;
struct dm_target {struct pool_c* private; } ;
typedef int status_type_t ;
typedef scalar_t__ dm_block_t ;
struct TYPE_10__ {TYPE_4__* bdev; } ;
struct TYPE_9__ {int bd_dev; } ;
struct TYPE_8__ {TYPE_2__* bdev; } ;
struct TYPE_7__ {int bd_dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ,int) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_2 (struct pool*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__*) ;
 int FUNC_5 (int ,scalar_t__*) ;
 int FUNC_6 (int ,scalar_t__*) ;
 int FUNC_7 (int ,scalar_t__*) ;
 int FUNC_8 (int ,scalar_t__*) ;
 int FUNC_9 (int ,scalar_t__*) ;
 int FUNC_10 (struct dm_target*) ;
 int FUNC_11 (int *,char*,unsigned int,unsigned int) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (struct pool*) ;

__attribute__((used)) static int FUNC_14(struct dm_target *VAR_5, status_type_t VAR_6,
         unsigned VAR_7, char *VAR_8, unsigned VAR_9)
{
 int VAR_10;
 unsigned VAR_11 = 0;
 uint64_t VAR_12;
 dm_block_t VAR_13;
 dm_block_t VAR_14;
 dm_block_t VAR_15;
 dm_block_t VAR_16;
 dm_block_t VAR_17;
 char VAR_18[VAR_0];
 char VAR_19[VAR_0];
 struct pool_c *VAR_20 = VAR_5->private;
 struct pool *VAR_21 = VAR_20->pool;

 switch (VAR_6) {
 case 129:
  if (FUNC_13(VAR_21) == VAR_2) {
   FUNC_0("Fail");
   break;
  }


  if (!(VAR_7 & VAR_1) && !FUNC_10(VAR_5))
   (void) FUNC_2(VAR_21);

  VAR_10 = FUNC_9(VAR_21->pmd, &VAR_12);
  if (VAR_10) {
   FUNC_1("%s: dm_pool_get_metadata_transaction_id returned %d",
         FUNC_3(VAR_21->pool_md), VAR_10);
   goto err;
  }

  VAR_10 = FUNC_6(VAR_21->pmd, &VAR_14);
  if (VAR_10) {
   FUNC_1("%s: dm_pool_get_free_metadata_block_count returned %d",
         FUNC_3(VAR_21->pool_md), VAR_10);
   goto err;
  }

  VAR_10 = FUNC_7(VAR_21->pmd, &VAR_16);
  if (VAR_10) {
   FUNC_1("%s: dm_pool_get_data_dev_size returned %d",
         FUNC_3(VAR_21->pool_md), VAR_10);
   goto err;
  }

  VAR_10 = FUNC_5(VAR_21->pmd, &VAR_13);
  if (VAR_10) {
   FUNC_1("%s: dm_pool_get_free_block_count returned %d",
         FUNC_3(VAR_21->pool_md), VAR_10);
   goto err;
  }

  VAR_10 = FUNC_4(VAR_21->pmd, &VAR_15);
  if (VAR_10) {
   FUNC_1("%s: dm_pool_get_data_dev_size returned %d",
         FUNC_3(VAR_21->pool_md), VAR_10);
   goto err;
  }

  VAR_10 = FUNC_8(VAR_21->pmd, &VAR_17);
  if (VAR_10) {
   FUNC_1("%s: dm_pool_get_metadata_snap returned %d",
         FUNC_3(VAR_21->pool_md), VAR_10);
   goto err;
  }

  FUNC_0("%llu %llu/%llu %llu/%llu ",
         (unsigned long long)VAR_12,
         (unsigned long long)(VAR_16 - VAR_14),
         (unsigned long long)VAR_16,
         (unsigned long long)(VAR_15 - VAR_13),
         (unsigned long long)VAR_15);

  if (VAR_17)
   FUNC_0("%llu ", VAR_17);
  else
   FUNC_0("- ");

  if (VAR_21->pf.mode == VAR_3)
   FUNC_0("out_of_data_space ");
  else if (VAR_21->pf.mode == VAR_4)
   FUNC_0("ro ");
  else
   FUNC_0("rw ");

  if (!VAR_21->pf.discard_enabled)
   FUNC_0("ignore_discard ");
  else if (VAR_21->pf.discard_passdown)
   FUNC_0("discard_passdown ");
  else
   FUNC_0("no_discard_passdown ");

  if (VAR_21->pf.error_if_no_space)
   FUNC_0("error_if_no_space ");
  else
   FUNC_0("queue_if_no_space ");

  break;

 case 128:
  FUNC_0("%s %s %lu %llu ",
         FUNC_12(VAR_18, VAR_20->metadata_dev->bdev->bd_dev),
         FUNC_12(VAR_19, VAR_20->data_dev->bdev->bd_dev),
         (unsigned long)VAR_21->sectors_per_block,
         (unsigned long long)VAR_20->low_water_blocks);
  FUNC_11(&VAR_20->requested_pf, VAR_8, VAR_11, VAR_9);
  break;
 }

 return 0;

err:
 FUNC_0("Error");
 return 0;
}
