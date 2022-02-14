
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pool_features {scalar_t__ mode; scalar_t__ discard_enabled; scalar_t__ discard_passdown; } ;
struct TYPE_6__ {int congested_fn; } ;
struct pool_c {TYPE_3__ callbacks; struct pool* pool; struct pool_features requested_pf; struct pool_features adjusted_pf; scalar_t__ low_water_blocks; struct dm_dev* data_dev; struct dm_dev* metadata_dev; struct dm_target* ti; } ;
struct TYPE_4__ {scalar_t__ discard_enabled; } ;
struct pool {int pmd; TYPE_1__ pf; } ;
struct dm_target {char* error; int num_flush_requests; int discard_zeroes_data_unsupported; int num_discard_requests; int discards_supported; int table; struct pool_c* private; } ;
struct dm_dev {int bdev; } ;
struct dm_arg_set {unsigned int argc; char** argv; } ;
typedef int fmode_t ;
typedef scalar_t__ dm_block_t ;
struct TYPE_5__ {int mutex; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct pool*) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct pool*) ;
 int FUNC_2 (struct pool*) ;
 struct pool* FUNC_3 (int ,int ,unsigned long,int,char**,int*) ;
 int FUNC_4 (struct pool_c*) ;
 int FUNC_5 (struct dm_arg_set*,int) ;
 int FUNC_6 (struct dm_target*,char*,int,struct dm_dev**) ;
 int FUNC_7 (int ,int ,int ,struct pool*) ;
 int FUNC_8 (struct dm_target*,struct dm_dev*) ;
 int FUNC_9 (int ,TYPE_3__*) ;
 int FUNC_10 (int ) ;
 TYPE_2__ VAR_8 ;
 int FUNC_11 (struct pool_c*) ;
 scalar_t__ FUNC_12 (char*,int,unsigned long*) ;
 scalar_t__ FUNC_13 (char*,int,unsigned long long*) ;
 struct pool_c* FUNC_14 (int,int ) ;
 int VAR_9 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct dm_arg_set*,struct pool_features*,struct dm_target*) ;
 int FUNC_18 (struct pool_features*) ;
 int VAR_10 ;
 int FUNC_19 (int ) ;

__attribute__((used)) static int FUNC_20(struct dm_target *VAR_11, unsigned VAR_12, char **VAR_13)
{
 int VAR_14, VAR_15 = 0;
 struct pool_c *VAR_16;
 struct pool *VAR_17;
 struct pool_features VAR_18;
 struct dm_arg_set VAR_19;
 struct dm_dev *VAR_20;
 unsigned long VAR_21;
 dm_block_t VAR_22;
 struct dm_dev *VAR_23;
 fmode_t VAR_24;




 FUNC_15(&VAR_8.mutex);

 if (VAR_12 < 4) {
  VAR_11->error = "Invalid argument count";
  VAR_14 = -VAR_2;
  goto out_unlock;
 }

 VAR_19.argc = VAR_12;
 VAR_19.argv = VAR_13;




 FUNC_18(&VAR_18);

 FUNC_5(&VAR_19, 4);
 VAR_14 = FUNC_17(&VAR_19, &VAR_18, VAR_11);
 if (VAR_14)
  goto out_unlock;

 VAR_24 = VAR_4 | ((VAR_18.mode == VAR_7) ? 0 : VAR_5);
 VAR_14 = FUNC_6(VAR_11, VAR_13[0], VAR_24, &VAR_23);
 if (VAR_14) {
  VAR_11->error = "Error opening metadata block device";
  goto out_unlock;
 }
 FUNC_19(VAR_23->bdev);

 VAR_14 = FUNC_6(VAR_11, VAR_13[1], VAR_4 | VAR_5, &VAR_20);
 if (VAR_14) {
  VAR_11->error = "Error getting data device";
  goto out_metadata;
 }

 if (FUNC_12(VAR_13[2], 10, &VAR_21) || !VAR_21 ||
     VAR_21 < VAR_1 ||
     VAR_21 > VAR_0 ||
     VAR_21 & (VAR_1 - 1)) {
  VAR_11->error = "Invalid block size";
  VAR_14 = -VAR_2;
  goto out;
 }

 if (FUNC_13(VAR_13[3], 10, (unsigned long long *)&VAR_22)) {
  VAR_11->error = "Invalid low water mark";
  VAR_14 = -VAR_2;
  goto out;
 }

 VAR_16 = FUNC_14(sizeof(*VAR_16), VAR_6);
 if (!VAR_16) {
  VAR_14 = -VAR_3;
  goto out;
 }

 VAR_17 = FUNC_3(FUNC_10(VAR_11->table), VAR_23->bdev,
      VAR_21, VAR_18.mode == VAR_7, &VAR_11->error, &VAR_15);
 if (FUNC_0(VAR_17)) {
  VAR_14 = FUNC_1(VAR_17);
  goto out_free_pt;
 }







 if (!VAR_15 && VAR_18.discard_enabled != VAR_17->pf.discard_enabled) {
  VAR_11->error = "Discard support cannot be disabled once enabled";
  VAR_14 = -VAR_2;
  goto out_flags_changed;
 }

 VAR_16->pool = VAR_17;
 VAR_16->ti = VAR_11;
 VAR_16->metadata_dev = VAR_23;
 VAR_16->data_dev = VAR_20;
 VAR_16->low_water_blocks = VAR_22;
 VAR_16->adjusted_pf = VAR_16->requested_pf = VAR_18;
 VAR_11->num_flush_requests = 1;






 VAR_11->discard_zeroes_data_unsupported = 1;
 if (VAR_18.discard_enabled && VAR_18.discard_passdown) {
  VAR_11->num_discard_requests = 1;






  VAR_11->discards_supported = 1;
 }
 VAR_11->private = VAR_16;

 VAR_14 = FUNC_7(VAR_16->pool->pmd,
      FUNC_4(VAR_16),
      VAR_9,
      VAR_17);
 if (VAR_14)
  goto out_free_pt;

 VAR_16->callbacks.congested_fn = VAR_10;
 FUNC_9(VAR_11->table, &VAR_16->callbacks);

 FUNC_16(&VAR_8.mutex);

 return 0;

out_flags_changed:
 FUNC_2(VAR_17);
out_free_pt:
 FUNC_11(VAR_16);
out:
 FUNC_8(VAR_11, VAR_20);
out_metadata:
 FUNC_8(VAR_11, VAR_23);
out_unlock:
 FUNC_16(&VAR_8.mutex);

 return VAR_14;
}
