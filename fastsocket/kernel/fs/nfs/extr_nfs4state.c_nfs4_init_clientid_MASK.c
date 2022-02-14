
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_cred {int dummy; } ;
struct TYPE_2__ {scalar_t__ ss_family; } ;
struct nfs_client {int cl_state; int cl_confirm; int cl_clientid; TYPE_1__ cl_addr; } ;
struct nfs4_setclientid_res {int confirm; int clientid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct nfs_client*,int ,unsigned short,struct rpc_cred*,struct nfs4_setclientid_res*) ;
 int FUNC_2 (struct nfs_client*,struct nfs4_setclientid_res*,struct rpc_cred*) ;
 int FUNC_3 (struct nfs_client*) ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

int FUNC_6(struct nfs_client *VAR_5, struct rpc_cred *VAR_6)
{
 struct nfs4_setclientid_res VAR_7 = {
  .clientid = VAR_5->cl_clientid,
  .confirm = VAR_5->cl_confirm,
 };
 unsigned short VAR_8;
 int VAR_9;

 if (FUNC_5(VAR_1, &VAR_5->cl_state))
  goto do_confirm;
 VAR_8 = VAR_3;
 if (VAR_5->cl_addr.ss_family == VAR_0)
  VAR_8 = VAR_4;

 VAR_9 = FUNC_1(VAR_5, VAR_2, VAR_8, VAR_6, &VAR_7);
 if (VAR_9 != 0)
  goto out;
 VAR_5->cl_clientid = VAR_7.clientid;
 VAR_5->cl_confirm = VAR_7.confirm;
 FUNC_4(VAR_1, &VAR_5->cl_state);
do_confirm:
 VAR_9 = FUNC_2(VAR_5, &VAR_7, VAR_6);
 if (VAR_9 != 0)
  goto out;
 FUNC_0(VAR_1, &VAR_5->cl_state);
 FUNC_3(VAR_5);
out:
 return VAR_9;
}
