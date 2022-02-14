
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_flags; int s_dirt; } ;
struct inode {int i_mode; scalar_t__ i_nlink; int i_flags; scalar_t__ i_ino; scalar_t__ i_generation; int i_ctime; int i_atime; int i_mtime; scalar_t__ i_blocks; int i_gid; int i_uid; struct super_block* i_sb; } ;
struct ext2_super_block {int s_inodes_count; } ;
struct ext2_sb_info {int s_groups_count; int* s_debts; int s_next_gen_lock; int s_next_generation; int s_dirs_counter; int s_freeinodes_counter; struct ext2_super_block* s_es; } ;
struct ext2_inode_info {int i_flags; int i_block_group; int i_state; scalar_t__ i_dir_start_lookup; int * i_block_alloc_info; scalar_t__ i_dtime; scalar_t__ i_dir_acl; scalar_t__ i_file_acl; scalar_t__ i_frag_size; scalar_t__ i_frag_no; scalar_t__ i_faddr; int i_data; } ;
struct ext2_group_desc {int bg_used_dirs_count; int bg_free_inodes_count; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef scalar_t__ ino_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct inode* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct super_block*) ;
 int VAR_6 ;
 struct ext2_inode_info* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct super_block*) ;
 struct ext2_sb_info* FUNC_4 (struct super_block*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (char*,scalar_t__) ;
 int FUNC_10 (struct super_block*,char*,char*,int,unsigned long) ;
 scalar_t__ FUNC_11 (unsigned long*,int,scalar_t__) ;
 struct ext2_group_desc* FUNC_12 (struct super_block*,int,struct buffer_head**) ;
 int FUNC_13 (struct inode*,struct inode*) ;
 int FUNC_14 (struct inode*,struct inode*) ;
 int FUNC_15 (int,int) ;
 int FUNC_16 (struct inode*) ;
 scalar_t__ FUNC_17 (int *,scalar_t__,scalar_t__) ;
 int FUNC_18 (struct inode*) ;
 int FUNC_19 (struct super_block*,struct inode*) ;
 int FUNC_20 (struct super_block*,struct inode*) ;
 int FUNC_21 (struct super_block*,struct inode*) ;
 scalar_t__ FUNC_22 (struct inode*) ;
 int FUNC_23 (struct inode*) ;
 int FUNC_24 (int *,int) ;
 scalar_t__ FUNC_25 (int ) ;
 int FUNC_26 (struct inode*) ;
 int FUNC_27 (struct buffer_head*) ;
 int FUNC_28 (struct inode*) ;
 int FUNC_29 (int ,int ,int) ;
 struct inode* FUNC_30 (struct super_block*) ;
 int FUNC_31 (int *,int) ;
 int FUNC_32 (int *) ;
 struct buffer_head* FUNC_33 (struct super_block*,int) ;
 int * FUNC_34 (struct ext2_sb_info*,int) ;
 int FUNC_35 (int *) ;
 int FUNC_36 (int *) ;
 int FUNC_37 (struct buffer_head*) ;
 scalar_t__ FUNC_38 (struct super_block*,int ) ;
 int FUNC_39 (struct inode*) ;
 scalar_t__ FUNC_40 (struct inode*) ;
 int FUNC_41 (struct inode*) ;
 int FUNC_42 (struct inode*) ;

struct inode *FUNC_43(struct inode *VAR_13, int VAR_14)
{
 struct super_block *VAR_15;
 struct buffer_head *VAR_16 = ((void*)0);
 struct buffer_head *VAR_17;
 int VAR_18, VAR_19;
 ino_t VAR_20 = 0;
 struct inode * VAR_21;
 struct ext2_group_desc *VAR_22;
 struct ext2_super_block *VAR_23;
 struct ext2_inode_info *VAR_24;
 struct ext2_sb_info *VAR_25;
 int VAR_26;

 VAR_15 = VAR_13->i_sb;
 VAR_21 = FUNC_30(VAR_15);
 if (!VAR_21)
  return FUNC_0(-VAR_4);

 VAR_24 = FUNC_2(VAR_21);
 VAR_25 = FUNC_4(VAR_15);
 VAR_23 = VAR_25->s_es;
 if (FUNC_5(VAR_14)) {
  if (FUNC_38(VAR_15, VAR_10))
   VAR_18 = FUNC_19(VAR_15, VAR_13);
  else
   VAR_18 = FUNC_20(VAR_15, VAR_13);
 } else
  VAR_18 = FUNC_21(VAR_15, VAR_13);

 if (VAR_18 == -1) {
  VAR_26 = -VAR_5;
  goto fail;
 }

 for (VAR_19 = 0; VAR_19 < VAR_25->s_groups_count; VAR_19++) {
  VAR_22 = FUNC_12(VAR_15, VAR_18, &VAR_17);
  FUNC_6(VAR_16);
  VAR_16 = FUNC_33(VAR_15, VAR_18);
  if (!VAR_16) {
   VAR_26 = -VAR_3;
   goto fail;
  }
  VAR_20 = 0;

repeat_in_this_group:
  VAR_20 = FUNC_11((unsigned long *)VAR_16->b_data,
           FUNC_3(VAR_15), VAR_20);
  if (VAR_20 >= FUNC_3(VAR_15)) {
   if (++VAR_18 == VAR_25->s_groups_count)
    VAR_18 = 0;
   continue;
  }
  if (FUNC_17(FUNC_34(VAR_25, VAR_18),
      VAR_20, VAR_16->b_data)) {

   if (++VAR_20 >= FUNC_3(VAR_15)) {

    if (++VAR_18 == VAR_25->s_groups_count)
     VAR_18 = 0;
    continue;
   }

   goto repeat_in_this_group;
  }
  goto got;
 }




 VAR_26 = -VAR_5;
 goto fail;
got:
 FUNC_27(VAR_16);
 if (VAR_15->s_flags & VAR_9)
  FUNC_37(VAR_16);
 FUNC_6(VAR_16);

 VAR_20 += VAR_18 * FUNC_3(VAR_15) + 1;
 if (VAR_20 < FUNC_1(VAR_15) || VAR_20 > FUNC_25(VAR_23->s_inodes_count)) {
  FUNC_10 (VAR_15, "ext2_new_inode",
       "reserved inode or inode > inodes count - "
       "block_group = %d,inode=%lu", VAR_18,
       (unsigned long) VAR_20);
  VAR_26 = -VAR_3;
  goto fail;
 }

 FUNC_31(&VAR_25->s_freeinodes_counter, -1);
 if (FUNC_5(VAR_14))
  FUNC_32(&VAR_25->s_dirs_counter);

 FUNC_35(FUNC_34(VAR_25, VAR_18));
 FUNC_24(&VAR_22->bg_free_inodes_count, -1);
 if (FUNC_5(VAR_14)) {
  if (VAR_25->s_debts[VAR_18] < 255)
   VAR_25->s_debts[VAR_18]++;
  FUNC_24(&VAR_22->bg_used_dirs_count, 1);
 } else {
  if (VAR_25->s_debts[VAR_18])
   VAR_25->s_debts[VAR_18]--;
 }
 FUNC_36(FUNC_34(VAR_25, VAR_18));

 VAR_15->s_dirt = 1;
 FUNC_27(VAR_17);
 VAR_21->i_uid = FUNC_8();
 if (FUNC_38 (VAR_15, VAR_8))
  VAR_21->i_gid = VAR_13->i_gid;
 else if (VAR_13->i_mode & VAR_11) {
  VAR_21->i_gid = VAR_13->i_gid;
  if (FUNC_5(VAR_14))
   VAR_14 |= VAR_11;
 } else
  VAR_21->i_gid = FUNC_7();
 VAR_21->i_mode = VAR_14;

 VAR_21->i_ino = VAR_20;
 VAR_21->i_blocks = 0;
 VAR_21->i_mtime = VAR_21->i_atime = VAR_21->i_ctime = VAR_0;
 FUNC_29(VAR_24->i_data, 0, sizeof(VAR_24->i_data));
 VAR_24->i_flags =
  FUNC_15(VAR_14, FUNC_2(VAR_13)->i_flags & VAR_6);
 VAR_24->i_faddr = 0;
 VAR_24->i_frag_no = 0;
 VAR_24->i_frag_size = 0;
 VAR_24->i_file_acl = 0;
 VAR_24->i_dir_acl = 0;
 VAR_24->i_dtime = 0;
 VAR_24->i_block_alloc_info = ((void*)0);
 VAR_24->i_block_group = VAR_18;
 VAR_24->i_dir_start_lookup = 0;
 VAR_24->i_state = VAR_7;
 FUNC_18(VAR_21);
 FUNC_35(&VAR_25->s_next_gen_lock);
 VAR_21->i_generation = VAR_25->s_next_generation++;
 FUNC_36(&VAR_25->s_next_gen_lock);
 if (FUNC_22(VAR_21) < 0) {
  VAR_26 = -VAR_2;
  goto fail_drop;
 }

 if (FUNC_40(VAR_21)) {
  VAR_26 = -VAR_1;
  goto fail_drop;
 }

 VAR_26 = FUNC_13(VAR_21, VAR_13);
 if (VAR_26)
  goto fail_free_drop;

 VAR_26 = FUNC_14(VAR_21,VAR_13);
 if (VAR_26)
  goto fail_free_drop;

 FUNC_28(VAR_21);
 FUNC_9("allocating inode %lu\n", VAR_21->i_ino);
 FUNC_16(VAR_21);
 return VAR_21;

fail_free_drop:
 FUNC_42(VAR_21);

fail_drop:
 FUNC_41(VAR_21);
 VAR_21->i_flags |= VAR_12;
 VAR_21->i_nlink = 0;
 FUNC_39(VAR_21);
 FUNC_23(VAR_21);
 return FUNC_0(VAR_26);

fail:
 FUNC_26(VAR_21);
 FUNC_23(VAR_21);
 return FUNC_0(VAR_26);
}
