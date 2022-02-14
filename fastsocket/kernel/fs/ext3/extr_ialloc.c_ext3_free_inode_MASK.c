
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int i_nlink; unsigned long i_ino; int i_mode; int i_count; struct super_block* i_sb; } ;
struct ext3_super_block {int s_inodes_count; } ;
struct ext3_sb_info {int s_dirs_counter; int s_freeinodes_counter; struct ext3_super_block* s_es; } ;
struct ext3_group_desc {int bg_used_dirs_count; int bg_free_inodes_count; } ;
struct buffer_head {int b_data; } ;
typedef int handle_t ;


 int FUNC_0 (struct buffer_head*,char*) ;
 unsigned long FUNC_1 (struct super_block*) ;
 unsigned long FUNC_2 (struct super_block*) ;
 struct ext3_sb_info* FUNC_3 (struct super_block*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int ,unsigned long,int ) ;
 int FUNC_9 (char*,unsigned long) ;
 int FUNC_10 (struct super_block*,char*,char*,unsigned long) ;
 struct ext3_group_desc* FUNC_11 (struct super_block*,unsigned long,struct buffer_head**) ;
 int FUNC_12 (int *,struct buffer_head*) ;
 int FUNC_13 (int *,struct buffer_head*) ;
 int FUNC_14 (struct super_block*,int) ;
 int FUNC_15 (int *,struct inode*) ;
 int FUNC_16 (int *,int) ;
 unsigned long FUNC_17 (int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (char*,...) ;
 struct buffer_head* FUNC_21 (struct super_block*,unsigned long) ;
 int FUNC_22 (struct ext3_sb_info*,unsigned long) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (struct inode*) ;
 int FUNC_26 (struct inode*) ;
 int FUNC_27 (struct inode*) ;
 int FUNC_28 (struct inode*) ;

void FUNC_29 (handle_t *VAR_0, struct inode * VAR_1)
{
 struct super_block * VAR_2 = VAR_1->i_sb;
 int VAR_3;
 unsigned long VAR_4;
 struct buffer_head *VAR_5 = ((void*)0);
 struct buffer_head *VAR_6;
 unsigned long VAR_7;
 unsigned long VAR_8;
 struct ext3_group_desc * VAR_9;
 struct ext3_super_block * VAR_10;
 struct ext3_sb_info *VAR_11;
 int VAR_12 = 0, VAR_13;

 if (FUNC_5(&VAR_1->i_count) > 1) {
  FUNC_20 ("ext3_free_inode: inode has count=%d\n",
     FUNC_5(&VAR_1->i_count));
  return;
 }
 if (VAR_1->i_nlink) {
  FUNC_20 ("ext3_free_inode: inode has nlink=%d\n",
   VAR_1->i_nlink);
  return;
 }
 if (!VAR_2) {
  FUNC_20("ext3_free_inode: inode on nonexistent device\n");
  return;
 }
 VAR_11 = FUNC_3(VAR_2);

 VAR_4 = VAR_1->i_ino;
 FUNC_9 ("freeing inode %lu\n", VAR_4);
 FUNC_25(VAR_1);





 FUNC_28(VAR_1);
 FUNC_15(VAR_0, VAR_1);
 FUNC_27(VAR_1);
 FUNC_26(VAR_1);

 VAR_3 = FUNC_4(VAR_1->i_mode);


 FUNC_7 (VAR_1);

 VAR_10 = FUNC_3(VAR_2)->s_es;
 if (VAR_4 < FUNC_1(VAR_2) || VAR_4 > FUNC_17(VAR_10->s_inodes_count)) {
  FUNC_10 (VAR_2, "ext3_free_inode",
       "reserved or nonexistent inode %lu", VAR_4);
  goto error_return;
 }
 VAR_7 = (VAR_4 - 1) / FUNC_2(VAR_2);
 VAR_8 = (VAR_4 - 1) % FUNC_2(VAR_2);
 VAR_5 = FUNC_21(VAR_2, VAR_7);
 if (!VAR_5)
  goto error_return;

 FUNC_0(VAR_5, "get_write_access");
 VAR_12 = FUNC_13(VAR_0, VAR_5);
 if (VAR_12)
  goto error_return;


 if (!FUNC_8(FUNC_22(VAR_11, VAR_7),
     VAR_8, VAR_5->b_data))
  FUNC_10 (VAR_2, "ext3_free_inode",
         "bit already cleared for inode %lu", VAR_4);
 else {
  VAR_9 = FUNC_11 (VAR_2, VAR_7, &VAR_6);

  FUNC_0(VAR_6, "get_write_access");
  VAR_12 = FUNC_13(VAR_0, VAR_6);
  if (VAR_12) goto error_return;

  if (VAR_9) {
   FUNC_23(FUNC_22(VAR_11, VAR_7));
   FUNC_16(&VAR_9->bg_free_inodes_count, 1);
   if (VAR_3)
    FUNC_16(&VAR_9->bg_used_dirs_count, -1);
   FUNC_24(FUNC_22(VAR_11, VAR_7));
   FUNC_19(&VAR_11->s_freeinodes_counter);
   if (VAR_3)
    FUNC_18(&VAR_11->s_dirs_counter);

  }
  FUNC_0(VAR_6, "call ext3_journal_dirty_metadata");
  VAR_13 = FUNC_12(VAR_0, VAR_6);
  if (!VAR_12) VAR_12 = VAR_13;
 }
 FUNC_0(VAR_5, "call ext3_journal_dirty_metadata");
 VAR_13 = FUNC_12(VAR_0, VAR_5);
 if (!VAR_12)
  VAR_12 = VAR_13;

error_return:
 FUNC_6(VAR_5);
 FUNC_14(VAR_2, VAR_12);
}
