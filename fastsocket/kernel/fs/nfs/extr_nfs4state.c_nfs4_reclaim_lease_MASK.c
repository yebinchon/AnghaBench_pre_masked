
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_cred {int dummy; } ;
struct nfs_client {struct rpc_cred* cl_machine_cred; TYPE_1__* cl_mvops; } ;
struct nfs4_state_recovery_ops {int (* establish_clid ) (struct nfs_client*,struct rpc_cred*) ;struct rpc_cred* (* get_clid_cred ) (struct nfs_client*) ;} ;
struct TYPE_2__ {struct nfs4_state_recovery_ops* reboot_recovery_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nfs_client*) ;
 int FUNC_1 (struct rpc_cred*) ;
 struct rpc_cred* FUNC_2 (struct nfs_client*) ;
 int FUNC_3 (struct nfs_client*,struct rpc_cred*) ;

__attribute__((used)) static int FUNC_4(struct nfs_client *VAR_5)
{
 struct rpc_cred *VAR_6;
 const struct nfs4_state_recovery_ops *VAR_7 =
  VAR_5->cl_mvops->reboot_recovery_ops;
 int VAR_8 = -VAR_2;

 VAR_6 = VAR_7->get_clid_cred(VAR_5);
 if (VAR_6 != ((void*)0)) {
  VAR_8 = VAR_7->establish_clid(VAR_5, VAR_6);
  FUNC_1(VAR_6);

  if (VAR_8 == -VAR_0 && VAR_6 == VAR_5->cl_machine_cred) {
   FUNC_0(VAR_5);
   VAR_8 = -VAR_1;
  }
  if (VAR_8 == -VAR_4)
   VAR_8 = -VAR_3;
 }
 return VAR_8;
}
