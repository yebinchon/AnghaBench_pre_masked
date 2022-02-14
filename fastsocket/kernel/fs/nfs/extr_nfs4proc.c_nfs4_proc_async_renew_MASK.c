
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {struct rpc_cred* rpc_cred; struct nfs_client* rpc_argp; int * rpc_proc; } ;
struct rpc_cred {int dummy; } ;
struct nfs_client {int cl_rpcclient; int cl_count; } ;
struct nfs4_renewdata {int timestamp; struct nfs_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 struct nfs4_renewdata* FUNC_1 (int,int ) ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,struct rpc_message*,int ,int *,struct nfs4_renewdata*) ;

__attribute__((used)) static int FUNC_3(struct nfs_client *VAR_8, struct rpc_cred *VAR_9, unsigned VAR_10)
{
 struct rpc_message VAR_11 = {
  .rpc_proc = &VAR_6[VAR_3],
  .rpc_argp = VAR_8,
  .rpc_cred = VAR_9,
 };
 struct nfs4_renewdata *VAR_12;

 if (VAR_10 == 0)
  return 0;
 if (!FUNC_0(&VAR_8->cl_count))
  return -VAR_0;
 VAR_12 = FUNC_1(sizeof(*VAR_12), VAR_2);
 if (VAR_12 == ((void*)0))
  return -VAR_1;
 VAR_12->client = VAR_8;
 VAR_12->timestamp = VAR_5;
 return FUNC_2(VAR_8->cl_rpcclient, &VAR_11, VAR_4,
   &VAR_7, VAR_12);
}
