
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_cred {int dummy; } ;
struct nfs_client {int cl_lock; struct rpc_cred* cl_machine_cred; } ;


 int FUNC_0 (struct rpc_cred*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct nfs_client *VAR_0)
{
 struct rpc_cred *VAR_1;

 FUNC_1(&VAR_0->cl_lock);
 VAR_1 = VAR_0->cl_machine_cred;
 VAR_0->cl_machine_cred = ((void*)0);
 FUNC_2(&VAR_0->cl_lock);
 if (VAR_1 != ((void*)0))
  FUNC_0(VAR_1);
}
