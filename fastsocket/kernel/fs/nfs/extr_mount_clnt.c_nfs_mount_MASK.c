
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {int * rpc_proc; struct mountres* rpc_resp; int rpc_argp; } ;
struct rpc_create_args {char* servername; scalar_t__ version; int flags; int authflavor; int * program; int addrsize; int address; int protocol; int * net; } ;
struct rpc_clnt {int * cl_procinfo; } ;
struct nfs_mount_request {char* hostname; scalar_t__ version; scalar_t__ noresvport; int dirpath; int salen; int sap; int protocol; int auth_flavs; int auth_flav_len; int fh; } ;
struct mountres {int errno; int auth_flavors; int auth_count; int fh; } ;


 scalar_t__ FUNC_0 (struct rpc_clnt*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct rpc_clnt*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*,...) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct rpc_clnt*,struct rpc_message*,int) ;
 struct rpc_clnt* FUNC_4 (struct rpc_create_args*) ;
 int FUNC_5 (struct rpc_clnt*) ;

int FUNC_6(struct nfs_mount_request *VAR_9)
{
 struct mountres VAR_10 = {
  .fh = VAR_9->fh,
  .auth_count = VAR_9->auth_flav_len,
  .auth_flavors = VAR_9->auth_flavs,
 };
 struct rpc_message VAR_11 = {
  .rpc_argp = VAR_9->dirpath,
  .rpc_resp = &VAR_10,
 };
 struct rpc_create_args VAR_12 = {
  .net = &VAR_7,
  .protocol = VAR_9->protocol,
  .address = VAR_9->sap,
  .addrsize = VAR_9->salen,
  .servername = VAR_9->hostname,
  .program = &VAR_8,
  .version = VAR_9->version,
  .authflavor = VAR_3,
 };
 struct rpc_clnt *VAR_13;
 int VAR_14;

 FUNC_2("NFS: sending MNT request for %s:%s\n",
  (VAR_9->hostname ? VAR_9->hostname : "server"),
   VAR_9->dirpath);

 if (VAR_9->noresvport)
  VAR_12.flags |= VAR_4;

 VAR_13 = FUNC_4(&VAR_12);
 if (FUNC_0(VAR_13))
  goto out_clnt_err;

 if (VAR_9->version == VAR_2)
  VAR_11.rpc_proc = &VAR_13->cl_procinfo[VAR_0];
 else
  VAR_11.rpc_proc = &VAR_13->cl_procinfo[VAR_1];

 VAR_14 = FUNC_3(VAR_13, &VAR_11, VAR_5|VAR_6);
 FUNC_5(VAR_13);

 if (VAR_14 < 0)
  goto out_call_err;
 if (VAR_10.errno != 0)
  goto out_mnt_err;

 FUNC_2("NFS: MNT request succeeded\n");
 VAR_14 = 0;

out:
 return VAR_14;

out_clnt_err:
 VAR_14 = FUNC_1(VAR_13);
 FUNC_2("NFS: failed to create MNT RPC client, status=%d\n", VAR_14);
 goto out;

out_call_err:
 FUNC_2("NFS: MNT request failed, status=%d\n", VAR_14);
 goto out;

out_mnt_err:
 FUNC_2("NFS: MNT server returned result %d\n", VAR_10.errno);
 VAR_14 = VAR_10.errno;
 goto out;
}
