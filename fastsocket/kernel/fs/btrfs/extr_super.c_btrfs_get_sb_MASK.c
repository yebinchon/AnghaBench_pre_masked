
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct vfsmount {struct super_block* mnt_root; struct super_block* mnt_sb; } ;
struct super_block {int s_flags; int s_id; scalar_t__ s_root; struct super_block* d_sb; } ;
struct file_system_type {int dummy; } ;
struct dentry {int s_flags; int s_id; scalar_t__ s_root; struct dentry* d_sb; } ;
struct btrfs_fs_info {void* super_for_commit; void* super_copy; struct btrfs_fs_devices* fs_devices; } ;
struct btrfs_fs_devices {scalar_t__ rw_devices; struct block_device* latest_bdev; } ;
struct block_device {int dummy; } ;
typedef int fmode_t ;
struct TYPE_2__ {struct file_system_type* bdev_holder; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct super_block* FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct super_block*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct block_device*,char*) ;
 int FUNC_4 (struct btrfs_fs_devices*) ;
 int FUNC_5 (struct super_block*,struct btrfs_fs_devices*,void*,int) ;
 int FUNC_6 (struct btrfs_fs_devices*,int ,struct file_system_type*) ;
 int FUNC_7 (void*,int ,struct file_system_type*,char**,int *,int *,struct btrfs_fs_devices**) ;
 TYPE_1__* FUNC_8 (struct super_block*) ;
 int FUNC_9 (char const*,int ,struct file_system_type*,struct btrfs_fs_devices**) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (struct super_block*) ;
 int FUNC_11 (struct btrfs_fs_info*) ;
 struct super_block* FUNC_12 (struct super_block*,int ) ;
 int FUNC_13 (char*) ;
 void* FUNC_14 (int,int ) ;
 struct super_block* FUNC_15 (char*,int,char const*,void*) ;
 struct super_block* FUNC_16 (struct file_system_type*,int ,int ,struct btrfs_fs_info*) ;
 int FUNC_17 (int ,int ,int) ;

__attribute__((used)) static int FUNC_18(struct file_system_type *VAR_12, int VAR_13,
  const char *VAR_14, void *VAR_15, struct vfsmount *VAR_16)
{
 struct block_device *VAR_17 = ((void*)0);
 struct super_block *VAR_18;
 struct dentry *VAR_19;
 struct btrfs_fs_devices *VAR_20 = ((void*)0);
 struct btrfs_fs_info *VAR_21 = ((void*)0);
 fmode_t VAR_22 = VAR_5;
 char *VAR_23 = ((void*)0);
 u64 VAR_24 = 0;
 u64 VAR_25 = 0;
 int VAR_26 = 0;

 if (!(VAR_13 & VAR_8))
  VAR_22 |= VAR_6;

 VAR_26 = FUNC_7(VAR_15, VAR_22, VAR_12,
       &VAR_23, &VAR_24,
       &VAR_25, &VAR_20);
 if (VAR_26) {
  FUNC_13(VAR_23);
  return VAR_26;
 }

 if (VAR_23) {
  VAR_19 = FUNC_15(VAR_23, VAR_13, VAR_14, VAR_15);
  FUNC_13(VAR_23);
  VAR_16->mnt_sb = VAR_19->d_sb;
  VAR_16->mnt_root = VAR_19;
  return 0;
 }

 VAR_26 = FUNC_9(VAR_14, VAR_22, VAR_12, &VAR_20);
 if (VAR_26)
  return VAR_26;







 VAR_21 = FUNC_14(sizeof(struct btrfs_fs_info), VAR_7);
 if (!VAR_21)
  return -VAR_4;

 VAR_21->fs_devices = VAR_20;

 VAR_21->super_copy = FUNC_14(VAR_1, VAR_7);
 VAR_21->super_for_commit = FUNC_14(VAR_1, VAR_7);
 if (!VAR_21->super_copy || !VAR_21->super_for_commit) {
  VAR_26 = -VAR_4;
  goto error_fs_info;
 }

 VAR_26 = FUNC_6(VAR_20, VAR_22, VAR_12);
 if (VAR_26)
  goto error_fs_info;

 if (!(VAR_13 & VAR_8) && VAR_20->rw_devices == 0) {
  VAR_26 = -VAR_2;
  goto error_close_devices;
 }

 VAR_17 = VAR_20->latest_bdev;
 VAR_18 = FUNC_16(VAR_12, VAR_11, VAR_10, VAR_21);
 if (FUNC_1(VAR_18)) {
  VAR_26 = FUNC_2(VAR_18);
  goto error_close_devices;
 }

 if (VAR_18->s_root) {
  FUNC_4(VAR_20);
  FUNC_11(VAR_21);
  if ((VAR_13 ^ VAR_18->s_flags) & VAR_8)
   VAR_26 = -VAR_3;
 } else {
  char VAR_27[VAR_0];

  VAR_18->s_flags = VAR_13;
  FUNC_17(VAR_18->s_id, FUNC_3(VAR_17, VAR_27), sizeof(VAR_18->s_id));
  FUNC_8(VAR_18)->bdev_holder = VAR_12;
  VAR_26 = FUNC_5(VAR_18, VAR_20, VAR_15,
      VAR_13 & VAR_9 ? 1 : 0);
 }

 VAR_19 = !VAR_26 ? FUNC_12(VAR_18, VAR_24) : FUNC_0(VAR_26);
 if (FUNC_1(VAR_19))
  FUNC_10(VAR_18);

 VAR_16->mnt_sb = VAR_18;
 VAR_16->mnt_root = VAR_19;

 return 0;

error_close_devices:
 FUNC_4(VAR_20);
error_fs_info:
 FUNC_11(VAR_21);
 return VAR_26;
}
