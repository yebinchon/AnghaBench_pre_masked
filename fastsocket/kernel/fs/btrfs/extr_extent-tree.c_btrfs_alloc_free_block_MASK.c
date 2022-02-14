
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int fs_info; } ;
struct btrfs_key {int offset; int objectid; } ;
struct btrfs_disk_key {int dummy; } ;
struct btrfs_delayed_extent_op {int update_key; int update_flags; scalar_t__ is_data; int flags_to_set; int key; } ;
typedef struct extent_buffer btrfs_block_rsv ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 struct extent_buffer* FUNC_1 (struct extent_buffer*) ;
 struct extent_buffer* FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (struct extent_buffer*) ;
 int FUNC_4 (int ,struct btrfs_trans_handle*,int ,int ,int ,int ,int,int ,struct btrfs_delayed_extent_op*,int ) ;
 struct extent_buffer* FUNC_5 (struct btrfs_trans_handle*,struct btrfs_root*,int ,int ,int) ;
 int FUNC_6 (struct btrfs_trans_handle*,struct btrfs_root*,int ,int ,int ,int ,struct btrfs_key*,int ) ;
 struct btrfs_delayed_extent_op* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,struct btrfs_disk_key*,int) ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (int ,struct extent_buffer*,int ) ;
 struct extent_buffer* FUNC_11 (struct btrfs_trans_handle*,struct btrfs_root*,int ) ;

struct extent_buffer *FUNC_12(struct btrfs_trans_handle *VAR_5,
     struct btrfs_root *VAR_6, u32 VAR_7,
     u64 VAR_8, u64 VAR_9,
     struct btrfs_disk_key *VAR_10, int VAR_11,
     u64 VAR_12, u64 VAR_13)
{
 struct btrfs_key VAR_14;
 struct btrfs_block_rsv *VAR_15;
 struct extent_buffer *VAR_16;
 u64 VAR_17 = 0;
 int VAR_18;


 VAR_15 = FUNC_11(VAR_5, VAR_6, VAR_7);
 if (FUNC_3(VAR_15))
  return FUNC_1(VAR_15);

 VAR_18 = FUNC_6(VAR_5, VAR_6, VAR_7, VAR_7,
       VAR_13, VAR_12, &VAR_14, 0);
 if (VAR_18) {
  FUNC_10(VAR_6->fs_info, VAR_15, VAR_7);
  return FUNC_2(VAR_18);
 }

 VAR_16 = FUNC_5(VAR_5, VAR_6, VAR_14.objectid,
        VAR_7, VAR_11);
 FUNC_0(FUNC_3(VAR_16));

 if (VAR_9 == VAR_3) {
  if (VAR_8 == 0)
   VAR_8 = VAR_14.objectid;
  VAR_17 |= VAR_1;
 } else
  FUNC_0(VAR_8 > 0);

 if (VAR_9 != VAR_2) {
  struct btrfs_delayed_extent_op *VAR_19;
  VAR_19 = FUNC_7(sizeof(*VAR_19), VAR_4);
  FUNC_0(!VAR_19);
  if (VAR_10)
   FUNC_8(&VAR_19->key, VAR_10, sizeof(VAR_19->key));
  else
   FUNC_9(&VAR_19->key, 0, sizeof(VAR_19->key));
  VAR_19->flags_to_set = VAR_17;
  VAR_19->update_key = 1;
  VAR_19->update_flags = 1;
  VAR_19->is_data = 0;

  VAR_18 = FUNC_4(VAR_6->fs_info, VAR_5,
     VAR_14.objectid,
     VAR_14.offset, VAR_8, VAR_9,
     VAR_11, VAR_0,
     VAR_19, 0);
  FUNC_0(VAR_18);
 }
 return VAR_16;
}
