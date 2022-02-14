
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_cred {int dummy; } ;
struct nfs_client {int * cl_machine_cred; } ;


 struct rpc_cred* FUNC_0 (int *) ;

struct rpc_cred *FUNC_1(struct nfs_client *VAR_0)
{
 struct rpc_cred *VAR_1 = ((void*)0);

 if (VAR_0->cl_machine_cred != ((void*)0))
  VAR_1 = FUNC_0(VAR_0->cl_machine_cred);
 return VAR_1;
}
