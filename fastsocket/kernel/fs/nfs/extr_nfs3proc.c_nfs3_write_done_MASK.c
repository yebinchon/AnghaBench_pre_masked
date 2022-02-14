
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_task {scalar_t__ tk_status; } ;
struct TYPE_4__ {int fattr; } ;
struct nfs_write_data {TYPE_2__ res; TYPE_1__* header; } ;
struct inode {int dummy; } ;
struct TYPE_3__ {struct inode* inode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rpc_task*,struct inode*) ;
 int FUNC_1 (struct inode*,int ) ;

__attribute__((used)) static int FUNC_2(struct rpc_task *VAR_1, struct nfs_write_data *VAR_2)
{
 struct inode *VAR_3 = VAR_2->header->inode;

 if (FUNC_0(VAR_1, VAR_3))
  return -VAR_0;
 if (VAR_1->tk_status >= 0)
  FUNC_1(VAR_3, VAR_2->res.fattr);
 return 0;
}
