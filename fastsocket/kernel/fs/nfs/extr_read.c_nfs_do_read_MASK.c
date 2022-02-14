
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_call_ops {int dummy; } ;
struct nfs_read_data {TYPE_1__* header; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {struct inode* inode; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,struct nfs_read_data*,struct rpc_call_ops const*) ;

__attribute__((used)) static int FUNC_2(struct nfs_read_data *VAR_0,
  const struct rpc_call_ops *VAR_1)
{
 struct inode *VAR_2 = VAR_0->header->inode;

 return FUNC_1(FUNC_0(VAR_2), VAR_0, VAR_1);
}
