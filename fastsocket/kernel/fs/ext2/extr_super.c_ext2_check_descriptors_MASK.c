
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ext2_sb_info {int s_groups_count; int s_itb_per_group; TYPE_1__* s_es; } ;
struct ext2_group_desc {int bg_inode_table; int bg_inode_bitmap; int bg_block_bitmap; } ;
typedef int ext2_fsblk_t ;
struct TYPE_2__ {int s_blocks_count; } ;


 int FUNC_0 (struct super_block*) ;
 struct ext2_sb_info* FUNC_1 (struct super_block*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct super_block*,char*,char*,int,unsigned long) ;
 struct ext2_group_desc* FUNC_4 (struct super_block*,int,int *) ;
 int FUNC_5 (struct super_block*,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct super_block *VAR_0)
{
 int VAR_1;
 struct ext2_sb_info *VAR_2 = FUNC_1(VAR_0);

 FUNC_2 ("Checking group descriptors");

 for (VAR_1 = 0; VAR_1 < VAR_2->s_groups_count; VAR_1++) {
  struct ext2_group_desc *VAR_3 = FUNC_4(VAR_0, VAR_1, ((void*)0));
  ext2_fsblk_t VAR_4 = FUNC_5(VAR_0, VAR_1);
  ext2_fsblk_t VAR_5;

  if (VAR_1 == VAR_2->s_groups_count - 1)
   VAR_5 = FUNC_6(VAR_2->s_es->s_blocks_count) - 1;
  else
   VAR_5 = VAR_4 +
    (FUNC_0(VAR_0) - 1);

  if (FUNC_6(VAR_3->bg_block_bitmap) < VAR_4 ||
      FUNC_6(VAR_3->bg_block_bitmap) > VAR_5)
  {
   FUNC_3 (VAR_0, "ext2_check_descriptors",
        "Block bitmap for group %d"
        " not in group (block %lu)!",
        VAR_1, (unsigned long) FUNC_6(VAR_3->bg_block_bitmap));
   return 0;
  }
  if (FUNC_6(VAR_3->bg_inode_bitmap) < VAR_4 ||
      FUNC_6(VAR_3->bg_inode_bitmap) > VAR_5)
  {
   FUNC_3 (VAR_0, "ext2_check_descriptors",
        "Inode bitmap for group %d"
        " not in group (block %lu)!",
        VAR_1, (unsigned long) FUNC_6(VAR_3->bg_inode_bitmap));
   return 0;
  }
  if (FUNC_6(VAR_3->bg_inode_table) < VAR_4 ||
      FUNC_6(VAR_3->bg_inode_table) + VAR_2->s_itb_per_group - 1 >
      VAR_5)
  {
   FUNC_3 (VAR_0, "ext2_check_descriptors",
        "Inode table for group %d"
        " not in group (block %lu)!",
        VAR_1, (unsigned long) FUNC_6(VAR_3->bg_inode_table));
   return 0;
  }
 }
 return 1;
}
