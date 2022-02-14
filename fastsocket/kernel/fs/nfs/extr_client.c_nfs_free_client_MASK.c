
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_client {struct nfs_client* cl_hostname; int * cl_machine_cred; int cl_rpcclient; TYPE_1__* rpc_ops; } ;
struct TYPE_2__ {int version; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct nfs_client*) ;
 int FUNC_3 (struct nfs_client*) ;
 int FUNC_4 (struct nfs_client*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct nfs_client *VAR_0)
{
 FUNC_1("--> nfs_free_client(%u)\n", VAR_0->rpc_ops->version);

 FUNC_3(VAR_0);

 FUNC_4(VAR_0);


 if (!FUNC_0(VAR_0->cl_rpcclient))
  FUNC_6(VAR_0->cl_rpcclient);

 if (VAR_0->cl_machine_cred != ((void*)0))
  FUNC_5(VAR_0->cl_machine_cred);

 FUNC_2(VAR_0->cl_hostname);
 FUNC_2(VAR_0);

 FUNC_1("<-- nfs_free_client()\n");
}
