
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ext3_sb_info {scalar_t__ s_groups_count; int s_itb_per_group; int s_resize_lock; TYPE_2__** s_group_desc; TYPE_1__* s_es; } ;
struct ext3_new_group_data {scalar_t__ group; int block_bitmap; int inode_bitmap; int inode_table; int blocks_count; } ;
struct buffer_head {int b_data; int b_size; } ;
typedef struct buffer_head handle_t ;
typedef int ext3_grpblk_t ;
typedef int ext3_fsblk_t ;
struct TYPE_4__ {int b_data; } ;
struct TYPE_3__ {int s_reserved_gdt_blocks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*) ;
 int VAR_2 ;
 struct ext3_sb_info* FUNC_2 (struct super_block*) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 struct buffer_head* FUNC_5 (struct buffer_head*,struct super_block*,int) ;
 int FUNC_6 (struct buffer_head*) ;
 scalar_t__ FUNC_7 (struct super_block*,scalar_t__) ;
 unsigned long FUNC_8 (struct super_block*,scalar_t__) ;
 int FUNC_9 (char*,int,...) ;
 int FUNC_10 (struct super_block*,scalar_t__) ;
 int FUNC_11 (struct buffer_head*,struct buffer_head*) ;
 int FUNC_12 (struct buffer_head*,struct buffer_head*) ;
 struct buffer_head* FUNC_13 (struct super_block*,int ) ;
 int FUNC_14 (struct buffer_head*) ;
 int FUNC_15 (int,int ) ;
 int FUNC_16 (struct buffer_head*,int,struct buffer_head*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct buffer_head*) ;
 int FUNC_19 (int ,int ,int ) ;
 int FUNC_20 (int ,int ,int ) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 struct buffer_head* FUNC_23 (struct super_block*,int) ;
 int FUNC_24 (struct buffer_head*) ;
 int FUNC_25 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_26(struct super_block *VAR_3,
      struct ext3_new_group_data *VAR_4)
{
 struct ext3_sb_info *VAR_5 = FUNC_2(VAR_3);
 ext3_fsblk_t VAR_6 = FUNC_10(VAR_3, VAR_4->group);
 int VAR_7 = FUNC_7(VAR_3, VAR_4->group) ?
  FUNC_17(VAR_5->s_es->s_reserved_gdt_blocks) : 0;
 unsigned long VAR_8 = FUNC_8(VAR_3, VAR_4->group);
 struct buffer_head *VAR_9;
 handle_t *VAR_10;
 ext3_fsblk_t VAR_11;
 ext3_grpblk_t VAR_12;
 int VAR_13;
 int VAR_14 = 0, VAR_15;


 VAR_10 = FUNC_13(VAR_3, VAR_2);

 if (FUNC_3(VAR_10))
  return FUNC_4(VAR_10);

 FUNC_21(&VAR_5->s_resize_lock);
 if (VAR_4->group != VAR_5->s_groups_count) {
  VAR_14 = -VAR_0;
  goto exit_journal;
 }

 if (FUNC_3(VAR_9 = FUNC_5(VAR_10, VAR_3, VAR_4->block_bitmap))) {
  VAR_14 = FUNC_4(VAR_9);
  goto exit_journal;
 }

 if (FUNC_7(VAR_3, VAR_4->group)) {
  FUNC_9("mark backup superblock %#04lx (+0)\n", VAR_6);
  FUNC_15(0, VAR_9->b_data);
 }


 for (VAR_13 = 0, VAR_12 = 1, VAR_11 = VAR_6 + 1;
      VAR_13 < VAR_8; VAR_13++, VAR_11++, VAR_12++) {
  struct buffer_head *VAR_16;

  FUNC_9("update backup group %#04lx (+%d)\n", VAR_11, VAR_12);

  VAR_14 = FUNC_16(VAR_10, 1, VAR_9);
  if (VAR_14)
   goto exit_bh;

  VAR_16 = FUNC_23(VAR_3, VAR_11);
  if (!VAR_16) {
   VAR_14 = -VAR_1;
   goto exit_bh;
  }
  if ((VAR_14 = FUNC_12(VAR_10, VAR_16))) {
   FUNC_6(VAR_16);
   goto exit_bh;
  }
  FUNC_18(VAR_16);
  FUNC_20(VAR_16->b_data, VAR_5->s_group_desc[VAR_13]->b_data, VAR_16->b_size);
  FUNC_24(VAR_16);
  FUNC_25(VAR_16);
  FUNC_11(VAR_10, VAR_16);
  FUNC_15(VAR_12, VAR_9->b_data);
  FUNC_6(VAR_16);
 }


 for (VAR_13 = 0, VAR_12 = VAR_8 + 1, VAR_11 = VAR_6 + VAR_12;
      VAR_13 < VAR_7; VAR_13++, VAR_11++, VAR_12++) {
  struct buffer_head *VAR_17;

  FUNC_9("clear reserved block %#04lx (+%d)\n", VAR_11, VAR_12);

  VAR_14 = FUNC_16(VAR_10, 1, VAR_9);
  if (VAR_14)
   goto exit_bh;

  if (FUNC_3(VAR_17 = FUNC_5(VAR_10, VAR_3, VAR_11))) {
   VAR_14 = FUNC_4(VAR_9);
   goto exit_bh;
  }
  FUNC_11(VAR_10, VAR_17);
  FUNC_15(VAR_12, VAR_9->b_data);
  FUNC_6(VAR_17);
 }
 FUNC_9("mark block bitmap %#04x (+%ld)\n", VAR_4->block_bitmap,
     VAR_4->block_bitmap - VAR_6);
 FUNC_15(VAR_4->block_bitmap - VAR_6, VAR_9->b_data);
 FUNC_9("mark inode bitmap %#04x (+%ld)\n", VAR_4->inode_bitmap,
     VAR_4->inode_bitmap - VAR_6);
 FUNC_15(VAR_4->inode_bitmap - VAR_6, VAR_9->b_data);


 for (VAR_13 = 0, VAR_11 = VAR_4->inode_table, VAR_12 = VAR_11 - VAR_6;
      VAR_13 < VAR_5->s_itb_per_group; VAR_13++, VAR_12++, VAR_11++) {
  struct buffer_head *VAR_18;

  FUNC_9("clear inode block %#04lx (+%d)\n", VAR_11, VAR_12);

  VAR_14 = FUNC_16(VAR_10, 1, VAR_9);
  if (VAR_14)
   goto exit_bh;

  if (FUNC_3(VAR_18 = FUNC_5(VAR_10, VAR_3, VAR_11))) {
   VAR_14 = FUNC_4(VAR_18);
   goto exit_bh;
  }
  FUNC_11(VAR_10, VAR_18);
  FUNC_6(VAR_18);
  FUNC_15(VAR_12, VAR_9->b_data);
 }

 VAR_14 = FUNC_16(VAR_10, 2, VAR_9);
 if (VAR_14)
  goto exit_bh;

 FUNC_19(VAR_4->blocks_count, FUNC_0(VAR_3),
   VAR_9->b_data);
 FUNC_11(VAR_10, VAR_9);
 FUNC_6(VAR_9);


 FUNC_9("clear inode bitmap %#04x (+%ld)\n",
     VAR_4->inode_bitmap, VAR_4->inode_bitmap - VAR_6);
 if (FUNC_3(VAR_9 = FUNC_5(VAR_10, VAR_3, VAR_4->inode_bitmap))) {
  VAR_14 = FUNC_4(VAR_9);
  goto exit_journal;
 }

 FUNC_19(FUNC_1(VAR_3), FUNC_0(VAR_3),
   VAR_9->b_data);
 FUNC_11(VAR_10, VAR_9);
exit_bh:
 FUNC_6(VAR_9);

exit_journal:
 FUNC_22(&VAR_5->s_resize_lock);
 if ((VAR_15 = FUNC_14(VAR_10)) && !VAR_14)
  VAR_14 = VAR_15;

 return VAR_14;
}
