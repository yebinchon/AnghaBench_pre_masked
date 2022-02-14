
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int s_dirt; } ;
struct inode {int i_mode; int i_nlink; int i_generation; int i_version; struct super_block* i_sb; int i_rdev; int i_gid; int i_uid; } ;
struct ext4_inode_info {int i_dtime; int i_flags; int i_file_acl; int i_disksize; int i_extra_isize; void** i_data; } ;
struct ext4_inode {void* i_extra_isize; void* i_version_hi; void* i_disk_version; void** i_block; void* i_generation; void* i_file_acl_lo; void* i_file_acl_high; void* i_flags; void* i_dtime; void* i_links_count; void* i_gid_high; void* i_uid_high; void* i_gid_low; void* i_uid_low; void* i_mode; } ;
struct ext4_iloc {struct buffer_head* bh; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;
struct TYPE_4__ {struct buffer_head* s_sbh; TYPE_1__* s_es; int s_inode_size; } ;
struct TYPE_3__ {void* s_creator_os; void* s_rev_level; } ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int FUNC_1 (int ,struct ext4_inode_info*,struct ext4_inode*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct ext4_inode*,struct ext4_inode_info*,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct super_block*,int ) ;
 struct ext4_inode_info* FUNC_4 (struct inode*) ;
 int FUNC_5 (int ,struct inode*,struct ext4_inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_6 (struct super_block*) ;
 int FUNC_7 (struct super_block*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (struct buffer_head*) ;
 void* FUNC_11 (int) ;
 void* FUNC_12 (int) ;
 int FUNC_13 (struct inode*,int ) ;
 int FUNC_14 (struct ext4_inode_info*) ;
 int FUNC_15 (int *,int *,struct buffer_head*) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *,struct ext4_inode*,struct ext4_inode_info*) ;
 int FUNC_18 (struct ext4_inode*) ;
 int FUNC_19 (struct ext4_inode*,int) ;
 int FUNC_20 (int *,struct buffer_head*) ;
 struct ext4_inode* FUNC_21 (struct ext4_iloc*) ;
 int FUNC_22 (struct super_block*,int) ;
 scalar_t__ FUNC_23 (struct inode*,int ) ;
 int FUNC_24 (struct super_block*) ;
 int FUNC_25 (int *,struct inode*,int) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_29 (int ) ;
 int FUNC_30 (struct ext4_inode*,int ,int ) ;
 int FUNC_31 (int ) ;
 int FUNC_32 (int ) ;
 scalar_t__ FUNC_33 (int ) ;
 int FUNC_34 (struct super_block*,int ) ;

__attribute__((used)) static int FUNC_35(handle_t *VAR_11,
    struct inode *VAR_12,
    struct ext4_iloc *VAR_13)
{
 struct ext4_inode *VAR_14 = FUNC_21(VAR_13);
 struct ext4_inode_info *VAR_15 = FUNC_4(VAR_12);
 struct buffer_head *VAR_16 = VAR_13->bh;
 int VAR_17 = 0, VAR_18, VAR_19;
 int VAR_20 = 0;



 if (FUNC_23(VAR_12, VAR_4))
  FUNC_30(VAR_14, 0, FUNC_6(VAR_12->i_sb)->s_inode_size);

 FUNC_14(VAR_15);
 VAR_14->i_mode = FUNC_11(VAR_12->i_mode);
 if (!(FUNC_34(VAR_12->i_sb, VAR_5))) {
  VAR_14->i_uid_low = FUNC_11(FUNC_29(VAR_12->i_uid));
  VAR_14->i_gid_low = FUNC_11(FUNC_29(VAR_12->i_gid));




  if (!VAR_15->i_dtime) {
   VAR_14->i_uid_high =
    FUNC_11(FUNC_28(VAR_12->i_uid));
   VAR_14->i_gid_high =
    FUNC_11(FUNC_28(VAR_12->i_gid));
  } else {
   VAR_14->i_uid_high = 0;
   VAR_14->i_gid_high = 0;
  }
 } else {
  VAR_14->i_uid_low =
   FUNC_11(FUNC_27(VAR_12->i_uid));
  VAR_14->i_gid_low =
   FUNC_11(FUNC_26(VAR_12->i_gid));
  VAR_14->i_uid_high = 0;
  VAR_14->i_gid_high = 0;
 }
 VAR_14->i_links_count = FUNC_11(VAR_12->i_nlink);

 FUNC_5(VAR_8, VAR_12, VAR_14);
 FUNC_5(VAR_9, VAR_12, VAR_14);
 FUNC_5(VAR_6, VAR_12, VAR_14);
 FUNC_1(VAR_7, VAR_15, VAR_14);

 if (FUNC_17(VAR_11, VAR_14, VAR_15))
  goto out_brelse;
 VAR_14->i_dtime = FUNC_12(VAR_15->i_dtime);
 VAR_14->i_flags = FUNC_12(VAR_15->i_flags);
 if (FUNC_6(VAR_12->i_sb)->s_es->s_creator_os !=
     FUNC_12(VAR_3))
  VAR_14->i_file_acl_high =
   FUNC_11(VAR_15->i_file_acl >> 32);
 VAR_14->i_file_acl_lo = FUNC_12(VAR_15->i_file_acl);
 if (VAR_15->i_disksize != FUNC_18(VAR_14)) {
  FUNC_19(VAR_14, VAR_15->i_disksize);
  VAR_20 = 1;
 }
 if (VAR_15->i_disksize > 0x7fffffffULL) {
  struct super_block *VAR_21 = VAR_12->i_sb;
  if (!FUNC_3(VAR_21,
    VAR_0) ||
    FUNC_6(VAR_21)->s_es->s_rev_level ==
    FUNC_12(VAR_1)) {



   VAR_17 = FUNC_20(VAR_11,
     FUNC_6(VAR_21)->s_sbh);
   if (VAR_17)
    goto out_brelse;
   FUNC_24(VAR_21);
   FUNC_7(VAR_21,
     VAR_0);
   VAR_21->s_dirt = 1;
   FUNC_16(VAR_11);
   VAR_17 = FUNC_15(VAR_11, ((void*)0),
     FUNC_6(VAR_21)->s_sbh);
  }
 }
 VAR_14->i_generation = FUNC_12(VAR_12->i_generation);
 if (FUNC_9(VAR_12->i_mode) || FUNC_8(VAR_12->i_mode)) {
  if (FUNC_33(VAR_12->i_rdev)) {
   VAR_14->i_block[0] =
    FUNC_12(FUNC_32(VAR_12->i_rdev));
   VAR_14->i_block[1] = 0;
  } else {
   VAR_14->i_block[0] = 0;
   VAR_14->i_block[1] =
    FUNC_12(FUNC_31(VAR_12->i_rdev));
   VAR_14->i_block[2] = 0;
  }
 } else
  for (VAR_19 = 0; VAR_19 < VAR_2; VAR_19++)
   VAR_14->i_block[VAR_19] = VAR_15->i_data[VAR_19];

 VAR_14->i_disk_version = FUNC_12(VAR_12->i_version);
 if (VAR_15->i_extra_isize) {
  if (FUNC_2(VAR_14, VAR_15, VAR_10))
   VAR_14->i_version_hi =
   FUNC_12(VAR_12->i_version >> 32);
  VAR_14->i_extra_isize = FUNC_11(VAR_15->i_extra_isize);
 }

 FUNC_0(VAR_16, "call ext4_handle_dirty_metadata");
 VAR_18 = FUNC_15(VAR_11, ((void*)0), VAR_16);
 if (!VAR_17)
  VAR_17 = VAR_18;
 FUNC_13(VAR_12, VAR_4);

 FUNC_25(VAR_11, VAR_12, VAR_20);
out_brelse:
 FUNC_10(VAR_16);
 FUNC_22(VAR_12->i_sb, VAR_17);
 return VAR_17;
}
