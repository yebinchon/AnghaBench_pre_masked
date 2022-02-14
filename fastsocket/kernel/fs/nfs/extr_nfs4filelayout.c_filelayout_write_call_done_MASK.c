
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_task {int dummy; } ;
struct nfs_write_data {TYPE_2__* header; } ;
struct TYPE_4__ {TYPE_1__* mds_ops; } ;
struct TYPE_3__ {int (* rpc_call_done ) (struct rpc_task*,void*) ;} ;


 int FUNC_0 (struct rpc_task*,void*) ;

__attribute__((used)) static void FUNC_1(struct rpc_task *VAR_0, void *VAR_1)
{
 struct nfs_write_data *VAR_2 = VAR_1;


 VAR_2->header->mds_ops->rpc_call_done(VAR_0, VAR_1);
}
