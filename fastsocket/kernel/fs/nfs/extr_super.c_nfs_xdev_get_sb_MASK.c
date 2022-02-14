
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vfsmount {struct super_block* mnt_root; struct super_block* mnt_sb; } ;
struct super_block {int flags; int backing_dev_info; int s_root; int s_flags; TYPE_1__* d_inode; struct super_block* s_fs_info; } ;
struct nfs_server {int flags; int backing_dev_info; int s_root; int s_flags; TYPE_1__* d_inode; struct nfs_server* s_fs_info; } ;
struct nfs_sb_mountdata {int mntflags; struct super_block* server; } ;
struct nfs_clone_mount {struct super_block* sb; int fh; int authflavor; int fattr; } ;
struct file_system_type {int dummy; } ;
struct dentry {int flags; int backing_dev_info; int s_root; int s_flags; TYPE_1__* d_inode; struct dentry* s_fs_info; } ;
struct TYPE_9__ {TYPE_3__* nfs_client; } ;
struct TYPE_8__ {TYPE_2__* rpc_ops; } ;
struct TYPE_7__ {scalar_t__ dir_inode_ops; } ;
struct TYPE_6__ {scalar_t__ i_op; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct super_block*) ;
 int FUNC_7 (struct super_block*) ;
 struct super_block* FUNC_8 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_9 (struct super_block*,struct super_block*) ;
 int FUNC_10 (struct super_block*,void*) ;
 int FUNC_11 (struct super_block*) ;
 int VAR_5 ;
 int FUNC_12 (struct super_block*,int *,struct nfs_clone_mount*) ;
 struct super_block* FUNC_13 (struct super_block*,int ) ;
 int VAR_6 ;
 int FUNC_14 (struct super_block*,struct super_block*) ;
 struct super_block* FUNC_15 (int *,int (*) (struct super_block*,void*),int ,struct nfs_sb_mountdata*) ;

__attribute__((used)) static int FUNC_16(struct file_system_type *VAR_7, int VAR_8,
      const char *VAR_9, void *VAR_10,
      struct vfsmount *VAR_11)
{
 struct nfs_clone_mount *VAR_12 = VAR_10;
 struct super_block *VAR_13;
 struct nfs_server *VAR_14;
 struct dentry *VAR_15;
 int (*VAR_16)(struct super_block *, void *) = FUNC_10;
 struct nfs_sb_mountdata VAR_17 = {
  .mntflags = VAR_8,
 };
 int VAR_18;

 FUNC_5("--> nfs_xdev_get_sb()\n");


 VAR_14 = FUNC_8(FUNC_1(VAR_12->sb), VAR_12->fh, VAR_12->fattr, VAR_12->authflavor);
 if (FUNC_0(VAR_14)) {
  VAR_18 = FUNC_2(VAR_14);
  goto out_err_noserver;
 }
 VAR_17.server = VAR_14;

 if (VAR_14->flags & VAR_4)
  VAR_16 = ((void*)0);


 if (VAR_14->flags & VAR_3)
  VAR_17.mntflags |= VAR_2;


 VAR_13 = FUNC_15(&VAR_5, VAR_16, VAR_6, &VAR_17);
 if (FUNC_0(VAR_13)) {
  VAR_18 = FUNC_2(VAR_13);
  goto out_err_nosb;
 }

 if (VAR_13->s_fs_info != VAR_14) {
  FUNC_11(VAR_14);
  VAR_14 = ((void*)0);
 } else {
  VAR_18 = FUNC_7(VAR_14);
  if (VAR_18)
   goto error_splat_bdi;
 }

 if (!VAR_13->s_root) {

  FUNC_9(VAR_13, VAR_12->sb);
  FUNC_12(VAR_13, ((void*)0), VAR_12);
 }

 VAR_15 = FUNC_13(VAR_13, VAR_12->fh);
 if (FUNC_0(VAR_15)) {
  VAR_18 = FUNC_2(VAR_15);
  goto error_splat_super;
 }
 if (VAR_15->d_inode->i_op != FUNC_1(VAR_13)->nfs_client->rpc_ops->dir_inode_ops) {
  VAR_18 = -VAR_0;
  goto error_splat_root;
 }

 VAR_13->s_flags |= VAR_1;
 VAR_11->mnt_sb = VAR_13;
 VAR_11->mnt_root = VAR_15;


 VAR_18 = FUNC_14(VAR_12->sb, VAR_13);
 if (VAR_18)
  goto error_splat_root;

 FUNC_5("<-- nfs_xdev_get_sb() = 0\n");
 return 0;

out_err_nosb:
 FUNC_11(VAR_14);
out_err_noserver:
 FUNC_5("<-- nfs_xdev_get_sb() = %d [error]\n", VAR_18);
 return VAR_18;

error_splat_root:
 FUNC_6(VAR_15);
error_splat_super:
 if (VAR_14 && !VAR_13->s_root)
  FUNC_3(&VAR_14->backing_dev_info);
error_splat_bdi:
 FUNC_4(VAR_13);
 FUNC_5("<-- nfs_xdev_get_sb() = %d [splat]\n", VAR_18);
 return VAR_18;
}
