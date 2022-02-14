
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_task {int dummy; } ;
struct nfs_read_data {int fattr; TYPE_1__* header; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {struct inode* inode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rpc_task*,struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,int *) ;

__attribute__((used)) static int FUNC_3(struct rpc_task *VAR_1, struct nfs_read_data *VAR_2)
{
 struct inode *VAR_3 = VAR_2->header->inode;

 if (FUNC_0(VAR_1, VAR_3))
  return -VAR_0;

 FUNC_1(VAR_3);
 FUNC_2(VAR_3, &VAR_2->fattr);
 return 0;
}
