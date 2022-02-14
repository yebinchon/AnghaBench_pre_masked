
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_message {int * rpc_proc; } ;
struct nfs_server {int dummy; } ;
struct TYPE_4__ {int seq_res; struct nfs_server* server; } ;
struct TYPE_3__ {int seq_args; } ;
struct nfs_commit_data {TYPE_2__ res; TYPE_1__ args; int * commit_done_cb; int inode; } ;


 size_t VAR_0 ;
 struct nfs_server* FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;
 int * VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_2(struct nfs_commit_data *VAR_3, struct rpc_message *VAR_4)
{
 struct nfs_server *VAR_5 = FUNC_0(VAR_3->inode);

 if (VAR_3->commit_done_cb == ((void*)0))
  VAR_3->commit_done_cb = VAR_1;
 VAR_3->res.server = VAR_5;
 VAR_4->rpc_proc = &VAR_2[VAR_0];
 FUNC_1(&VAR_3->args.seq_args, &VAR_3->res.seq_res, 1);
}
