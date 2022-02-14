
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rpc_task {scalar_t__ tk_status; } ;
struct TYPE_5__ {int rflags; int server; TYPE_1__* f_attr; int seq_res; } ;
struct nfs4_opendata {scalar_t__ rpc_status; int rpc_done; TYPE_3__* owner; TYPE_2__ o_res; int timestamp; } ;
struct TYPE_6__ {int so_seqid; } ;
struct TYPE_4__ {int valid; int mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;

 int FUNC_0 (struct rpc_task*,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct rpc_task *VAR_6, void *VAR_7)
{
 struct nfs4_opendata *VAR_8 = VAR_7;

 VAR_8->rpc_status = VAR_6->tk_status;

 if (!FUNC_0(VAR_6, &VAR_8->o_res.seq_res))
  return;

 if (VAR_6->tk_status == 0) {
  if (VAR_8->o_res.f_attr->valid & VAR_4) {
   switch (VAR_8->o_res.f_attr->mode & VAR_5) {
   case 128:
    break;
   case 129:
    VAR_8->rpc_status = -VAR_1;
    break;
   case 130:
    VAR_8->rpc_status = -VAR_0;
    break;
   default:
    VAR_8->rpc_status = -VAR_2;
   }
  }
  FUNC_2(VAR_8->o_res.server, VAR_8->timestamp);
  if (!(VAR_8->o_res.rflags & VAR_3))
   FUNC_1(&VAR_8->owner->so_seqid, 0);
 }
 VAR_8->rpc_done = 1;
}
