
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_flags; struct nfs_server* s_fs_info; } ;
struct rpc_clnt {TYPE_1__* cl_auth; } ;
struct nfs_server {scalar_t__ nfs_client; scalar_t__ flags; scalar_t__ wsize; scalar_t__ rsize; scalar_t__ acregmin; scalar_t__ acregmax; scalar_t__ acdirmin; scalar_t__ acdirmax; struct rpc_clnt* client; } ;
struct TYPE_2__ {scalar_t__ au_flavor; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const struct super_block *VAR_1, const struct nfs_server *VAR_2, int VAR_3)
{
 const struct nfs_server *VAR_4 = VAR_1->s_fs_info;
 const struct rpc_clnt *VAR_5 = VAR_4->client;
 const struct rpc_clnt *VAR_6 = VAR_2->client;

 if ((VAR_1->s_flags & VAR_0) != (VAR_3 & VAR_0))
  goto Ebusy;
 if (VAR_4->nfs_client != VAR_2->nfs_client)
  goto Ebusy;
 if (VAR_4->flags != VAR_2->flags)
  goto Ebusy;
 if (VAR_4->wsize != VAR_2->wsize)
  goto Ebusy;
 if (VAR_4->rsize != VAR_2->rsize)
  goto Ebusy;
 if (VAR_4->acregmin != VAR_2->acregmin)
  goto Ebusy;
 if (VAR_4->acregmax != VAR_2->acregmax)
  goto Ebusy;
 if (VAR_4->acdirmin != VAR_2->acdirmin)
  goto Ebusy;
 if (VAR_4->acdirmax != VAR_2->acdirmax)
  goto Ebusy;
 if (VAR_5->cl_auth->au_flavor != VAR_6->cl_auth->au_flavor)
  goto Ebusy;
 return 1;
Ebusy:
 return 0;
}
