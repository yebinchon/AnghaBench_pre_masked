
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rpc_task {scalar_t__ tk_status; } ;
struct nfs_server {int dummy; } ;
struct TYPE_6__ {TYPE_2__* context; } ;
struct nfs_read_data {int timestamp; TYPE_3__ args; TYPE_1__* header; } ;
struct TYPE_5__ {int state; } ;
struct TYPE_4__ {int inode; } ;


 int VAR_0 ;
 struct nfs_server* FUNC_0 (int ) ;
 int FUNC_1 (struct nfs_read_data*) ;
 int FUNC_2 (struct rpc_task*,struct nfs_server*,int ) ;
 int FUNC_3 (struct nfs_server*,int ) ;
 int FUNC_4 (struct rpc_task*) ;

__attribute__((used)) static int FUNC_5(struct rpc_task *VAR_1, struct nfs_read_data *VAR_2)
{
 struct nfs_server *VAR_3 = FUNC_0(VAR_2->header->inode);

 if (FUNC_2(VAR_1, VAR_3, VAR_2->args.context->state) == -VAR_0) {
  FUNC_4(VAR_1);
  return -VAR_0;
 }

 FUNC_1(VAR_2);
 if (VAR_1->tk_status > 0)
  FUNC_3(VAR_3, VAR_2->timestamp);
 return 0;
}
