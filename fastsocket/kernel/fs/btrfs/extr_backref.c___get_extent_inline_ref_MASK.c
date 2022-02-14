
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef long u32 ;
struct extent_buffer {int dummy; } ;
struct btrfs_tree_block_info {int dummy; } ;
struct btrfs_extent_item {int dummy; } ;
struct btrfs_extent_inline_ref {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct extent_buffer*,struct btrfs_extent_item*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct extent_buffer*,struct btrfs_extent_inline_ref*) ;

__attribute__((used)) static int FUNC_4(unsigned long *VAR_2, struct extent_buffer *VAR_3,
    struct btrfs_extent_item *VAR_4, u32 VAR_5,
    struct btrfs_extent_inline_ref **VAR_6,
    int *VAR_7)
{
 unsigned long VAR_8;
 u64 VAR_9;
 struct btrfs_tree_block_info *VAR_10;

 if (!*VAR_2) {

  VAR_9 = FUNC_1(VAR_3, VAR_4);
  if (VAR_9 & VAR_0) {
   VAR_10 = (struct btrfs_tree_block_info *)(VAR_4 + 1);
   *VAR_6 =
    (struct btrfs_extent_inline_ref *)(VAR_10 + 1);
  } else {
   *VAR_6 = (struct btrfs_extent_inline_ref *)(VAR_4 + 1);
  }
  *VAR_2 = (unsigned long)*VAR_6;
  if ((void *)*VAR_2 >= (void *)VAR_4 + VAR_5)
   return -VAR_1;
 }

 VAR_8 = (unsigned long)VAR_4 + VAR_5;
 *VAR_6 = (struct btrfs_extent_inline_ref *)*VAR_2;
 *VAR_7 = FUNC_3(VAR_3, *VAR_6);

 *VAR_2 += FUNC_2(*VAR_7);
 FUNC_0(*VAR_2 > VAR_8);
 if (*VAR_2 == VAR_8)
  return 1;

 return 0;
}
