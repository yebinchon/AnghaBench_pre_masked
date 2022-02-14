
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_cred {int dummy; } ;
struct nfs_client {int cl_lock; int cl_state; TYPE_1__* cl_mvops; } ;
struct nfs4_state_maintenance_ops {int (* renew_lease ) (struct nfs_client*,struct rpc_cred*) ;struct rpc_cred* (* get_state_renewal_cred_locked ) (struct nfs_client*) ;} ;
struct TYPE_2__ {struct nfs4_state_maintenance_ops* state_renewal_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rpc_cred* FUNC_0 (struct nfs_client*) ;
 int FUNC_1 (struct nfs_client*,int) ;
 int FUNC_2 (struct rpc_cred*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct rpc_cred* FUNC_5 (struct nfs_client*) ;
 int FUNC_6 (struct nfs_client*,struct rpc_cred*) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct nfs_client *VAR_2)
{
 struct rpc_cred *VAR_3;
 const struct nfs4_state_maintenance_ops *VAR_4 =
  VAR_2->cl_mvops->state_renewal_ops;
 int VAR_5 = -VAR_1;


 if (FUNC_7(VAR_0, &VAR_2->cl_state))
  return 0;
 FUNC_3(&VAR_2->cl_lock);
 VAR_3 = VAR_4->get_state_renewal_cred_locked(VAR_2);
 FUNC_4(&VAR_2->cl_lock);
 if (VAR_3 == ((void*)0)) {
  VAR_3 = FUNC_0(VAR_2);
  if (VAR_3 == ((void*)0))
   goto out;
 }
 VAR_5 = VAR_4->renew_lease(VAR_2, VAR_3);
 FUNC_2(VAR_3);
out:
 return FUNC_1(VAR_2, VAR_5);
}
