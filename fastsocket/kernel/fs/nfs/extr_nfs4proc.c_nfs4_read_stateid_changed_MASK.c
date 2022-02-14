
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {int tk_status; } ;
struct nfs_readargs {int lock_context; int context; int stateid; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (struct rpc_task*) ;

__attribute__((used)) static bool FUNC_3(struct rpc_task *VAR_1,
  struct nfs_readargs *VAR_2)
{

 if (!FUNC_0(VAR_1->tk_status) ||
  FUNC_1(&VAR_2->stateid,
    VAR_2->context,
    VAR_2->lock_context,
    VAR_0))
  return 0;
 FUNC_2(VAR_1);
 return 1;
}
