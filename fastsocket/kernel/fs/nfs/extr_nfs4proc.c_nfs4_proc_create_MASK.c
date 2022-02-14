
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_cred {int dummy; } ;
struct nfs_open_context {struct nfs4_state* state; int mode; struct dentry* dentry; struct rpc_cred* cred; } ;
struct nfs4_state {int inode; } ;
struct inode {int dummy; } ;
struct iattr {int dummy; } ;
struct dentry {int dummy; } ;
typedef int fmode_t ;


 scalar_t__ FUNC_0 (struct nfs4_state*) ;
 int FUNC_1 (struct nfs4_state*) ;
 int FUNC_2 (struct dentry*,int ) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct nfs4_state*,int ) ;
 struct nfs4_state* FUNC_6 (struct inode*,struct dentry*,int ,int,struct iattr*,struct rpc_cred*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct dentry*,int ) ;

__attribute__((used)) static int
FUNC_9(struct inode *VAR_0, struct dentry *VAR_1, struct iattr *VAR_2,
                 int VAR_3, struct nfs_open_context *VAR_4)
{
 struct dentry *VAR_5 = VAR_1;
 struct nfs4_state *VAR_6;
 struct rpc_cred *VAR_7 = ((void*)0);
 fmode_t VAR_8 = 0;
 int VAR_9 = 0;

 if (VAR_4 != ((void*)0)) {
  VAR_7 = VAR_4->cred;
  VAR_5 = VAR_4->dentry;
  VAR_8 = VAR_4->mode;
 }
 VAR_6 = FUNC_6(VAR_0, VAR_5, VAR_8, VAR_3, VAR_2, VAR_7);
 FUNC_3(VAR_1);
 if (FUNC_0(VAR_6)) {
  VAR_9 = FUNC_1(VAR_6);
  goto out;
 }
 FUNC_2(VAR_1, FUNC_4(VAR_6->inode));
 FUNC_8(VAR_1, FUNC_7(VAR_0));
 if (VAR_4 != ((void*)0))
  VAR_4->state = VAR_6;
 else
  FUNC_5(VAR_6, VAR_8);
out:
 return VAR_9;
}
