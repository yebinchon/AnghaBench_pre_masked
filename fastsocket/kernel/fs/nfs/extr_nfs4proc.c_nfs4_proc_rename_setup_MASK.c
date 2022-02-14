
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {int * rpc_proc; struct nfs_renameres* rpc_resp; struct nfs_renameargs* rpc_argp; } ;
struct nfs_server {int dummy; } ;
struct nfs_renameres {int seq_res; struct nfs_server* server; } ;
struct nfs_renameargs {int seq_args; } ;
struct inode {int dummy; } ;


 size_t VAR_0 ;
 struct nfs_server* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *,int *,int) ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_2(struct rpc_message *VAR_2, struct inode *VAR_3)
{
 struct nfs_server *VAR_4 = FUNC_0(VAR_3);
 struct nfs_renameargs *VAR_5 = VAR_2->rpc_argp;
 struct nfs_renameres *VAR_6 = VAR_2->rpc_resp;

 VAR_2->rpc_proc = &VAR_1[VAR_0];
 VAR_6->server = VAR_4;
 FUNC_1(&VAR_5->seq_args, &VAR_6->seq_res, 1);
}
