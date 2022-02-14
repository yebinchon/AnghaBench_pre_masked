
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rpc_task {int dummy; } ;
struct nfs_read_data {TYPE_2__* header; } ;
struct TYPE_6__ {TYPE_1__* client; } ;
struct TYPE_5__ {int inode; } ;
struct TYPE_4__ {int cl_metrics; } ;


 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (struct rpc_task*,int ) ;

__attribute__((used)) static void FUNC_2(struct rpc_task *VAR_0, void *VAR_1)
{
 struct nfs_read_data *VAR_2 = (struct nfs_read_data *)VAR_1;

 FUNC_1(VAR_0, FUNC_0(VAR_2->header->inode)->client->cl_metrics);
}
