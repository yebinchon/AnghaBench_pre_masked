
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {int rpc_cred; struct nfs_fattr* rpc_resp; struct nfs_sattrargs* rpc_argp; int * rpc_proc; } ;
struct nfs_sattrargs {struct iattr* sattr; int fh; } ;
struct nfs_fattr {int dummy; } ;
struct inode {int dummy; } ;
struct iattr {int ia_valid; int ia_file; int ia_mode; } ;
struct dentry {struct inode* d_inode; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct nfs_fattr*) ;
 int FUNC_4 (int ) ;
 int * VAR_3 ;
 int FUNC_5 (struct inode*,struct iattr*) ;
 int FUNC_6 (int ,struct rpc_message*,int ) ;

__attribute__((used)) static int
FUNC_7(struct dentry *VAR_4, struct nfs_fattr *VAR_5,
   struct iattr *VAR_6)
{
 struct inode *VAR_7 = VAR_4->d_inode;
 struct nfs_sattrargs VAR_8 = {
  .fh = FUNC_1(VAR_7),
  .sattr = VAR_6
 };
 struct rpc_message VAR_9 = {
  .rpc_proc = &VAR_3[VAR_1],
  .rpc_argp = &VAR_8,
  .rpc_resp = VAR_5,
 };
 int VAR_10;


 VAR_6->ia_mode &= VAR_2;

 FUNC_2("NFS call  setattr\n");
 if (VAR_6->ia_valid & VAR_0)
  VAR_9.rpc_cred = FUNC_4(VAR_6->ia_file);
 FUNC_3(VAR_5);
 VAR_10 = FUNC_6(FUNC_0(VAR_7), &VAR_9, 0);
 if (VAR_10 == 0)
  FUNC_5(VAR_7, VAR_6);
 FUNC_2("NFS reply setattr: %d\n", VAR_10);
 return VAR_10;
}
