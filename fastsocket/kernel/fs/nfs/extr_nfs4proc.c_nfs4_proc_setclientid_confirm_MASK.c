
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {struct rpc_cred* rpc_cred; struct nfs_fsinfo* rpc_resp; struct nfs4_setclientid_res* rpc_argp; int * rpc_proc; } ;
struct rpc_cred {int dummy; } ;
struct nfs_fsinfo {int lease_time; } ;
struct nfs_client {int cl_lease_time; unsigned long cl_last_renewal; int cl_lock; int cl_rpcclient; } ;
struct nfs4_setclientid_res {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (int ,struct rpc_message*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct nfs_client *VAR_5,
  struct nfs4_setclientid_res *VAR_6,
  struct rpc_cred *VAR_7)
{
 struct nfs_fsinfo VAR_8;
 struct rpc_message VAR_9 = {
  .rpc_proc = &VAR_4[VAR_1],
  .rpc_argp = VAR_6,
  .rpc_resp = &VAR_8,
  .rpc_cred = VAR_7,
 };
 unsigned long VAR_10;
 int VAR_11;

 VAR_10 = VAR_3;
 VAR_11 = FUNC_0(VAR_5->cl_rpcclient, &VAR_9, VAR_2);
 if (VAR_11 == 0) {
  FUNC_1(&VAR_5->cl_lock);
  VAR_5->cl_lease_time = VAR_8.lease_time * VAR_0;
  VAR_5->cl_last_renewal = VAR_10;
  FUNC_2(&VAR_5->cl_lock);
 }
 return VAR_11;
}
