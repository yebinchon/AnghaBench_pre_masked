
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nfs_server {TYPE_2__* nfs_client; } ;
struct nfs_fh {scalar_t__ size; } ;
struct nfs_fattr {int valid; } ;
struct inode {int dummy; } ;
struct dentry {int d_sb; int d_name; struct inode* d_inode; } ;
struct TYPE_8__ {int (* lookup ) (int ,struct inode*,int *,struct nfs_fh*,struct nfs_fattr*) ;} ;
struct TYPE_7__ {int client; } ;
struct TYPE_6__ {TYPE_1__* rpc_ops; } ;
struct TYPE_5__ {int (* getattr ) (struct nfs_server*,struct nfs_fh*,struct nfs_fattr*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_1 ;
 TYPE_4__* FUNC_1 (struct inode*) ;
 struct nfs_server* FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct dentry*,struct inode*) ;
 int FUNC_6 (struct dentry*) ;
 struct dentry* FUNC_7 (struct dentry*) ;
 int FUNC_8 (struct dentry*) ;
 struct inode* FUNC_9 (int ,struct nfs_fh*,struct nfs_fattr*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct dentry*,int ) ;
 int FUNC_13 (int ,struct inode*,int *,struct nfs_fh*,struct nfs_fattr*) ;
 int FUNC_14 (struct nfs_server*,struct nfs_fh*,struct nfs_fattr*) ;

int FUNC_15(struct dentry *VAR_2, struct nfs_fh *VAR_3,
    struct nfs_fattr *VAR_4)
{
 struct dentry *VAR_5 = FUNC_7(VAR_2);
 struct inode *VAR_6 = VAR_5->d_inode;
 struct inode *VAR_7;
 int VAR_8 = -VAR_0;

 FUNC_6(VAR_2);


 if (VAR_2->d_inode)
  goto out;
 if (VAR_3->size == 0) {
  VAR_8 = FUNC_1(VAR_6)->lookup(FUNC_3(VAR_6)->client, VAR_6, &VAR_2->d_name, VAR_3, VAR_4);
  if (VAR_8)
   goto out_error;
 }
 FUNC_12(VAR_2, FUNC_11(VAR_6));
 if (!(VAR_4->valid & VAR_1)) {
  struct nfs_server *VAR_9 = FUNC_2(VAR_2->d_sb);
  VAR_8 = VAR_9->nfs_client->rpc_ops->getattr(VAR_9, VAR_3, VAR_4);
  if (VAR_8 < 0)
   goto out_error;
 }
 VAR_7 = FUNC_9(VAR_2->d_sb, VAR_3, VAR_4);
 VAR_8 = FUNC_4(VAR_7);
 if (FUNC_0(VAR_7))
  goto out_error;
 FUNC_5(VAR_2, VAR_7);
out:
 FUNC_8(VAR_5);
 return 0;
out_error:
 FUNC_10(VAR_6);
 FUNC_8(VAR_5);
 return VAR_8;
}
