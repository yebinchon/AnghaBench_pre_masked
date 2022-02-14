
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct nfs_renameres* rpc_resp; } ;
struct rpc_task {TYPE_1__ tk_msg; } ;
struct nfs_renameres {int new_cinfo; int old_cinfo; int server; int seq_res; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rpc_task*,int ,int *) ;
 int FUNC_1 (struct rpc_task*,int *) ;
 int FUNC_2 (struct inode*,int *) ;

__attribute__((used)) static int FUNC_3(struct rpc_task *VAR_1, struct inode *VAR_2,
     struct inode *VAR_3)
{
 struct nfs_renameres *VAR_4 = VAR_1->tk_msg.rpc_resp;

 if (!FUNC_1(VAR_1, &VAR_4->seq_res))
  return 0;
 if (FUNC_0(VAR_1, VAR_4->server, ((void*)0)) == -VAR_0)
  return 0;

 FUNC_2(VAR_2, &VAR_4->old_cinfo);
 FUNC_2(VAR_3, &VAR_4->new_cinfo);
 return 1;
}
