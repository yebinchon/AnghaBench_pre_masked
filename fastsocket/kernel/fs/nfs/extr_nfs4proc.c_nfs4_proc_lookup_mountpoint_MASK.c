
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_clnt {int dummy; } ;
struct qstr {int dummy; } ;
struct nfs_fh {int dummy; } ;
struct nfs_fattr {int dummy; } ;
struct inode {int dummy; } ;


 struct rpc_clnt* FUNC_0 (int) ;
 struct rpc_clnt* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct rpc_clnt**,struct inode*,struct qstr*,struct nfs_fh*,struct nfs_fattr*) ;
 struct rpc_clnt* FUNC_3 (struct rpc_clnt*) ;

struct rpc_clnt *
FUNC_4(struct inode *VAR_0, struct qstr *VAR_1,
       struct nfs_fh *VAR_2, struct nfs_fattr *VAR_3)
{
 struct rpc_clnt *VAR_4 = FUNC_1(VAR_0);
 int VAR_5;

 VAR_5 = FUNC_2(&VAR_4, VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_5 < 0)
  return FUNC_0(VAR_5);
 return (VAR_4 == FUNC_1(VAR_0)) ? FUNC_3(VAR_4) : VAR_4;
}
