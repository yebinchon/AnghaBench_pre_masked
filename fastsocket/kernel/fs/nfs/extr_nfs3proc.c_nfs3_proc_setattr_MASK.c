
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {int rpc_cred; struct nfs_fattr* rpc_resp; struct nfs3_sattrargs* rpc_argp; int * rpc_proc; } ;
struct nfs_fattr {int dummy; } ;
struct nfs3_sattrargs {struct iattr* sattr; int fh; } ;
struct inode {int dummy; } ;
struct iattr {int ia_valid; int ia_file; } ;
struct dentry {struct inode* d_inode; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (char*,...) ;
 int * VAR_2 ;
 int FUNC_3 (struct nfs_fattr*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct inode*,struct iattr*) ;
 int FUNC_6 (int ,struct rpc_message*,int ) ;

__attribute__((used)) static int
FUNC_7(struct dentry *VAR_3, struct nfs_fattr *VAR_4,
   struct iattr *VAR_5)
{
 struct inode *VAR_6 = VAR_3->d_inode;
 struct nfs3_sattrargs VAR_7 = {
  .fh = FUNC_1(VAR_6),
  .sattr = VAR_5,
 };
 struct rpc_message VAR_8 = {
  .rpc_proc = &VAR_2[VAR_1],
  .rpc_argp = &VAR_7,
  .rpc_resp = VAR_4,
 };
 int VAR_9;

 FUNC_2("NFS call  setattr\n");
 if (VAR_5->ia_valid & VAR_0)
  VAR_8.rpc_cred = FUNC_4(VAR_5->ia_file);
 FUNC_3(VAR_4);
 VAR_9 = FUNC_6(FUNC_0(VAR_6), &VAR_8, 0);
 if (VAR_9 == 0)
  FUNC_5(VAR_6, VAR_5);
 FUNC_2("NFS reply setattr: %d\n", VAR_9);
 return VAR_9;
}
