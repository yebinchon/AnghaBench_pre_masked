
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_clnt {int dummy; } ;
struct qstr {int dummy; } ;
struct nfs_fh {int dummy; } ;
struct nfs_fattr {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {int (* lookup ) (int ,struct inode*,struct qstr*,struct nfs_fh*,struct nfs_fattr*) ;} ;
struct TYPE_3__ {int client; } ;


 struct rpc_clnt* FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 TYPE_1__* FUNC_2 (struct inode*) ;
 struct rpc_clnt* FUNC_3 (int ) ;
 int FUNC_4 (int ,struct inode*,struct qstr*,struct nfs_fh*,struct nfs_fattr*) ;

__attribute__((used)) static inline struct rpc_clnt *FUNC_5(struct inode *VAR_0,
           struct qstr *VAR_1,
           struct nfs_fh *VAR_2,
           struct nfs_fattr *VAR_3)
{
 int VAR_4 = FUNC_1(VAR_0)->lookup(FUNC_2(VAR_0)->client, VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_4)
  return FUNC_0(VAR_4);
 return FUNC_3(FUNC_2(VAR_0)->client);
}
