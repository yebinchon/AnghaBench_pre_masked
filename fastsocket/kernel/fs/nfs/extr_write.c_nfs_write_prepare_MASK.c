
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rpc_task {int dummy; } ;
struct TYPE_7__ {TYPE_2__* context; } ;
struct nfs_write_data {TYPE_3__ args; TYPE_1__* header; } ;
struct TYPE_8__ {int (* write_rpc_prepare ) (struct rpc_task*,struct nfs_write_data*) ;} ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {int inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (int ) ;
 int FUNC_1 (struct rpc_task*,int ) ;
 int FUNC_2 (struct rpc_task*,struct nfs_write_data*) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ) ;

void FUNC_5(struct rpc_task *VAR_2, void *VAR_3)
{
 struct nfs_write_data *VAR_4 = VAR_3;
 FUNC_0(VAR_4->header->inode)->write_rpc_prepare(VAR_2, VAR_4);
 if (FUNC_4(FUNC_3(VAR_1, &VAR_4->args.context->flags)))
  FUNC_1(VAR_2, -VAR_0);
}
