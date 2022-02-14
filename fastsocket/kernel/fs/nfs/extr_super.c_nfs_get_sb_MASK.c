
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {struct super_block* mnt_root; struct super_block* mnt_sb; } ;
struct super_block {int flags; int backing_dev_info; int s_root; int s_flags; struct super_block* s_fs_info; } ;
struct nfs_server {int flags; int backing_dev_info; int s_root; int s_flags; struct nfs_server* s_fs_info; } ;
struct nfs_sb_mountdata {int mntflags; struct super_block* server; } ;
struct nfs_parsed_mount_data {int version; int lsm_opts; int * fscache_uniq; } ;
struct nfs_fh {int dummy; } ;
struct file_system_type {int dummy; } ;
struct dentry {int flags; int backing_dev_info; int s_root; int s_flags; struct dentry* s_fs_info; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (int,char const*,struct nfs_parsed_mount_data*,struct vfsmount*) ;
 struct nfs_fh* FUNC_6 () ;
 struct nfs_parsed_mount_data* FUNC_7 (int ) ;
 int FUNC_8 (struct super_block*) ;
 int FUNC_9 (struct super_block*,void*) ;
 struct super_block* FUNC_10 (struct nfs_parsed_mount_data*,struct nfs_fh*) ;
 int FUNC_11 (struct super_block*,struct nfs_parsed_mount_data*) ;
 int FUNC_12 (struct nfs_fh*) ;
 int FUNC_13 (struct nfs_parsed_mount_data*) ;
 int FUNC_14 (struct super_block*) ;
 int FUNC_15 (struct super_block*,int *,int *) ;
 struct super_block* FUNC_16 (struct super_block*,struct nfs_fh*) ;
 int VAR_6 ;
 int FUNC_17 (void*,struct nfs_parsed_mount_data*,struct nfs_fh*,char const*) ;
 int FUNC_18 (struct super_block*,int *) ;
 struct super_block* FUNC_19 (struct file_system_type*,int (*) (struct super_block*,void*),int ,struct nfs_sb_mountdata*) ;

__attribute__((used)) static int FUNC_20(struct file_system_type *VAR_7,
 int VAR_8, const char *VAR_9, void *VAR_10, struct vfsmount *VAR_11)
{
 struct nfs_server *VAR_12 = ((void*)0);
 struct super_block *VAR_13;
 struct nfs_parsed_mount_data *VAR_14;
 struct nfs_fh *VAR_15;
 struct dentry *VAR_16;
 int (*VAR_17)(struct super_block *, void *) = FUNC_9;
 struct nfs_sb_mountdata VAR_18 = {
  .mntflags = VAR_8,
 };
 int VAR_19 = -VAR_0;

 VAR_14 = FUNC_7(VAR_3);
 VAR_15 = FUNC_6();
 if (VAR_14 == ((void*)0) || VAR_15 == ((void*)0))
  goto out;


 VAR_19 = FUNC_17(VAR_10, VAR_14, VAR_15, VAR_9);
 if (VAR_19 < 0)
  goto out;
 VAR_12 = FUNC_10(VAR_14, VAR_15);
 if (FUNC_0(VAR_12)) {
  VAR_19 = FUNC_1(VAR_12);
  goto out;
 }
 VAR_18.server = VAR_12;

 if (VAR_12->flags & VAR_5)
  VAR_17 = ((void*)0);


 if (VAR_12->flags & VAR_4)
  VAR_18.mntflags |= VAR_2;


 VAR_13 = FUNC_19(VAR_7, VAR_17, VAR_6, &VAR_18);
 if (FUNC_0(VAR_13)) {
  VAR_19 = FUNC_1(VAR_13);
  goto out_err_nosb;
 }

 if (VAR_13->s_fs_info != VAR_12) {
  FUNC_14(VAR_12);
  VAR_12 = ((void*)0);
 } else {
  VAR_19 = FUNC_8(VAR_12);
  if (VAR_19)
   goto error_splat_bdi;
 }

 if (!VAR_13->s_root) {

  FUNC_11(VAR_13, VAR_14);
  FUNC_15(
   VAR_13, VAR_14 ? VAR_14->fscache_uniq : ((void*)0), ((void*)0));
 }

 VAR_16 = FUNC_16(VAR_13, VAR_15);
 if (FUNC_0(VAR_16)) {
  VAR_19 = FUNC_1(VAR_16);
  goto error_splat_super;
 }

 VAR_19 = FUNC_18(VAR_13, &VAR_14->lsm_opts);
 if (VAR_19)
  goto error_splat_root;

 VAR_13->s_flags |= VAR_1;
 VAR_11->mnt_sb = VAR_13;
 VAR_11->mnt_root = VAR_16;
 VAR_19 = 0;

out:
 FUNC_13(VAR_14);
 FUNC_12(VAR_15);
 return VAR_19;

out_err_nosb:
 FUNC_14(VAR_12);
 goto out;

error_splat_root:
 FUNC_4(VAR_16);
error_splat_super:
 if (VAR_12 && !VAR_13->s_root)
  FUNC_2(&VAR_12->backing_dev_info);
error_splat_bdi:
 FUNC_3(VAR_13);
 goto out;
}
