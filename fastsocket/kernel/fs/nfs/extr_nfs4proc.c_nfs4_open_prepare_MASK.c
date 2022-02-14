
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int * rpc_proc; } ;
struct rpc_task {int * tk_action; TYPE_3__ tk_msg; } ;
struct nfs_delegation {int dummy; } ;
struct nfs_client {TYPE_4__* cl_mvops; int cl_clientid; } ;
struct TYPE_10__ {int id; } ;
struct nfs4_state_owner {TYPE_2__ so_owner_id; TYPE_1__* so_server; } ;
struct TYPE_14__ {int seq_res; int fh; } ;
struct TYPE_13__ {int open_flags; scalar_t__ claim; int createmode; int seqid; int seq_args; int server; int fh; int clientid; int id; int fmode; } ;
struct nfs4_opendata {TYPE_6__ o_res; TYPE_5__ o_arg; int timestamp; TYPE_7__* state; struct nfs4_state_owner* owner; } ;
struct TYPE_16__ {int delegation; } ;
struct TYPE_15__ {int inode; } ;
struct TYPE_12__ {scalar_t__ minor_version; } ;
struct TYPE_9__ {struct nfs_client* nfs_client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 TYPE_8__* FUNC_0 (int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (TYPE_7__*,int ,int) ;
 scalar_t__ FUNC_2 (struct nfs_delegation*,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (struct nfs_client*) ;
 int * VAR_9 ;
 int FUNC_4 (struct rpc_task*,int *) ;
 scalar_t__ FUNC_5 (int ,int *,int *,struct rpc_task*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,struct rpc_task*) ;
 struct nfs_delegation* FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (struct rpc_task*) ;

__attribute__((used)) static void FUNC_13(struct rpc_task *VAR_10, void *VAR_11)
{
 struct nfs4_opendata *VAR_12 = VAR_11;
 struct nfs4_state_owner *VAR_13 = VAR_12->owner;
 struct nfs_client *VAR_14 = VAR_13->so_server->nfs_client;

 if (FUNC_8(VAR_12->o_arg.seqid, VAR_10) != 0)
  goto out_wait;




 if (VAR_12->state != ((void*)0)) {
  struct nfs_delegation *VAR_15;

  if (FUNC_1(VAR_12->state, VAR_12->o_arg.fmode, VAR_12->o_arg.open_flags))
   goto out_no_action;
  FUNC_10();
  VAR_15 = FUNC_9(FUNC_0(VAR_12->state->inode)->delegation);
  if (VAR_12->o_arg.claim != VAR_4 &&
      FUNC_2(VAR_15, VAR_12->o_arg.fmode))
   goto unlock_no_action;
  FUNC_11();
 }

 VAR_12->o_arg.id = VAR_13->so_owner_id.id;
 VAR_12->o_arg.clientid = VAR_14->cl_clientid;
 if (VAR_12->o_arg.claim == VAR_5) {
  VAR_10->tk_msg.rpc_proc = &VAR_9[VAR_6];
  FUNC_6(&VAR_12->o_res.fh, VAR_12->o_arg.fh);
 }
 VAR_12->timestamp = VAR_8;
 if (FUNC_5(VAR_12->o_arg.server,
    &VAR_12->o_arg.seq_args,
    &VAR_12->o_res.seq_res,
    VAR_10) != 0)
  FUNC_7(VAR_12->o_arg.seqid);
 else
  FUNC_12(VAR_10);


 VAR_12->o_arg.createmode = VAR_3;
 if (VAR_12->o_arg.open_flags & VAR_7) {
  VAR_12->o_arg.createmode = VAR_0;
  if (FUNC_3(VAR_14))
   VAR_12->o_arg.createmode = VAR_2;
  else if (VAR_14->cl_mvops->minor_version > 0)
   VAR_12->o_arg.createmode = VAR_1;
 }
 return;
unlock_no_action:
 FUNC_11();
out_no_action:
 VAR_10->tk_action = ((void*)0);
out_wait:
 FUNC_4(VAR_10, &VAR_12->o_res.seq_res);
}
