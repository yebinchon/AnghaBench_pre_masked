
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct extent_buffer {int dummy; } ;
struct btrfs_tree_block_info {int dummy; } ;
struct btrfs_extent_item {int dummy; } ;
struct btrfs_extent_inline_ref {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long*,struct extent_buffer*,struct btrfs_extent_item*,int ,struct btrfs_extent_inline_ref**,int*) ;
 int FUNC_1 (struct extent_buffer*,struct btrfs_extent_inline_ref*) ;
 int FUNC_2 (struct extent_buffer*,struct btrfs_tree_block_info*) ;

int FUNC_3(unsigned long *VAR_2, struct extent_buffer *VAR_3,
    struct btrfs_extent_item *VAR_4, u32 VAR_5,
    u64 *VAR_6, u8 *VAR_7)
{
 int VAR_8;
 int VAR_9;
 struct btrfs_tree_block_info *VAR_10;
 struct btrfs_extent_inline_ref *VAR_11;

 if (*VAR_2 == (unsigned long)-1)
  return 1;

 while (1) {
  VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5,
      &VAR_11, &VAR_9);
  if (VAR_8 < 0)
   return VAR_8;

  if (VAR_9 == VAR_1 ||
      VAR_9 == VAR_0)
   break;

  if (VAR_8 == 1)
   return 1;
 }


 VAR_10 = (struct btrfs_tree_block_info *)(VAR_4 + 1);
 *VAR_6 = FUNC_1(VAR_3, VAR_11);
 *VAR_7 = FUNC_2(VAR_3, VAR_10);

 if (VAR_8 == 1)
  *VAR_2 = (unsigned long)-1;

 return 0;
}
