
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_message {int dummy; } ;
struct rpc_clnt {int dummy; } ;
struct nfs_server {TYPE_2__* nfs_client; } ;
struct nfs4_sequence_res {int dummy; } ;
struct nfs4_sequence_args {int dummy; } ;
struct TYPE_4__ {TYPE_1__* cl_mvops; } ;
struct TYPE_3__ {int (* call_sync ) (struct rpc_clnt*,struct nfs_server*,struct rpc_message*,struct nfs4_sequence_args*,struct nfs4_sequence_res*,int) ;} ;


 int FUNC_0 (struct rpc_clnt*,struct nfs_server*,struct rpc_message*,struct nfs4_sequence_args*,struct nfs4_sequence_res*,int) ;

__attribute__((used)) static inline
int FUNC_1(struct rpc_clnt *VAR_0,
     struct nfs_server *VAR_1,
     struct rpc_message *VAR_2,
     struct nfs4_sequence_args *VAR_3,
     struct nfs4_sequence_res *VAR_4,
     int VAR_5)
{
 return VAR_1->nfs_client->cl_mvops->call_sync(VAR_0, VAR_1, VAR_2,
      VAR_3, VAR_4, VAR_5);
}
