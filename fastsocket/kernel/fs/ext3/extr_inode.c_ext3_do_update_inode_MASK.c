
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct super_block {int dummy; } ;
struct TYPE_15__ {int tv_sec; } ;
struct TYPE_14__ {int tv_sec; } ;
struct TYPE_13__ {int tv_sec; } ;
struct inode {int i_blocks; int i_generation; struct super_block* i_sb; int i_rdev; scalar_t__ i_mode; TYPE_4__ i_mtime; TYPE_3__ i_ctime; TYPE_2__ i_atime; scalar_t__ i_nlink; int i_gid; int i_uid; } ;
struct ext3_inode_info {int i_state; int i_dtime; int i_disksize; int i_flags; int i_faddr; int i_file_acl; int i_dir_acl; int i_sync_tid; scalar_t__ i_extra_isize; void** i_data; int i_frag_size; int i_frag_no; } ;
struct ext3_inode {void* i_extra_isize; void** i_block; void* i_generation; void* i_size_high; void* i_dir_acl; void* i_file_acl; int i_fsize; int i_frag; void* i_faddr; void* i_flags; void* i_dtime; void* i_blocks; void* i_mtime; void* i_ctime; void* i_atime; void* i_size; void* i_links_count; void* i_gid_high; void* i_uid_high; void* i_gid_low; void* i_uid_low; void* i_mode; } ;
struct ext3_iloc {struct buffer_head* bh; } ;
struct buffer_head {int dummy; } ;
struct TYPE_17__ {int h_sync; TYPE_1__* h_transaction; } ;
typedef TYPE_6__ handle_t ;
struct TYPE_16__ {void* s_rev_level; } ;
struct TYPE_12__ {int t_tid; } ;
struct TYPE_11__ {struct buffer_head* s_sbh; TYPE_5__* s_es; int s_inode_size; } ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct super_block*,int ) ;
 struct ext3_inode_info* FUNC_2 (struct inode*) ;
 int VAR_2 ;
 TYPE_10__* FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct super_block*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (struct buffer_head*) ;
 void* FUNC_10 (scalar_t__) ;
 void* FUNC_11 (int) ;
 int FUNC_12 (struct ext3_inode_info*) ;
 int FUNC_13 (TYPE_6__*,struct buffer_head*) ;
 int FUNC_14 (TYPE_6__*,struct buffer_head*) ;
 struct ext3_inode* FUNC_15 (struct ext3_iloc*) ;
 int FUNC_16 (struct super_block*,int) ;
 int FUNC_17 (struct super_block*) ;
 scalar_t__ FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (int ) ;
 int FUNC_21 (struct buffer_head*) ;
 scalar_t__ FUNC_22 (int ) ;
 int FUNC_23 (struct ext3_inode*,int ,int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 scalar_t__ FUNC_26 (int ) ;
 int FUNC_27 (struct super_block*,int ) ;
 int FUNC_28 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_29(handle_t *VAR_5,
    struct inode *VAR_6,
    struct ext3_iloc *VAR_7)
{
 struct ext3_inode *VAR_8 = FUNC_15(VAR_7);
 struct ext3_inode_info *VAR_9 = FUNC_2(VAR_6);
 struct buffer_head *VAR_10 = VAR_7->bh;
 int VAR_11 = 0, VAR_12, VAR_13;

again:

 FUNC_21(VAR_10);



 if (VAR_9->i_state & VAR_3)
  FUNC_23(VAR_8, 0, FUNC_3(VAR_6->i_sb)->s_inode_size);

 FUNC_12(VAR_9);
 VAR_8->i_mode = FUNC_10(VAR_6->i_mode);
 if(!(FUNC_27(VAR_6->i_sb, VAR_4))) {
  VAR_8->i_uid_low = FUNC_10(FUNC_22(VAR_6->i_uid));
  VAR_8->i_gid_low = FUNC_10(FUNC_22(VAR_6->i_gid));




  if(!VAR_9->i_dtime) {
   VAR_8->i_uid_high =
    FUNC_10(FUNC_20(VAR_6->i_uid));
   VAR_8->i_gid_high =
    FUNC_10(FUNC_20(VAR_6->i_gid));
  } else {
   VAR_8->i_uid_high = 0;
   VAR_8->i_gid_high = 0;
  }
 } else {
  VAR_8->i_uid_low =
   FUNC_10(FUNC_19(VAR_6->i_uid));
  VAR_8->i_gid_low =
   FUNC_10(FUNC_18(VAR_6->i_gid));
  VAR_8->i_uid_high = 0;
  VAR_8->i_gid_high = 0;
 }
 VAR_8->i_links_count = FUNC_10(VAR_6->i_nlink);
 VAR_8->i_size = FUNC_11(VAR_9->i_disksize);
 VAR_8->i_atime = FUNC_11(VAR_6->i_atime.tv_sec);
 VAR_8->i_ctime = FUNC_11(VAR_6->i_ctime.tv_sec);
 VAR_8->i_mtime = FUNC_11(VAR_6->i_mtime.tv_sec);
 VAR_8->i_blocks = FUNC_11(VAR_6->i_blocks);
 VAR_8->i_dtime = FUNC_11(VAR_9->i_dtime);
 VAR_8->i_flags = FUNC_11(VAR_9->i_flags);





 VAR_8->i_file_acl = FUNC_11(VAR_9->i_file_acl);
 if (!FUNC_7(VAR_6->i_mode)) {
  VAR_8->i_dir_acl = FUNC_11(VAR_9->i_dir_acl);
 } else {
  VAR_8->i_size_high =
   FUNC_11(VAR_9->i_disksize >> 32);
  if (VAR_9->i_disksize > 0x7fffffffULL) {
   struct super_block *VAR_14 = VAR_6->i_sb;
   if (!FUNC_1(VAR_14,
     VAR_0) ||
       FUNC_3(VAR_14)->s_es->s_rev_level ==
     FUNC_11(VAR_1)) {



    FUNC_28(VAR_10);
    VAR_11 = FUNC_14(VAR_5,
      FUNC_3(VAR_14)->s_sbh);
    if (VAR_11)
     goto out_brelse;

    FUNC_17(VAR_14);
    FUNC_4(VAR_14,
     VAR_0);
    VAR_5->h_sync = 1;
    VAR_11 = FUNC_13(VAR_5,
      FUNC_3(VAR_14)->s_sbh);

    goto again;
   }
  }
 }
 VAR_8->i_generation = FUNC_11(VAR_6->i_generation);
 if (FUNC_6(VAR_6->i_mode) || FUNC_5(VAR_6->i_mode)) {
  if (FUNC_26(VAR_6->i_rdev)) {
   VAR_8->i_block[0] =
    FUNC_11(FUNC_25(VAR_6->i_rdev));
   VAR_8->i_block[1] = 0;
  } else {
   VAR_8->i_block[0] = 0;
   VAR_8->i_block[1] =
    FUNC_11(FUNC_24(VAR_6->i_rdev));
   VAR_8->i_block[2] = 0;
  }
 } else for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++)
  VAR_8->i_block[VAR_13] = VAR_9->i_data[VAR_13];

 if (VAR_9->i_extra_isize)
  VAR_8->i_extra_isize = FUNC_10(VAR_9->i_extra_isize);

 FUNC_0(VAR_10, "call ext3_journal_dirty_metadata");
 FUNC_28(VAR_10);
 VAR_12 = FUNC_13(VAR_5, VAR_10);
 if (!VAR_11)
  VAR_11 = VAR_12;
 VAR_9->i_state &= ~VAR_3;

 FUNC_8(&VAR_9->i_sync_tid, VAR_5->h_transaction->t_tid);
out_brelse:
 FUNC_9 (VAR_10);
 FUNC_16(VAR_6->i_sb, VAR_11);
 return VAR_11;
}
