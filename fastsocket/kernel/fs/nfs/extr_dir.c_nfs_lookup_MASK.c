
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nfs_fh {int dummy; } ;
struct nfs_fattr {int dummy; } ;
struct nameidata {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {scalar_t__ len; int name; } ;
struct dentry {int d_sb; TYPE_1__ d_name; struct dentry* d_parent; int d_op; } ;
struct TYPE_6__ {int (* lookup ) (int ,struct inode*,TYPE_1__*,struct nfs_fh*,struct nfs_fattr*) ;int dentry_ops; } ;
struct TYPE_5__ {scalar_t__ namelen; int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dentry* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int VAR_3 ;
 TYPE_3__* FUNC_2 (struct inode*) ;
 TYPE_2__* FUNC_3 (struct inode*) ;
 int VAR_4 ;
 int FUNC_4 (struct dentry*,int *) ;
 struct dentry* FUNC_5 (struct dentry*,struct inode*) ;
 int FUNC_6 (int ,char*,int ,int ) ;
 int FUNC_7 (struct inode*) ;
 struct nfs_fattr* FUNC_8 () ;
 struct nfs_fh* FUNC_9 () ;
 int FUNC_10 (struct dentry*) ;
 struct inode* FUNC_11 (int ,struct nfs_fh*,struct nfs_fattr*) ;
 int FUNC_12 (struct nfs_fattr*) ;
 int FUNC_13 (struct nfs_fh*) ;
 int FUNC_14 (struct inode*,int ) ;
 scalar_t__ FUNC_15 (struct inode*,struct nameidata*) ;
 int FUNC_16 (struct inode*) ;
 int FUNC_17 (struct dentry*,int ) ;
 int FUNC_18 (struct dentry*) ;
 int FUNC_19 (int ,struct inode*,TYPE_1__*,struct nfs_fh*,struct nfs_fattr*) ;

__attribute__((used)) static struct dentry *FUNC_20(struct inode *VAR_5, struct dentry * VAR_6, struct nameidata *VAR_7)
{
 struct dentry *VAR_8;
 struct dentry *VAR_9;
 struct inode *VAR_10 = ((void*)0);
 struct nfs_fh *VAR_11 = ((void*)0);
 struct nfs_fattr *VAR_12 = ((void*)0);
 int VAR_13;

 FUNC_6(VAR_4, "NFS: lookup(%s/%s)\n",
  VAR_6->d_parent->d_name.name, VAR_6->d_name.name);
 FUNC_14(VAR_5, VAR_3);

 VAR_8 = FUNC_0(-VAR_0);
 if (VAR_6->d_name.len > FUNC_3(VAR_5)->namelen)
  goto out;

 VAR_6->d_op = FUNC_2(VAR_5)->dentry_ops;





 if (FUNC_15(VAR_5, VAR_7)) {
  FUNC_4(VAR_6, ((void*)0));
  VAR_8 = ((void*)0);
  goto out;
 }

 VAR_8 = FUNC_0(-VAR_2);
 VAR_11 = FUNC_9();
 VAR_12 = FUNC_8();
 if (VAR_11 == ((void*)0) || VAR_12 == ((void*)0))
  goto out;

 VAR_9 = VAR_6->d_parent;

 FUNC_10(VAR_9);
 VAR_13 = FUNC_2(VAR_5)->lookup(FUNC_3(VAR_5)->client, VAR_5, &VAR_6->d_name, VAR_11, VAR_12);
 if (VAR_13 == -VAR_1)
  goto no_entry;
 if (VAR_13 < 0) {
  VAR_8 = FUNC_0(VAR_13);
  goto out_unblock_sillyrename;
 }
 VAR_10 = FUNC_11(VAR_6->d_sb, VAR_11, VAR_12);
 VAR_8 = (struct dentry *)VAR_10;
 if (FUNC_1(VAR_8))
  goto out_unblock_sillyrename;


 FUNC_7(VAR_5);

no_entry:
 VAR_8 = FUNC_5(VAR_6, VAR_10);
 if (VAR_8 != ((void*)0)) {
  if (FUNC_1(VAR_8))
   goto out_unblock_sillyrename;
  VAR_6 = VAR_8;
 }
 FUNC_17(VAR_6, FUNC_16(VAR_5));
out_unblock_sillyrename:
 FUNC_18(VAR_9);
out:
 FUNC_12(VAR_12);
 FUNC_13(VAR_11);
 return VAR_8;
}
