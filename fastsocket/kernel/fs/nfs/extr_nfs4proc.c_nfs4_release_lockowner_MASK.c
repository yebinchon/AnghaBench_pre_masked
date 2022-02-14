
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rpc_message {TYPE_4__* rpc_argp; int * rpc_proc; } ;
struct nfs_server {int client; int s_dev; TYPE_1__* nfs_client; } ;
struct TYPE_7__ {int s_dev; int id; int clientid; } ;
struct TYPE_8__ {TYPE_3__ lock_owner; } ;
struct nfs_release_lockowner_data {TYPE_4__ args; struct nfs_server* server; struct nfs4_lock_state* lsp; } ;
struct TYPE_6__ {int id; } ;
struct nfs4_lock_state {TYPE_2__ ls_id; } ;
struct TYPE_5__ {scalar_t__ cl_minorversion; int cl_clientid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 struct nfs_release_lockowner_data* FUNC_0 (int,int ) ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,struct rpc_message*,int ,int *,struct nfs_release_lockowner_data*) ;

__attribute__((used)) static int FUNC_2(struct nfs_server *VAR_6, struct nfs4_lock_state *VAR_7)
{
 struct nfs_release_lockowner_data *VAR_8;
 struct rpc_message VAR_9 = {
  .rpc_proc = &VAR_4[VAR_3],
 };

 if (VAR_6->nfs_client->cl_minorversion != 0)
  return -VAR_0;
 VAR_8 = FUNC_0(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;
 VAR_8->lsp = VAR_7;
 VAR_8->server = VAR_6;
 VAR_8->args.lock_owner.clientid = VAR_6->nfs_client->cl_clientid;
 VAR_8->args.lock_owner.id = VAR_7->ls_id.id;
 VAR_8->args.lock_owner.s_dev = VAR_6->s_dev;
 VAR_9.rpc_argp = &VAR_8->args;
 FUNC_1(VAR_6->client, &VAR_9, 0, &VAR_5, VAR_8);
 return 0;
}
