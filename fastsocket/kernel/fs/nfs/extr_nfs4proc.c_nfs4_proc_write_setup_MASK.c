
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rpc_message {int * rpc_proc; } ;
struct TYPE_6__ {int seq_res; struct nfs_server* server; int * fattr; } ;
struct TYPE_5__ {int seq_args; int * bitmask; } ;
struct nfs_write_data {TYPE_3__ res; TYPE_2__ args; int timestamp; scalar_t__ write_done_cb; TYPE_1__* header; } ;
struct nfs_server {int * cache_consistency_bitmask; } ;
struct TYPE_4__ {int inode; } ;


 size_t VAR_0 ;
 struct nfs_server* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int) ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct nfs_write_data*) ;

__attribute__((used)) static void FUNC_3(struct nfs_write_data *VAR_4, struct rpc_message *VAR_5)
{
 struct nfs_server *VAR_6 = FUNC_0(VAR_4->header->inode);

 if (!FUNC_2(VAR_4)) {
  VAR_4->args.bitmask = ((void*)0);
  VAR_4->res.fattr = ((void*)0);
 } else
  VAR_4->args.bitmask = VAR_6->cache_consistency_bitmask;

 if (!VAR_4->write_done_cb)
  VAR_4->write_done_cb = VAR_3;
 VAR_4->res.server = VAR_6;
 VAR_4->timestamp = VAR_1;

 VAR_5->rpc_proc = &VAR_2[VAR_0];
 FUNC_1(&VAR_4->args.seq_args, &VAR_4->res.seq_res, 1);
}
