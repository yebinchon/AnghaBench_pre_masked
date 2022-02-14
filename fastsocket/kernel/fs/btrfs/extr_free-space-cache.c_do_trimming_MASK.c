
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_space_info {int lock; int bytes_reserved; int bytes_readonly; } ;
struct btrfs_fs_info {int extent_root; } ;
struct btrfs_block_group_cache {int lock; int reserved; scalar_t__ ro; struct btrfs_fs_info* fs_info; struct btrfs_space_info* space_info; } ;


 int FUNC_0 (struct btrfs_block_group_cache*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct btrfs_block_group_cache *VAR_0,
         u64 *VAR_1, u64 VAR_2, u64 VAR_3,
         u64 VAR_4, u64 VAR_5)
{
 struct btrfs_space_info *VAR_6 = VAR_0->space_info;
 struct btrfs_fs_info *VAR_7 = VAR_0->fs_info;
 int VAR_8;
 int VAR_9 = 0;
 u64 VAR_10 = 0;

 FUNC_2(&VAR_6->lock);
 FUNC_2(&VAR_0->lock);
 if (!VAR_0->ro) {
  VAR_0->reserved += VAR_5;
  VAR_6->bytes_reserved += VAR_5;
  VAR_9 = 1;
 }
 FUNC_3(&VAR_0->lock);
 FUNC_3(&VAR_6->lock);

 VAR_8 = FUNC_1(VAR_7->extent_root,
      VAR_2, VAR_3, &VAR_10);
 if (!VAR_8)
  *VAR_1 += VAR_10;

 FUNC_0(VAR_0, VAR_4, VAR_5);

 if (VAR_9) {
  FUNC_2(&VAR_6->lock);
  FUNC_2(&VAR_0->lock);
  if (VAR_0->ro)
   VAR_6->bytes_readonly += VAR_5;
  VAR_0->reserved -= VAR_5;
  VAR_6->bytes_reserved -= VAR_5;
  FUNC_3(&VAR_6->lock);
  FUNC_3(&VAR_0->lock);
 }

 return VAR_8;
}
