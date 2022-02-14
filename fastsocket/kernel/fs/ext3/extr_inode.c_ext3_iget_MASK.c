
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uid_t ;
struct TYPE_10__ {int t_tid; } ;
typedef TYPE_4__ transaction_t ;
typedef int tid_t ;
struct super_block {int dummy; } ;
struct TYPE_9__ {int tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_8__ {int tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_7__ {int tv_sec; scalar_t__ tv_nsec; } ;
struct inode {int i_state; int i_mode; int i_uid; int i_gid; int i_nlink; int i_size; scalar_t__ i_ino; int * i_op; int * i_fop; struct super_block* i_sb; void* i_generation; void* i_blocks; TYPE_3__ i_mtime; TYPE_2__ i_ctime; TYPE_1__ i_atime; } ;
struct ext3_inode_info {int i_disksize; int i_extra_isize; scalar_t__* i_data; int i_state; int i_datasync_tid; int i_sync_tid; int i_orphan; int i_block_group; void* i_dir_acl; void* i_file_acl; int i_frag_size; int i_frag_no; void* i_faddr; void* i_flags; void* i_dtime; scalar_t__ i_dir_start_lookup; int * i_block_alloc_info; } ;
struct ext3_inode {scalar_t__* i_block; int i_extra_isize; scalar_t__ i_generation; scalar_t__ i_size_high; scalar_t__ i_dir_acl; scalar_t__ i_file_acl; int i_fsize; int i_frag; scalar_t__ i_faddr; scalar_t__ i_flags; scalar_t__ i_blocks; scalar_t__ i_dtime; scalar_t__ i_mtime; scalar_t__ i_ctime; scalar_t__ i_atime; scalar_t__ i_size; int i_links_count; int i_gid_high; int i_uid_high; int i_gid_low; int i_uid_low; int i_mode; } ;
struct ext3_iloc {struct buffer_head* bh; int block_group; } ;
struct buffer_head {int dummy; } ;
struct TYPE_11__ {int j_state_lock; int j_commit_sequence; TYPE_4__* j_committing_transaction; TYPE_4__* j_running_transaction; } ;
typedef TYPE_5__ journal_t ;
typedef int gid_t ;
typedef int __u64 ;
typedef scalar_t__ __le32 ;
struct TYPE_12__ {int s_mount_state; TYPE_5__* s_journal; } ;


 long VAR_0 ;
 long VAR_1 ;
 struct inode* FUNC_0 (long) ;
 long VAR_2 ;
 scalar_t__ FUNC_1 (struct super_block*) ;
 scalar_t__ VAR_3 ;
 struct ext3_inode_info* FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct super_block*) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_6__* FUNC_4 (struct super_block*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 long FUNC_9 (struct inode*,struct ext3_iloc*,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (struct buffer_head*) ;
 scalar_t__ FUNC_12 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_13 (struct inode*) ;
 struct ext3_inode* FUNC_14 (struct ext3_iloc*) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (struct inode*) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_17 (struct inode*) ;
 struct inode* FUNC_18 (struct super_block*,unsigned long) ;
 int FUNC_19 (struct inode*,scalar_t__,int ) ;
 int FUNC_20 (int ) ;
 void* FUNC_21 (scalar_t__) ;
 int FUNC_22 (scalar_t__*,int,int) ;
 int FUNC_23 (void*) ;
 int FUNC_24 (void*) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (struct super_block*,int ) ;
 int FUNC_28 (struct inode*) ;

struct inode *FUNC_29(struct super_block *VAR_17, unsigned long VAR_18)
{
 struct ext3_iloc VAR_19;
 struct ext3_inode *VAR_20;
 struct ext3_inode_info *VAR_21;
 struct buffer_head *VAR_22;
 struct inode *VAR_23;
 journal_t *VAR_24 = FUNC_4(VAR_17)->s_journal;
 transaction_t *VAR_25;
 long VAR_26;
 int VAR_27;

 VAR_23 = FUNC_18(VAR_17, VAR_18);
 if (!VAR_23)
  return FUNC_0(-VAR_1);
 if (!(VAR_23->i_state & VAR_8))
  return VAR_23;

 VAR_21 = FUNC_2(VAR_23);
 VAR_21->i_block_alloc_info = ((void*)0);

 VAR_26 = FUNC_9(VAR_23, &VAR_19, 0);
 if (VAR_26 < 0)
  goto bad_inode;
 VAR_22 = VAR_19.bh;
 VAR_20 = FUNC_14(&VAR_19);
 VAR_23->i_mode = FUNC_20(VAR_20->i_mode);
 VAR_23->i_uid = (uid_t)FUNC_20(VAR_20->i_uid_low);
 VAR_23->i_gid = (gid_t)FUNC_20(VAR_20->i_gid_low);
 if(!(FUNC_27 (VAR_23->i_sb, VAR_9))) {
  VAR_23->i_uid |= FUNC_20(VAR_20->i_uid_high) << 16;
  VAR_23->i_gid |= FUNC_20(VAR_20->i_gid_high) << 16;
 }
 VAR_23->i_nlink = FUNC_20(VAR_20->i_links_count);
 VAR_23->i_size = FUNC_21(VAR_20->i_size);
 VAR_23->i_atime.tv_sec = (signed)FUNC_21(VAR_20->i_atime);
 VAR_23->i_ctime.tv_sec = (signed)FUNC_21(VAR_20->i_ctime);
 VAR_23->i_mtime.tv_sec = (signed)FUNC_21(VAR_20->i_mtime);
 VAR_23->i_atime.tv_nsec = VAR_23->i_ctime.tv_nsec = VAR_23->i_mtime.tv_nsec = 0;

 VAR_21->i_state = 0;
 VAR_21->i_dir_start_lookup = 0;
 VAR_21->i_dtime = FUNC_21(VAR_20->i_dtime);





 if (VAR_23->i_nlink == 0) {
  if (VAR_23->i_mode == 0 ||
      !(FUNC_4(VAR_23->i_sb)->s_mount_state & VAR_5)) {

   FUNC_11 (VAR_22);
   VAR_26 = -VAR_2;
   goto bad_inode;
  }




 }
 VAR_23->i_blocks = FUNC_21(VAR_20->i_blocks);
 VAR_21->i_flags = FUNC_21(VAR_20->i_flags);





 VAR_21->i_file_acl = FUNC_21(VAR_20->i_file_acl);
 if (!FUNC_8(VAR_23->i_mode)) {
  VAR_21->i_dir_acl = FUNC_21(VAR_20->i_dir_acl);
 } else {
  VAR_23->i_size |=
   ((__u64)FUNC_21(VAR_20->i_size_high)) << 32;
 }
 VAR_21->i_disksize = VAR_23->i_size;
 VAR_23->i_generation = FUNC_21(VAR_20->i_generation);
 VAR_21->i_block_group = VAR_19.block_group;




 for (VAR_27 = 0; VAR_27 < VAR_4; VAR_27++)
  VAR_21->i_data[VAR_27] = VAR_20->i_block[VAR_27];
 FUNC_5(&VAR_21->i_orphan);
 if (VAR_24) {
  tid_t VAR_28;

  FUNC_25(&VAR_24->j_state_lock);
  if (VAR_24->j_running_transaction)
   VAR_25 = VAR_24->j_running_transaction;
  else
   VAR_25 = VAR_24->j_committing_transaction;
  if (VAR_25)
   VAR_28 = VAR_25->t_tid;
  else
   VAR_28 = VAR_24->j_commit_sequence;
  FUNC_26(&VAR_24->j_state_lock);
  FUNC_10(&VAR_21->i_sync_tid, VAR_28);
  FUNC_10(&VAR_21->i_datasync_tid, VAR_28);
 }

 if (VAR_23->i_ino >= FUNC_1(VAR_23->i_sb) + 1 &&
     FUNC_3(VAR_23->i_sb) > VAR_3) {





  VAR_21->i_extra_isize = FUNC_20(VAR_20->i_extra_isize);
  if (VAR_3 + VAR_21->i_extra_isize >
      FUNC_3(VAR_23->i_sb)) {
   FUNC_11 (VAR_22);
   VAR_26 = -VAR_0;
   goto bad_inode;
  }
  if (VAR_21->i_extra_isize == 0) {

   VAR_21->i_extra_isize = sizeof(struct ext3_inode) -
         VAR_3;
  } else {
   __le32 *VAR_29 = (void *)VAR_20 +
     VAR_3 +
     VAR_21->i_extra_isize;
   if (*VAR_29 == FUNC_12(VAR_7))
     VAR_21->i_state |= VAR_6;
  }
 } else
  VAR_21->i_extra_isize = 0;

 if (FUNC_8(VAR_23->i_mode)) {
  VAR_23->i_op = &VAR_13;
  VAR_23->i_fop = &VAR_14;
  FUNC_15(VAR_23);
 } else if (FUNC_6(VAR_23->i_mode)) {
  VAR_23->i_op = &VAR_10;
  VAR_23->i_fop = &VAR_11;
 } else if (FUNC_7(VAR_23->i_mode)) {
  if (FUNC_13(VAR_23)) {
   VAR_23->i_op = &VAR_12;
   FUNC_22(VAR_21->i_data, VAR_23->i_size,
    sizeof(VAR_21->i_data) - 1);
  } else {
   VAR_23->i_op = &VAR_16;
   FUNC_15(VAR_23);
  }
 } else {
  VAR_23->i_op = &VAR_15;
  if (VAR_20->i_block[0])
   FUNC_19(VAR_23, VAR_23->i_mode,
      FUNC_24(FUNC_21(VAR_20->i_block[0])));
  else
   FUNC_19(VAR_23, VAR_23->i_mode,
      FUNC_23(FUNC_21(VAR_20->i_block[1])));
 }
 FUNC_11 (VAR_19.bh);
 FUNC_16(VAR_23);
 FUNC_28(VAR_23);
 return VAR_23;

bad_inode:
 FUNC_17(VAR_23);
 return FUNC_0(VAR_26);
}
