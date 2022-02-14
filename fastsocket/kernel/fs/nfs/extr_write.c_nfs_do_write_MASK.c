
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_call_ops {int dummy; } ;
struct nfs_write_data {TYPE_1__* header; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {struct inode* inode; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,struct nfs_write_data*,struct rpc_call_ops const*,int) ;

__attribute__((used)) static int FUNC_2(struct nfs_write_data *VAR_0,
  const struct rpc_call_ops *VAR_1,
  int VAR_2)
{
 struct inode *VAR_3 = VAR_0->header->inode;

 return FUNC_1(FUNC_0(VAR_3), VAR_0, VAR_1, VAR_2);
}
