
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int s_blocksize; } ;
struct ext4_sb_info {scalar_t__ s_groups_count; int s_itb_per_group; int s_resize_lock; TYPE_2__** s_group_desc; TYPE_1__* s_es; } ;
struct ext4_new_group_data {scalar_t__ group; int block_bitmap; int inode_bitmap; int inode_table; int blocks_count; } ;
struct buffer_head {int b_data; int b_size; } ;
typedef struct buffer_head handle_t ;
typedef int ext4_grpblk_t ;
typedef int ext4_fsblk_t ;
struct TYPE_4__ {int b_data; } ;
struct TYPE_3__ {int s_reserved_gdt_blocks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct super_block*) ;
 int VAR_2 ;
 struct ext4_sb_info* FUNC_1 (struct super_block*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 struct buffer_head* FUNC_4 (struct buffer_head*,struct super_block*,int) ;
 int FUNC_5 (struct buffer_head*) ;
 scalar_t__ FUNC_6 (struct super_block*,scalar_t__) ;
 unsigned long FUNC_7 (struct super_block*,scalar_t__) ;
 int FUNC_8 (char*,int,...) ;
 int FUNC_9 (struct super_block*,scalar_t__) ;
 int FUNC_10 (struct buffer_head*,int *,struct buffer_head*) ;
 int FUNC_11 (struct buffer_head*,struct buffer_head*) ;
 struct buffer_head* FUNC_12 (struct super_block*,int ) ;
 int FUNC_13 (struct buffer_head*) ;
 int FUNC_14 (int,int ) ;
 int FUNC_15 (struct buffer_head*,int,struct buffer_head*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct buffer_head*) ;
 int FUNC_18 (int ,int,int ) ;
 int FUNC_19 (int ,int ,int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 struct buffer_head* FUNC_22 (struct super_block*,int) ;
 int FUNC_23 (struct super_block*,int,int,int ) ;
 int FUNC_24 (struct buffer_head*) ;
 int FUNC_25 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_26(struct super_block *VAR_4,
      struct ext4_new_group_data *VAR_5)
{
 struct ext4_sb_info *VAR_6 = FUNC_1(VAR_4);
 ext4_fsblk_t VAR_7 = FUNC_9(VAR_4, VAR_5->group);
 int VAR_8 = FUNC_6(VAR_4, VAR_5->group) ?
  FUNC_16(VAR_6->s_es->s_reserved_gdt_blocks) : 0;
 unsigned long VAR_9 = FUNC_7(VAR_4, VAR_5->group);
 struct buffer_head *VAR_10;
 handle_t *VAR_11;
 ext4_fsblk_t VAR_12;
 ext4_grpblk_t VAR_13;
 int VAR_14;
 int VAR_15 = 0, VAR_16;


 VAR_11 = FUNC_12(VAR_4, VAR_2);

 if (FUNC_2(VAR_11))
  return FUNC_3(VAR_11);

 FUNC_20(&VAR_6->s_resize_lock);
 if (VAR_5->group != VAR_6->s_groups_count) {
  VAR_15 = -VAR_0;
  goto exit_journal;
 }

 if (FUNC_2(VAR_10 = FUNC_4(VAR_11, VAR_4, VAR_5->block_bitmap))) {
  VAR_15 = FUNC_3(VAR_10);
  goto exit_journal;
 }

 if (FUNC_6(VAR_4, VAR_5->group)) {
  FUNC_8("mark backup superblock %#04llx (+0)\n", VAR_7);
  FUNC_14(0, VAR_10->b_data);
 }


 for (VAR_14 = 0, VAR_13 = 1, VAR_12 = VAR_7 + 1;
      VAR_14 < VAR_9; VAR_14++, VAR_12++, VAR_13++) {
  struct buffer_head *VAR_17;

  FUNC_8("update backup group %#04llx (+%d)\n", VAR_12, VAR_13);

  if ((VAR_15 = FUNC_15(VAR_11, 1, VAR_10)))
   goto exit_bh;

  VAR_17 = FUNC_22(VAR_4, VAR_12);
  if (!VAR_17) {
   VAR_15 = -VAR_1;
   goto exit_bh;
  }
  if ((VAR_15 = FUNC_11(VAR_11, VAR_17))) {
   FUNC_5(VAR_17);
   goto exit_bh;
  }
  FUNC_17(VAR_17);
  FUNC_19(VAR_17->b_data, VAR_6->s_group_desc[VAR_14]->b_data, VAR_17->b_size);
  FUNC_24(VAR_17);
  FUNC_25(VAR_17);
  FUNC_10(VAR_11, ((void*)0), VAR_17);
  FUNC_14(VAR_13, VAR_10->b_data);
  FUNC_5(VAR_17);
 }


 FUNC_8("clear inode table blocks %#04llx -> %#04lx\n",
   VAR_12, VAR_6->s_itb_per_group);
 VAR_15 = FUNC_23(VAR_4, VAR_9 + VAR_7 + 1, VAR_8,
          VAR_3);
 if (VAR_15)
  goto exit_bh;
 for (VAR_14 = 0, VAR_13 = VAR_9 + 1; VAR_14 < VAR_8; VAR_14++, VAR_13++)
  FUNC_14(VAR_13, VAR_10->b_data);


 FUNC_8("mark block bitmap %#04llx (+%llu)\n", VAR_5->block_bitmap,
     VAR_5->block_bitmap - VAR_7);
 FUNC_14(VAR_5->block_bitmap - VAR_7, VAR_10->b_data);
 FUNC_8("mark inode bitmap %#04llx (+%llu)\n", VAR_5->inode_bitmap,
     VAR_5->inode_bitmap - VAR_7);
 FUNC_14(VAR_5->inode_bitmap - VAR_7, VAR_10->b_data);


 VAR_12 = VAR_5->inode_table;
 FUNC_8("clear inode table blocks %#04llx -> %#04lx\n",
   VAR_12, VAR_6->s_itb_per_group);
 VAR_15 = FUNC_23(VAR_4, VAR_12, VAR_6->s_itb_per_group, VAR_3);
 if (VAR_15)
  goto exit_bh;
 for (VAR_14 = 0, VAR_13 = VAR_5->inode_table - VAR_7;
      VAR_14 < VAR_6->s_itb_per_group; VAR_14++, VAR_13++)
  FUNC_14(VAR_13, VAR_10->b_data);

 if ((VAR_15 = FUNC_15(VAR_11, 2, VAR_10)))
  goto exit_bh;

 FUNC_18(VAR_5->blocks_count, VAR_4->s_blocksize * 8, VAR_10->b_data);
 FUNC_10(VAR_11, ((void*)0), VAR_10);
 FUNC_5(VAR_10);

 FUNC_8("clear inode bitmap %#04llx (+%llu)\n",
     VAR_5->inode_bitmap, VAR_5->inode_bitmap - VAR_7);
 if (FUNC_2(VAR_10 = FUNC_4(VAR_11, VAR_4, VAR_5->inode_bitmap))) {
  VAR_15 = FUNC_3(VAR_10);
  goto exit_journal;
 }

 FUNC_18(FUNC_0(VAR_4), VAR_4->s_blocksize * 8,
   VAR_10->b_data);
 FUNC_10(VAR_11, ((void*)0), VAR_10);
exit_bh:
 FUNC_5(VAR_10);

exit_journal:
 FUNC_21(&VAR_6->s_resize_lock);
 if ((VAR_16 = FUNC_13(VAR_11)) && !VAR_15)
  VAR_15 = VAR_16;

 return VAR_15;
}
