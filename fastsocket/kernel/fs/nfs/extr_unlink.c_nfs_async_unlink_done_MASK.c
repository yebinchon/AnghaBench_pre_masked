
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_task {int dummy; } ;
struct nfs_unlinkdata {struct inode* dir; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int (* unlink_done ) (struct rpc_task*,struct inode*) ;} ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct rpc_task*) ;
 int FUNC_2 (struct rpc_task*,struct inode*) ;

__attribute__((used)) static void FUNC_3(struct rpc_task *VAR_0, void *VAR_1)
{
 struct nfs_unlinkdata *VAR_2 = VAR_1;
 struct inode *VAR_3 = VAR_2->dir;

 if (!FUNC_0(VAR_3)->unlink_done(VAR_0, VAR_3))
  FUNC_1(VAR_0);
}
