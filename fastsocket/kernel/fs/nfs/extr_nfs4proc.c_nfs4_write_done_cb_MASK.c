
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rpc_task {scalar_t__ tk_status; } ;
struct TYPE_6__ {TYPE_2__* context; } ;
struct nfs_write_data {int fattr; int timestamp; TYPE_3__ args; TYPE_1__* header; } ;
struct inode {int dummy; } ;
struct TYPE_5__ {int state; } ;
struct TYPE_4__ {struct inode* inode; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct rpc_task*,int ,int ) ;
 int FUNC_2 (struct inode*,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct rpc_task*) ;

__attribute__((used)) static int FUNC_5(struct rpc_task *VAR_1, struct nfs_write_data *VAR_2)
{
 struct inode *VAR_3 = VAR_2->header->inode;

 if (FUNC_1(VAR_1, FUNC_0(VAR_3), VAR_2->args.context->state) == -VAR_0) {
  FUNC_4(VAR_1);
  return -VAR_0;
 }
 if (VAR_1->tk_status >= 0) {
  FUNC_3(FUNC_0(VAR_3), VAR_2->timestamp);
  FUNC_2(VAR_3, &VAR_2->fattr);
 }
 return 0;
}
