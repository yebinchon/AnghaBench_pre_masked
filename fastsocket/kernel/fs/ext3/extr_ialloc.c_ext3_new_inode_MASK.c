
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int i_mode; unsigned long i_ino; scalar_t__ i_nlink; int i_flags; scalar_t__ i_generation; int i_ctime; int i_atime; int i_mtime; scalar_t__ i_blocks; int i_gid; int i_uid; struct super_block* i_sb; } ;
struct ext3_super_block {int s_inodes_count; } ;
struct ext3_sb_info {int s_groups_count; int s_next_gen_lock; int s_next_generation; int s_dirs_counter; int s_freeinodes_counter; struct ext3_super_block* s_es; } ;
struct ext3_inode_info {int i_flags; int i_block_group; scalar_t__ i_extra_isize; int i_state; int * i_block_alloc_info; scalar_t__ i_dtime; scalar_t__ i_dir_acl; scalar_t__ i_file_acl; scalar_t__ i_frag_size; scalar_t__ i_frag_no; scalar_t__ i_faddr; scalar_t__ i_disksize; scalar_t__ i_dir_start_lookup; int i_data; } ;
struct ext3_inode {int dummy; } ;
struct ext3_group_desc {int bg_used_dirs_count; int bg_free_inodes_count; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_9__ {int h_sync; } ;
typedef TYPE_1__ handle_t ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct inode* FUNC_1 (int) ;
 int FUNC_2 (struct super_block*) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 struct ext3_inode_info* FUNC_3 (struct inode*) ;
 int FUNC_4 (struct super_block*) ;
 scalar_t__ FUNC_5 (struct super_block*) ;
 struct ext3_sb_info* FUNC_6 (struct super_block*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_7 (struct inode*) ;
 int VAR_11 ;
 scalar_t__ FUNC_8 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (char*,unsigned long) ;
 int FUNC_13 (struct super_block*,char*,char*,int,unsigned long) ;
 unsigned long FUNC_14 (unsigned long*,int,unsigned long) ;
 struct ext3_group_desc* FUNC_15 (struct super_block*,int,struct buffer_head**) ;
 int FUNC_16 (TYPE_1__*,struct inode*,struct inode*) ;
 int FUNC_17 (TYPE_1__*,struct inode*,struct inode*) ;
 int FUNC_18 (TYPE_1__*,struct buffer_head*) ;
 int FUNC_19 (TYPE_1__*,struct buffer_head*) ;
 int FUNC_20 (TYPE_1__*,struct inode*) ;
 int FUNC_21 (int,int) ;
 int FUNC_22 (int *,unsigned long,scalar_t__) ;
 int FUNC_23 (struct inode*) ;
 int FUNC_24 (struct super_block*,int) ;
 int FUNC_25 (struct super_block*,struct inode*) ;
 int FUNC_26 (struct super_block*,struct inode*) ;
 int FUNC_27 (struct super_block*,struct inode*) ;
 scalar_t__ FUNC_28 (struct inode*) ;
 int FUNC_29 (struct inode*) ;
 int FUNC_30 (TYPE_1__*,struct buffer_head*) ;
 int FUNC_31 (int *,int) ;
 unsigned long FUNC_32 (int ) ;
 int FUNC_33 (int ,int ,int) ;
 struct inode* FUNC_34 (struct super_block*) ;
 int FUNC_35 (int *) ;
 int FUNC_36 (int *) ;
 struct buffer_head* FUNC_37 (struct super_block*,int) ;
 int * FUNC_38 (struct ext3_sb_info*,int) ;
 int FUNC_39 (int *) ;
 int FUNC_40 (int *) ;
 scalar_t__ FUNC_41 (struct super_block*,int ) ;
 int FUNC_42 (struct inode*,struct inode*,int) ;
 int FUNC_43 (struct inode*,int) ;
 int FUNC_44 (struct inode*) ;
 scalar_t__ FUNC_45 (struct inode*) ;
 int FUNC_46 (struct inode*) ;
 int FUNC_47 (struct inode*) ;

struct inode *FUNC_48(handle_t *VAR_14, struct inode * VAR_15, int VAR_16)
{
 struct super_block *VAR_17;
 struct buffer_head *VAR_18 = ((void*)0);
 struct buffer_head *VAR_19;
 int VAR_20;
 unsigned long VAR_21 = 0;
 struct inode * VAR_22;
 struct ext3_group_desc * VAR_23 = ((void*)0);
 struct ext3_super_block * VAR_24;
 struct ext3_inode_info *VAR_25;
 struct ext3_sb_info *VAR_26;
 int VAR_27 = 0;
 struct inode *VAR_28;
 int VAR_29;


 if (!VAR_15 || !VAR_15->i_nlink)
  return FUNC_1(-VAR_6);

 VAR_17 = VAR_15->i_sb;
 FUNC_43(VAR_15, VAR_16);
 VAR_22 = FUNC_34(VAR_17);
 if (!VAR_22)
  return FUNC_1(-VAR_4);
 VAR_25 = FUNC_3(VAR_22);

 VAR_26 = FUNC_6(VAR_17);
 VAR_24 = VAR_26->s_es;
 if (FUNC_8(VAR_16)) {
  if (FUNC_41 (VAR_17, VAR_11))
   VAR_20 = FUNC_25(VAR_17, VAR_15);
  else
   VAR_20 = FUNC_26(VAR_17, VAR_15);
 } else
  VAR_20 = FUNC_27(VAR_17, VAR_15);

 VAR_27 = -VAR_5;
 if (VAR_20 == -1)
  goto out;

 for (VAR_29 = 0; VAR_29 < VAR_26->s_groups_count; VAR_29++) {
  VAR_27 = -VAR_3;

  VAR_23 = FUNC_15(VAR_17, VAR_20, &VAR_19);
  if (!VAR_23)
   goto fail;

  FUNC_9(VAR_18);
  VAR_18 = FUNC_37(VAR_17, VAR_20);
  if (!VAR_18)
   goto fail;

  VAR_21 = 0;

repeat_in_this_group:
  VAR_21 = FUNC_14((unsigned long *)
    VAR_18->b_data, FUNC_4(VAR_17), VAR_21);
  if (VAR_21 < FUNC_4(VAR_17)) {

   FUNC_0(VAR_18, "get_write_access");
   VAR_27 = FUNC_19(VAR_14, VAR_18);
   if (VAR_27)
    goto fail;

   if (!FUNC_22(FUNC_38(VAR_26, VAR_20),
      VAR_21, VAR_18->b_data)) {

    FUNC_0(VAR_18,
     "call ext3_journal_dirty_metadata");
    VAR_27 = FUNC_18(VAR_14,
        VAR_18);
    if (VAR_27)
     goto fail;
    goto got;
   }

   FUNC_30(VAR_14, VAR_18);

   if (++VAR_21 < FUNC_4(VAR_17))
    goto repeat_in_this_group;
  }
  if (++VAR_20 == VAR_26->s_groups_count)
   VAR_20 = 0;
 }
 VAR_27 = -VAR_5;
 goto out;

got:
 VAR_21 += VAR_20 * FUNC_4(VAR_17) + 1;
 if (VAR_21 < FUNC_2(VAR_17) || VAR_21 > FUNC_32(VAR_24->s_inodes_count)) {
  FUNC_13 (VAR_17, "ext3_new_inode",
       "reserved inode or inode > inodes count - "
       "block_group = %d, inode=%lu", VAR_20, VAR_21);
  VAR_27 = -VAR_3;
  goto fail;
 }

 FUNC_0(VAR_19, "get_write_access");
 VAR_27 = FUNC_19(VAR_14, VAR_19);
 if (VAR_27) goto fail;
 FUNC_39(FUNC_38(VAR_26, VAR_20));
 FUNC_31(&VAR_23->bg_free_inodes_count, -1);
 if (FUNC_8(VAR_16)) {
  FUNC_31(&VAR_23->bg_used_dirs_count, 1);
 }
 FUNC_40(FUNC_38(VAR_26, VAR_20));
 FUNC_0(VAR_19, "call ext3_journal_dirty_metadata");
 VAR_27 = FUNC_18(VAR_14, VAR_19);
 if (VAR_27) goto fail;

 FUNC_35(&VAR_26->s_freeinodes_counter);
 if (FUNC_8(VAR_16))
  FUNC_36(&VAR_26->s_dirs_counter);

 VAR_22->i_uid = FUNC_11();
 if (FUNC_41 (VAR_17, VAR_10))
  VAR_22->i_gid = VAR_15->i_gid;
 else if (VAR_15->i_mode & VAR_12) {
  VAR_22->i_gid = VAR_15->i_gid;
  if (FUNC_8(VAR_16))
   VAR_16 |= VAR_12;
 } else
  VAR_22->i_gid = FUNC_10();
 VAR_22->i_mode = VAR_16;

 VAR_22->i_ino = VAR_21;

 VAR_22->i_blocks = 0;
 VAR_22->i_mtime = VAR_22->i_atime = VAR_22->i_ctime = VAR_0;

 FUNC_33(VAR_25->i_data, 0, sizeof(VAR_25->i_data));
 VAR_25->i_dir_start_lookup = 0;
 VAR_25->i_disksize = 0;

 VAR_25->i_flags =
  FUNC_21(VAR_16, FUNC_3(VAR_15)->i_flags & VAR_7);





 VAR_25->i_file_acl = 0;
 VAR_25->i_dir_acl = 0;
 VAR_25->i_dtime = 0;
 VAR_25->i_block_alloc_info = ((void*)0);
 VAR_25->i_block_group = VAR_20;

 FUNC_23(VAR_22);
 if (FUNC_7(VAR_22))
  VAR_14->h_sync = 1;
 if (FUNC_28(VAR_22) < 0) {
  VAR_27 = -VAR_2;
  goto fail_drop;
 }
 FUNC_39(&VAR_26->s_next_gen_lock);
 VAR_22->i_generation = VAR_26->s_next_generation++;
 FUNC_40(&VAR_26->s_next_gen_lock);

 VAR_25->i_state = VAR_9;

 if (VAR_21 >= FUNC_2(VAR_17) + 1 &&
     FUNC_5(VAR_17) > VAR_8) {
  VAR_25->i_extra_isize =
   sizeof(struct ext3_inode) - VAR_8;
 } else {
  VAR_25->i_extra_isize = 0;
 }

 VAR_28 = VAR_22;
 if (FUNC_45(VAR_22)) {
  VAR_27 = -VAR_1;
  goto fail_drop;
 }

 VAR_27 = FUNC_16(VAR_14, VAR_22, VAR_15);
 if (VAR_27)
  goto fail_free_drop;

 VAR_27 = FUNC_17(VAR_14,VAR_22, VAR_15);
 if (VAR_27)
  goto fail_free_drop;

 VAR_27 = FUNC_20(VAR_14, VAR_22);
 if (VAR_27) {
  FUNC_24(VAR_17, VAR_27);
  goto fail_free_drop;
 }

 FUNC_12("allocating inode %lu\n", VAR_22->i_ino);
 FUNC_42(VAR_22, VAR_15, VAR_16);
 goto really_out;
fail:
 FUNC_24(VAR_17, VAR_27);
out:
 FUNC_29(VAR_22);
 VAR_28 = FUNC_1(VAR_27);
really_out:
 FUNC_9(VAR_18);
 return VAR_28;

fail_free_drop:
 FUNC_47(VAR_22);

fail_drop:
 FUNC_46(VAR_22);
 VAR_22->i_flags |= VAR_13;
 VAR_22->i_nlink = 0;
 FUNC_44(VAR_22);
 FUNC_29(VAR_22);
 FUNC_9(VAR_18);
 return FUNC_1(VAR_27);
}
