
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int fs_info; } ;
struct btrfs_key {scalar_t__ objectid; scalar_t__ offset; } ;
struct btrfs_caching_control {scalar_t__ progress; int mutex; } ;
struct btrfs_block_group_cache {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct btrfs_root*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct btrfs_trans_handle*,struct btrfs_root*,int ,scalar_t__,int ,scalar_t__,scalar_t__,struct btrfs_key*,int) ;
 int FUNC_3 (struct btrfs_block_group_cache*) ;
 struct btrfs_block_group_cache* FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (struct btrfs_block_group_cache*) ;
 int FUNC_6 (struct btrfs_block_group_cache*,scalar_t__,scalar_t__) ;
 int FUNC_7 (struct btrfs_block_group_cache*,scalar_t__,int ) ;
 int FUNC_8 (struct btrfs_block_group_cache*,struct btrfs_trans_handle*,int *,int ) ;
 struct btrfs_caching_control* FUNC_9 (struct btrfs_block_group_cache*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct btrfs_caching_control*) ;

int FUNC_13(struct btrfs_trans_handle *VAR_1,
       struct btrfs_root *VAR_2,
       u64 VAR_3, u64 VAR_4, u64 VAR_5,
       struct btrfs_key *VAR_6)
{
 int VAR_7;
 struct btrfs_block_group_cache *VAR_8;
 struct btrfs_caching_control *VAR_9;
 u64 VAR_10 = VAR_6->objectid;
 u64 VAR_11 = VAR_6->offset;

 VAR_8 = FUNC_4(VAR_2->fs_info, VAR_6->objectid);
 FUNC_8(VAR_8, VAR_1, ((void*)0), 0);
 VAR_9 = FUNC_9(VAR_8);

 if (!VAR_9) {
  FUNC_0(!FUNC_3(VAR_8));
  VAR_7 = FUNC_6(VAR_8, VAR_10, VAR_11);
  FUNC_0(VAR_7);
 } else {
  FUNC_10(&VAR_9->mutex);

  if (VAR_10 >= VAR_9->progress) {
   VAR_7 = FUNC_1(VAR_2, VAR_10, VAR_11);
   FUNC_0(VAR_7);
  } else if (VAR_10 + VAR_11 <= VAR_9->progress) {
   VAR_7 = FUNC_6(VAR_8,
            VAR_10, VAR_11);
   FUNC_0(VAR_7);
  } else {
   VAR_11 = VAR_9->progress - VAR_10;
   VAR_7 = FUNC_6(VAR_8,
            VAR_10, VAR_11);
   FUNC_0(VAR_7);

   VAR_10 = VAR_9->progress;
   VAR_11 = VAR_6->objectid + VAR_6->offset -
        VAR_9->progress;
   VAR_7 = FUNC_1(VAR_2, VAR_10, VAR_11);
   FUNC_0(VAR_7);
  }

  FUNC_11(&VAR_9->mutex);
  FUNC_12(VAR_9);
 }

 VAR_7 = FUNC_7(VAR_8, VAR_6->offset,
       VAR_0);
 FUNC_0(VAR_7);
 FUNC_5(VAR_8);
 VAR_7 = FUNC_2(VAR_1, VAR_2, 0, VAR_3,
      0, VAR_4, VAR_5, VAR_6, 1);
 return VAR_7;
}
