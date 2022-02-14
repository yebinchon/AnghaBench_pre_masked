
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_message {TYPE_2__* rpc_resp; int * rpc_argp; int * rpc_proc; } ;
struct nfs_open_context {int dummy; } ;
struct TYPE_4__ {int fattr; int fh; } ;
struct nfs_createdata {TYPE_2__ res; int arg; } ;
struct inode {int dummy; } ;
struct iattr {int dummy; } ;
struct TYPE_3__ {int name; } ;
struct dentry {TYPE_1__ d_name; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (char*,int) ;
 struct nfs_createdata* FUNC_2 (struct inode*,struct dentry*,struct iattr*) ;
 int FUNC_3 (struct nfs_createdata*) ;
 int FUNC_4 (struct dentry*,int ,int ) ;
 int FUNC_5 (struct inode*) ;
 int * VAR_2 ;
 int FUNC_6 (int ,struct rpc_message*,int ) ;

__attribute__((used)) static int
FUNC_7(struct inode *VAR_3, struct dentry *VAR_4, struct iattr *VAR_5,
  int VAR_6, struct nfs_open_context *VAR_7)
{
 struct nfs_createdata *VAR_8;
 struct rpc_message VAR_9 = {
  .rpc_proc = &VAR_2[VAR_1],
 };
 int VAR_10 = -VAR_0;

 FUNC_1("NFS call  create %s\n", VAR_4->d_name.name);
 VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_5);
 if (VAR_8 == ((void*)0))
  goto out;
 VAR_9.rpc_argp = &VAR_8->arg;
 VAR_9.rpc_resp = &VAR_8->res;
 VAR_10 = FUNC_6(FUNC_0(VAR_3), &VAR_9, 0);
 FUNC_5(VAR_3);
 if (VAR_10 == 0)
  VAR_10 = FUNC_4(VAR_4, VAR_8->res.fh, VAR_8->res.fattr);
 FUNC_3(VAR_8);
out:
 FUNC_1("NFS reply create: %d\n", VAR_10);
 return VAR_10;
}
