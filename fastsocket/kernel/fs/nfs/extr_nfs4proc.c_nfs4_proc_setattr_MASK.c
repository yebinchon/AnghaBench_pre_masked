
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_cred {int dummy; } ;
struct nfs_open_context {struct nfs4_state* state; struct rpc_cred* cred; } ;
struct nfs_fattr {int dummy; } ;
struct nfs4_state {int dummy; } ;
struct inode {int dummy; } ;
struct iattr {int ia_valid; int ia_file; } ;
struct dentry {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct inode*,struct rpc_cred*,struct nfs_fattr*,struct iattr*,struct nfs4_state*) ;
 int FUNC_1 (struct nfs_fattr*) ;
 struct nfs_open_context* FUNC_2 (int ) ;
 int FUNC_3 (struct inode*,struct iattr*) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;

__attribute__((used)) static int
FUNC_6(struct dentry *VAR_4, struct nfs_fattr *VAR_5,
    struct iattr *VAR_6)
{
 struct inode *VAR_7 = VAR_4->d_inode;
 struct rpc_cred *VAR_8 = ((void*)0);
 struct nfs4_state *VAR_9 = ((void*)0);
 int VAR_10;

 if (FUNC_4(VAR_7))
  FUNC_5(VAR_7);

 FUNC_1(VAR_5);


 if (VAR_6->ia_valid & VAR_3)
  VAR_6->ia_valid &= ~(VAR_2|VAR_0);


 if ((VAR_6->ia_valid & ~(VAR_1|VAR_3)) == 0)
  return 0;


 if (VAR_6->ia_valid & VAR_1) {
  struct nfs_open_context *VAR_11;

  VAR_11 = FUNC_2(VAR_6->ia_file);
  if (VAR_11) {
   VAR_8 = VAR_11->cred;
   VAR_9 = VAR_11->state;
  }
 }

 VAR_10 = FUNC_0(VAR_7, VAR_8, VAR_5, VAR_6, VAR_9);
 if (VAR_10 == 0)
  FUNC_3(VAR_7, VAR_6);
 return VAR_10;
}
