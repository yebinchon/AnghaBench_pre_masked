
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_clnt {int dummy; } ;
struct qstr {int dummy; } ;
struct page {int dummy; } ;
struct nfs4_fs_locations {int dummy; } ;
struct nfs4_exception {scalar_t__ retry; } ;
struct inode {int dummy; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct rpc_clnt*,struct inode*,struct qstr const*,struct nfs4_fs_locations*,struct page*) ;
 int FUNC_2 (int ,int ,struct nfs4_exception*) ;

int FUNC_3(struct rpc_clnt *VAR_0, struct inode *VAR_1,
      const struct qstr *VAR_2,
      struct nfs4_fs_locations *VAR_3,
      struct page *VAR_4)
{
 struct nfs4_exception VAR_5 = { };
 int VAR_6;
 do {
  VAR_6 = FUNC_2(FUNC_0(VAR_1),
    FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4),
    &VAR_5);
 } while (VAR_5.retry);
 return VAR_6;
}
