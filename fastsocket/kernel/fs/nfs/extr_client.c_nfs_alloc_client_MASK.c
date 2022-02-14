
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_cred {int dummy; } ;
struct nfs_client_initdata {size_t minorversion; int proto; scalar_t__ hostname; int addrlen; int addr; int rpc_ops; } ;
struct nfs_client {int cl_state; size_t cl_minorversion; struct rpc_cred* cl_machine_cred; int cl_mvops; int cl_boot_time; int cl_rpcwaitq; int cl_renewd; int cl_lock; int cl_proto; struct nfs_client* cl_rpcclient; int cl_superblocks; int cl_hostname; int cl_addrlen; int cl_addr; int cl_cons_state; int cl_count; int rpc_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nfs_client* FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rpc_cred*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct nfs_client*) ;
 int FUNC_6 (scalar_t__,int ) ;
 struct nfs_client* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int ,int ) ;
 int VAR_6 ;
 int FUNC_9 (struct nfs_client*) ;
 int FUNC_10 (struct nfs_client*,size_t) ;
 int * VAR_7 ;
 int FUNC_11 (int *,char*) ;
 struct rpc_cred* FUNC_12 () ;
 int FUNC_13 (int *) ;

__attribute__((used)) static struct nfs_client *FUNC_14(const struct nfs_client_initdata *VAR_8)
{
 struct nfs_client *VAR_9;
 struct rpc_cred *VAR_10;
 int VAR_11 = -VAR_2;

 if ((VAR_9 = FUNC_7(sizeof(*VAR_9), VAR_3)) == ((void*)0))
  goto error_0;

 VAR_9->rpc_ops = VAR_8->rpc_ops;

 FUNC_4(&VAR_9->cl_count, 1);
 VAR_9->cl_cons_state = VAR_5;

 FUNC_8(&VAR_9->cl_addr, VAR_8->addr, VAR_8->addrlen);
 VAR_9->cl_addrlen = VAR_8->addrlen;

 if (VAR_8->hostname) {
  VAR_11 = -VAR_2;
  VAR_9->cl_hostname = FUNC_6(VAR_8->hostname, VAR_3);
  if (!VAR_9->cl_hostname)
   goto error_cleanup;
 }

 FUNC_2(&VAR_9->cl_superblocks);
 VAR_9->cl_rpcclient = FUNC_0(-VAR_1);

 VAR_9->cl_proto = VAR_8->proto;
 VAR_10 = FUNC_12();
 if (!FUNC_3(VAR_10))
  VAR_9->cl_machine_cred = VAR_10;
 FUNC_9(VAR_9);

 return VAR_9;

error_cleanup:
 FUNC_5(VAR_9);
error_0:
 return FUNC_0(VAR_11);
}
