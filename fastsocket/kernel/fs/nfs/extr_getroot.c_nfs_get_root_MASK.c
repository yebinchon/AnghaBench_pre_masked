
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct nfs_server {TYPE_2__* nfs_client; } ;
struct nfs_fsinfo {int * fattr; } ;
struct nfs_fh {int dummy; } ;
struct inode {int * d_op; } ;
struct dentry {int * d_op; } ;
struct TYPE_4__ {TYPE_1__* rpc_ops; } ;
struct TYPE_3__ {int (* getroot ) (struct nfs_server*,struct nfs_fh*,struct nfs_fsinfo*) ;int * dentry_ops; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 struct nfs_server* FUNC_3 (struct super_block*) ;
 struct inode* FUNC_4 (struct inode*) ;
 int FUNC_5 (char*,...) ;
 int * FUNC_6 () ;
 struct inode* FUNC_7 (struct super_block*,struct nfs_fh*,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct super_block*,struct inode*) ;
 int FUNC_10 (struct inode*,struct inode*) ;
 int FUNC_11 (struct nfs_server*,struct nfs_fh*,struct nfs_fsinfo*) ;

struct dentry *FUNC_12(struct super_block *VAR_1, struct nfs_fh *VAR_2)
{
 struct nfs_server *VAR_3 = FUNC_3(VAR_1);
 struct nfs_fsinfo VAR_4;
 struct dentry *VAR_5;
 struct inode *VAR_6;
 int VAR_7;


 VAR_4.fattr = FUNC_6();
 if (VAR_4.fattr == ((void*)0))
  return FUNC_1(-VAR_0);

 VAR_7 = VAR_3->nfs_client->rpc_ops->getroot(VAR_3, VAR_2, &VAR_4);
 if (VAR_7 < 0) {
  FUNC_5("nfs_get_root: getattr error = %d\n", -VAR_7);
  VAR_5 = FUNC_1(VAR_7);
  goto out;
 }

 VAR_6 = FUNC_7(VAR_1, VAR_2, VAR_4.fattr);
 if (FUNC_2(VAR_6)) {
  FUNC_5("nfs_get_root: get root inode failed\n");
  VAR_5 = FUNC_0(VAR_6);
  goto out;
 }

 VAR_7 = FUNC_9(VAR_1, VAR_6);
 if (VAR_7 != 0) {
  VAR_5 = FUNC_1(VAR_7);
  goto out;
 }





 VAR_5 = FUNC_4(VAR_6);
 if (FUNC_2(VAR_5)) {
  FUNC_5("nfs_get_root: get root dentry failed\n");
  goto out;
 }

 FUNC_10(VAR_5, VAR_6);

 if (VAR_5->d_op == ((void*)0))
  VAR_5->d_op = VAR_3->nfs_client->rpc_ops->dentry_ops;
out:
 FUNC_8(VAR_4.fattr);
 return VAR_5;
}
