
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_cred {int dummy; } ;
struct nfs_server {struct nfs_client* nfs_client; } ;
struct nfs_client {int cl_lock; } ;
struct TYPE_2__ {int wait; } ;
struct nfs4_state_owner {TYPE_1__ so_sequence; struct rpc_cred* so_cred; struct nfs_server* so_server; } ;


 int FUNC_0 (struct rpc_cred*) ;
 int FUNC_1 (struct nfs4_state_owner*) ;
 struct nfs4_state_owner* FUNC_2 () ;
 struct nfs4_state_owner* FUNC_3 (struct nfs_server*,struct rpc_cred*) ;
 int FUNC_4 (struct nfs_server*) ;
 struct nfs4_state_owner* FUNC_5 (struct nfs4_state_owner*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

struct nfs4_state_owner *FUNC_9(struct nfs_server *VAR_0,
           struct rpc_cred *VAR_1)
{
 struct nfs_client *VAR_2 = VAR_0->nfs_client;
 struct nfs4_state_owner *VAR_3, *VAR_4;

 FUNC_7(&VAR_2->cl_lock);
 VAR_3 = FUNC_3(VAR_0, VAR_1);
 FUNC_8(&VAR_2->cl_lock);
 if (VAR_3 != ((void*)0))
  goto out;
 VAR_4 = FUNC_2();
 if (VAR_4 == ((void*)0))
  goto out;
 VAR_4->so_server = VAR_0;
 VAR_4->so_cred = VAR_1;
 FUNC_7(&VAR_2->cl_lock);
 VAR_3 = FUNC_5(VAR_4);
 FUNC_8(&VAR_2->cl_lock);
 if (VAR_3 == VAR_4)
  FUNC_0(VAR_1);
 else {
  FUNC_6(&VAR_4->so_sequence.wait);
  FUNC_1(VAR_4);
 }
out:
 FUNC_4(VAR_0);
 return VAR_3;
}
