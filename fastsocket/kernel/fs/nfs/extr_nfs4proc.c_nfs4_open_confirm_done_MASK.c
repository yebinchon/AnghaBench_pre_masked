
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rpc_task {scalar_t__ tk_status; } ;
struct TYPE_6__ {int server; int stateid; } ;
struct TYPE_4__ {int stateid; } ;
struct nfs4_opendata {scalar_t__ rpc_status; int rpc_done; int timestamp; TYPE_3__ o_res; TYPE_2__* owner; TYPE_1__ c_res; } ;
struct TYPE_5__ {int so_seqid; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct rpc_task *VAR_0, void *VAR_1)
{
 struct nfs4_opendata *VAR_2 = VAR_1;

 VAR_2->rpc_status = VAR_0->tk_status;
 if (VAR_2->rpc_status == 0) {
  FUNC_0(&VAR_2->o_res.stateid, &VAR_2->c_res.stateid);
  FUNC_1(&VAR_2->owner->so_seqid, 0);
  FUNC_2(VAR_2->o_res.server, VAR_2->timestamp);
  VAR_2->rpc_done = 1;
 }
}
