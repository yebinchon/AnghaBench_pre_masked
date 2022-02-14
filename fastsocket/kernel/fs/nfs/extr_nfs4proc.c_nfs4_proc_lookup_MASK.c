
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_clnt {int dummy; } ;
struct qstr {int dummy; } ;
struct nfs_fh {int dummy; } ;
struct nfs_fattr {int dummy; } ;
struct inode {int dummy; } ;


 struct rpc_clnt* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct rpc_clnt**,struct inode*,struct qstr*,struct nfs_fh*,struct nfs_fattr*) ;
 int FUNC_2 (struct nfs_fattr*) ;
 int FUNC_3 (struct rpc_clnt*) ;

__attribute__((used)) static int FUNC_4(struct rpc_clnt *VAR_0, struct inode *VAR_1, struct qstr *VAR_2,
       struct nfs_fh *VAR_3, struct nfs_fattr *VAR_4)
{
 int VAR_5;
 struct rpc_clnt *VAR_6 = FUNC_0(VAR_1);

 VAR_5 = FUNC_1(&VAR_6, VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_6 != FUNC_0(VAR_1)) {
  FUNC_3(VAR_6);
  FUNC_2(VAR_4);
 }
 return VAR_5;
}
