
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ext3_sb_info {int s_groups_count; int s_itb_per_group; TYPE_1__* s_es; } ;
struct ext3_group_desc {int bg_inode_table; int bg_inode_bitmap; int bg_block_bitmap; } ;
typedef int ext3_fsblk_t ;
struct TYPE_2__ {void* s_free_inodes_count; void* s_free_blocks_count; int s_blocks_count; } ;


 int FUNC_0 (struct super_block*) ;
 struct ext3_sb_info* FUNC_1 (struct super_block*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct super_block*,char*,char*,int,unsigned long) ;
 struct ext3_group_desc* FUNC_7 (struct super_block*,int,int *) ;
 int FUNC_8 (struct super_block*,int) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct super_block *VAR_0)
{
 struct ext3_sb_info *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 FUNC_5 ("Checking group descriptors");

 for (VAR_2 = 0; VAR_2 < VAR_1->s_groups_count; VAR_2++) {
  struct ext3_group_desc *VAR_3 = FUNC_7(VAR_0, VAR_2, ((void*)0));
  ext3_fsblk_t VAR_4 = FUNC_8(VAR_0, VAR_2);
  ext3_fsblk_t VAR_5;

  if (VAR_2 == VAR_1->s_groups_count - 1)
   VAR_5 = FUNC_9(VAR_1->s_es->s_blocks_count) - 1;
  else
   VAR_5 = VAR_4 +
    (FUNC_0(VAR_0) - 1);

  if (FUNC_9(VAR_3->bg_block_bitmap) < VAR_4 ||
      FUNC_9(VAR_3->bg_block_bitmap) > VAR_5)
  {
   FUNC_6 (VAR_0, "ext3_check_descriptors",
        "Block bitmap for group %d"
        " not in group (block %lu)!",
        VAR_2, (unsigned long)
     FUNC_9(VAR_3->bg_block_bitmap));
   return 0;
  }
  if (FUNC_9(VAR_3->bg_inode_bitmap) < VAR_4 ||
      FUNC_9(VAR_3->bg_inode_bitmap) > VAR_5)
  {
   FUNC_6 (VAR_0, "ext3_check_descriptors",
        "Inode bitmap for group %d"
        " not in group (block %lu)!",
        VAR_2, (unsigned long)
     FUNC_9(VAR_3->bg_inode_bitmap));
   return 0;
  }
  if (FUNC_9(VAR_3->bg_inode_table) < VAR_4 ||
      FUNC_9(VAR_3->bg_inode_table) + VAR_1->s_itb_per_group - 1 >
      VAR_5)
  {
   FUNC_6 (VAR_0, "ext3_check_descriptors",
        "Inode table for group %d"
        " not in group (block %lu)!",
        VAR_2, (unsigned long)
     FUNC_9(VAR_3->bg_inode_table));
   return 0;
  }
 }

 VAR_1->s_es->s_free_blocks_count=FUNC_2(FUNC_3(VAR_0));
 VAR_1->s_es->s_free_inodes_count=FUNC_2(FUNC_4(VAR_0));
 return 1;
}
