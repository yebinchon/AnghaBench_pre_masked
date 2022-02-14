
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct map_lookup {int num_stripes; int type; int sub_stripes; int stripe_len; TYPE_2__* stripes; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_stripe {int dev_uuid; } ;
struct TYPE_6__ {int objectid; } ;
struct btrfs_root {int sectorsize; TYPE_3__ root_key; TYPE_1__* fs_info; } ;
struct btrfs_key {int offset; int type; int objectid; } ;
struct btrfs_device {int bytes_used; int uuid; int devid; } ;
struct btrfs_chunk {struct btrfs_stripe stripe; } ;
struct TYPE_5__ {int physical; struct btrfs_device* dev; } ;
struct TYPE_4__ {int free_chunk_space; int free_chunk_lock; struct btrfs_root* chunk_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct btrfs_root*,struct btrfs_key*,struct btrfs_chunk*,size_t) ;
 size_t FUNC_1 (int) ;
 int FUNC_2 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_key*,struct btrfs_chunk*,size_t) ;
 int FUNC_3 (struct btrfs_chunk*,int ) ;
 int FUNC_4 (struct btrfs_chunk*,int ) ;
 int FUNC_5 (struct btrfs_chunk*,int) ;
 int FUNC_6 (struct btrfs_chunk*,int) ;
 int FUNC_7 (struct btrfs_chunk*,int ) ;
 int FUNC_8 (struct btrfs_chunk*,int ) ;
 int FUNC_9 (struct btrfs_chunk*,int ) ;
 int FUNC_10 (struct btrfs_chunk*,int ) ;
 int FUNC_11 (struct btrfs_chunk*,int) ;
 int FUNC_12 (struct btrfs_stripe*,int ) ;
 int FUNC_13 (struct btrfs_stripe*,int) ;
 int FUNC_14 (struct btrfs_trans_handle*,struct btrfs_device*) ;
 int FUNC_15 (struct btrfs_chunk*) ;
 struct btrfs_chunk* FUNC_16 (size_t,int ) ;
 int FUNC_17 (int ,int ,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static int FUNC_20(struct btrfs_trans_handle *VAR_6,
    struct btrfs_root *VAR_7,
    struct map_lookup *VAR_8, u64 VAR_9,
    u64 VAR_10, u64 VAR_11)
{
 u64 VAR_12;
 struct btrfs_key VAR_13;
 struct btrfs_root *VAR_14 = VAR_7->fs_info->chunk_root;
 struct btrfs_device *VAR_15;
 struct btrfs_chunk *VAR_16;
 struct btrfs_stripe *VAR_17;
 size_t VAR_18 = FUNC_1(VAR_8->num_stripes);
 int VAR_19 = 0;
 int VAR_20;

 VAR_16 = FUNC_16(VAR_18, VAR_5);
 if (!VAR_16)
  return -VAR_4;

 VAR_19 = 0;
 while (VAR_19 < VAR_8->num_stripes) {
  VAR_15 = VAR_8->stripes[VAR_19].dev;
  VAR_15->bytes_used += VAR_11;
  VAR_20 = FUNC_14(VAR_6, VAR_15);
  if (VAR_20)
   goto out_free;
  VAR_19++;
 }

 FUNC_18(&VAR_7->fs_info->free_chunk_lock);
 VAR_7->fs_info->free_chunk_space -= (VAR_11 *
         VAR_8->num_stripes);
 FUNC_19(&VAR_7->fs_info->free_chunk_lock);

 VAR_19 = 0;
 VAR_17 = &VAR_16->stripe;
 while (VAR_19 < VAR_8->num_stripes) {
  VAR_15 = VAR_8->stripes[VAR_19].dev;
  VAR_12 = VAR_8->stripes[VAR_19].physical;

  FUNC_12(VAR_17, VAR_15->devid);
  FUNC_13(VAR_17, VAR_12);
  FUNC_17(VAR_17->dev_uuid, VAR_15->uuid, VAR_3);
  VAR_17++;
  VAR_19++;
 }

 FUNC_5(VAR_16, VAR_10);
 FUNC_7(VAR_16, VAR_7->root_key.objectid);
 FUNC_9(VAR_16, VAR_8->stripe_len);
 FUNC_11(VAR_16, VAR_8->type);
 FUNC_6(VAR_16, VAR_8->num_stripes);
 FUNC_3(VAR_16, VAR_8->stripe_len);
 FUNC_4(VAR_16, VAR_8->stripe_len);
 FUNC_8(VAR_16, VAR_7->sectorsize);
 FUNC_10(VAR_16, VAR_8->sub_stripes);

 VAR_13.objectid = VAR_2;
 VAR_13.type = VAR_1;
 VAR_13.offset = VAR_9;

 VAR_20 = FUNC_2(VAR_6, VAR_14, &VAR_13, VAR_16, VAR_18);

 if (VAR_20 == 0 && VAR_8->type & VAR_0) {




  VAR_20 = FUNC_0(VAR_14, &VAR_13, VAR_16,
          VAR_18);
 }

out_free:
 FUNC_15(VAR_16);
 return VAR_20;
}
