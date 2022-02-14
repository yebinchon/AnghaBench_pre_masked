
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uid_t ;
struct TYPE_5__ {void* t_tid; } ;
typedef TYPE_1__ transaction_t ;
typedef void* tid_t ;
struct super_block {int dummy; } ;
struct inode {int i_state; int i_mode; int i_uid; int i_gid; int i_nlink; int i_version; int i_ino; struct super_block* i_sb; int * i_op; int i_size; int * i_fop; void* i_generation; int i_blocks; } ;
struct ext4_inode_info {int i_file_acl; int i_extra_isize; scalar_t__* i_data; void* i_datasync_tid; void* i_sync_tid; int i_orphan; int i_last_alloc_group; int i_block_group; scalar_t__ i_reserved_quota; int i_disksize; void* i_flags; void* i_dtime; scalar_t__ i_dir_start_lookup; scalar_t__ i_state_flags; } ;
struct ext4_inode {scalar_t__* i_block; scalar_t__ i_version_hi; scalar_t__ i_disk_version; int i_extra_isize; scalar_t__ i_generation; int i_file_acl_high; scalar_t__ i_file_acl_lo; scalar_t__ i_flags; scalar_t__ i_dtime; int i_links_count; int i_gid_high; int i_uid_high; int i_gid_low; int i_uid_low; int i_mode; } ;
struct ext4_iloc {scalar_t__ bh; int block_group; } ;
struct TYPE_6__ {int j_state_lock; void* j_commit_sequence; TYPE_1__* j_committing_transaction; TYPE_1__* j_running_transaction; } ;
typedef TYPE_2__ journal_t ;
typedef int gid_t ;
typedef int __u64 ;
typedef scalar_t__ __le32 ;
struct TYPE_7__ {int s_mount_state; TYPE_2__* s_journal; } ;


 long VAR_0 ;
 long VAR_1 ;
 struct inode* FUNC_0 (long) ;
 long VAR_2 ;
 int FUNC_1 (int ,struct ext4_inode_info*,struct ext4_inode*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct ext4_inode*,struct ext4_inode_info*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (struct super_block*,int ) ;
 struct ext4_inode_info* FUNC_4 (struct inode*) ;
 int VAR_5 ;
 int FUNC_5 (int ,struct inode*,struct ext4_inode*) ;
 int FUNC_6 (struct super_block*) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__* FUNC_7 (struct super_block*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int *) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int) ;
 scalar_t__ FUNC_14 (int) ;
 scalar_t__ FUNC_15 (int) ;
 long FUNC_16 (struct inode*,struct ext4_iloc*,int ) ;
 int FUNC_17 (scalar_t__) ;
 scalar_t__ FUNC_18 (int ) ;
 long FUNC_19 (struct inode*) ;
 int FUNC_20 (TYPE_3__*,int,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_21 (struct super_block*,char*,int,int ) ;
 long FUNC_22 (struct inode*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_23 (struct ext4_inode*,struct ext4_inode_info*) ;
 scalar_t__ FUNC_24 (struct inode*) ;
 int FUNC_25 (struct ext4_inode*) ;
 struct ext4_inode* FUNC_26 (struct ext4_iloc*) ;
 int FUNC_27 (struct inode*) ;
 int FUNC_28 (struct inode*) ;
 int FUNC_29 (struct inode*,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_30 (struct inode*,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_31 (struct inode*) ;
 struct inode* FUNC_32 (struct super_block*,unsigned long) ;
 int FUNC_33 (struct inode*,int,int ) ;
 int FUNC_34 (int ) ;
 void* FUNC_35 (scalar_t__) ;
 int FUNC_36 (scalar_t__*,int ,int) ;
 int FUNC_37 (void*) ;
 int FUNC_38 (void*) ;
 int FUNC_39 (int *) ;
 int FUNC_40 (int *) ;
 int FUNC_41 (struct super_block*,int ) ;
 int FUNC_42 (struct inode*) ;

struct inode *FUNC_43(struct super_block *VAR_24, unsigned long VAR_25)
{
 struct ext4_iloc VAR_26;
 struct ext4_inode *VAR_27;
 struct ext4_inode_info *VAR_28;
 struct inode *VAR_29;
 journal_t *VAR_30 = FUNC_7(VAR_24)->s_journal;
 long VAR_31;
 int VAR_32;

 VAR_29 = FUNC_32(VAR_24, VAR_25);
 if (!VAR_29)
  return FUNC_0(-VAR_1);
 if (!(VAR_29->i_state & VAR_10))
  return VAR_29;

 VAR_28 = FUNC_4(VAR_29);
 VAR_26.bh = 0;

 VAR_31 = FUNC_16(VAR_29, &VAR_26, 0);
 if (VAR_31 < 0)
  goto bad_inode;
 VAR_27 = FUNC_26(&VAR_26);
 VAR_29->i_mode = FUNC_34(VAR_27->i_mode);
 VAR_29->i_uid = (uid_t)FUNC_34(VAR_27->i_uid_low);
 VAR_29->i_gid = (gid_t)FUNC_34(VAR_27->i_gid_low);
 if (!(FUNC_41(VAR_29->i_sb, VAR_11))) {
  VAR_29->i_uid |= FUNC_34(VAR_27->i_uid_high) << 16;
  VAR_29->i_gid |= FUNC_34(VAR_27->i_gid_high) << 16;
 }
 VAR_29->i_nlink = FUNC_34(VAR_27->i_links_count);

 VAR_28->i_state_flags = 0;
 VAR_28->i_dir_start_lookup = 0;
 VAR_28->i_dtime = FUNC_35(VAR_27->i_dtime);





 if (VAR_29->i_nlink == 0) {
  if (VAR_29->i_mode == 0 ||
      !(FUNC_7(VAR_29->i_sb)->s_mount_state & VAR_7)) {

   VAR_31 = -VAR_2;
   goto bad_inode;
  }




 }
 VAR_28->i_flags = FUNC_35(VAR_27->i_flags);
 VAR_29->i_blocks = FUNC_23(VAR_27, VAR_28);
 VAR_28->i_file_acl = FUNC_35(VAR_27->i_file_acl_lo);
 if (FUNC_3(VAR_24, VAR_3))
  VAR_28->i_file_acl |=
   ((__u64)FUNC_34(VAR_27->i_file_acl_high)) << 32;
 VAR_29->i_size = FUNC_25(VAR_27);
 VAR_28->i_disksize = VAR_29->i_size;



 VAR_29->i_generation = FUNC_35(VAR_27->i_generation);
 VAR_28->i_block_group = VAR_26.block_group;
 VAR_28->i_last_alloc_group = ~0;




 for (VAR_32 = 0; VAR_32 < VAR_6; VAR_32++)
  VAR_28->i_data[VAR_32] = VAR_27->i_block[VAR_32];
 FUNC_8(&VAR_28->i_orphan);
 if (VAR_30) {
  transaction_t *VAR_33;
  tid_t VAR_34;

  FUNC_39(&VAR_30->j_state_lock);
  if (VAR_30->j_running_transaction)
   VAR_33 = VAR_30->j_running_transaction;
  else
   VAR_33 = VAR_30->j_committing_transaction;
  if (VAR_33)
   VAR_34 = VAR_33->t_tid;
  else
   VAR_34 = VAR_30->j_commit_sequence;
  FUNC_40(&VAR_30->j_state_lock);
  VAR_28->i_sync_tid = VAR_34;
  VAR_28->i_datasync_tid = VAR_34;
 }

 if (FUNC_6(VAR_29->i_sb) > VAR_4) {
  VAR_28->i_extra_isize = FUNC_34(VAR_27->i_extra_isize);
  if (VAR_4 + VAR_28->i_extra_isize >
      FUNC_6(VAR_29->i_sb)) {
   VAR_31 = -VAR_0;
   goto bad_inode;
  }
  if (VAR_28->i_extra_isize == 0) {

   VAR_28->i_extra_isize = sizeof(struct ext4_inode) -
         VAR_4;
  } else {
   __le32 *VAR_35 = (void *)VAR_27 +
     VAR_4 +
     VAR_28->i_extra_isize;
   if (*VAR_35 == FUNC_18(VAR_9))
    FUNC_29(VAR_29, VAR_8);
  }
 } else
  VAR_28->i_extra_isize = 0;

 FUNC_5(VAR_21, VAR_29, VAR_27);
 FUNC_5(VAR_22, VAR_29, VAR_27);
 FUNC_5(VAR_19, VAR_29, VAR_27);
 FUNC_1(VAR_20, VAR_28, VAR_27);

 VAR_29->i_version = FUNC_35(VAR_27->i_disk_version);
 if (FUNC_6(VAR_29->i_sb) > VAR_4) {
  if (FUNC_2(VAR_27, VAR_28, VAR_23))
   VAR_29->i_version |=
   (__u64)(FUNC_35(VAR_27->i_version_hi)) << 32;
 }

 VAR_31 = 0;
 if (VAR_28->i_file_acl &&
     !FUNC_20(FUNC_7(VAR_24), VAR_28->i_file_acl, 1)) {
  FUNC_21(VAR_24, "bad extended attribute block %llu inode #%lu",
      VAR_28->i_file_acl, VAR_29->i_ino);
  VAR_31 = -VAR_0;
  goto bad_inode;
 } else if (FUNC_30(VAR_29, VAR_5)) {
  if (FUNC_14(VAR_29->i_mode) || FUNC_11(VAR_29->i_mode) ||
      (FUNC_13(VAR_29->i_mode) &&
       !FUNC_24(VAR_29)))

   VAR_31 = FUNC_22(VAR_29);
 } else if (FUNC_14(VAR_29->i_mode) || FUNC_11(VAR_29->i_mode) ||
     (FUNC_13(VAR_29->i_mode) &&
      !FUNC_24(VAR_29))) {

  VAR_31 = FUNC_19(VAR_29);
 }
 if (VAR_31)
  goto bad_inode;

 if (FUNC_14(VAR_29->i_mode)) {
  VAR_29->i_op = &VAR_15;
  VAR_29->i_fop = &VAR_16;
  FUNC_27(VAR_29);
 } else if (FUNC_11(VAR_29->i_mode)) {
  VAR_29->i_op = &VAR_12;
  VAR_29->i_fop = &VAR_13;
 } else if (FUNC_13(VAR_29->i_mode)) {
  if (FUNC_24(VAR_29)) {
   VAR_29->i_op = &VAR_14;
   FUNC_36(VAR_28->i_data, VAR_29->i_size,
    sizeof(VAR_28->i_data) - 1);
  } else {
   VAR_29->i_op = &VAR_18;
   FUNC_27(VAR_29);
  }
 } else if (FUNC_10(VAR_29->i_mode) || FUNC_9(VAR_29->i_mode) ||
       FUNC_12(VAR_29->i_mode) || FUNC_15(VAR_29->i_mode)) {
  VAR_29->i_op = &VAR_17;
  if (VAR_27->i_block[0])
   FUNC_33(VAR_29, VAR_29->i_mode,
      FUNC_38(FUNC_35(VAR_27->i_block[0])));
  else
   FUNC_33(VAR_29, VAR_29->i_mode,
      FUNC_37(FUNC_35(VAR_27->i_block[1])));
 } else {
  VAR_31 = -VAR_0;
  FUNC_21(VAR_29->i_sb, "bogus i_mode (%o) for inode=%lu",
      VAR_29->i_mode, VAR_29->i_ino);
  goto bad_inode;
 }
 FUNC_17(VAR_26.bh);
 FUNC_28(VAR_29);
 FUNC_42(VAR_29);
 return VAR_29;

bad_inode:
 FUNC_17(VAR_26.bh);
 FUNC_31(VAR_29);
 return FUNC_0(VAR_31);
}
