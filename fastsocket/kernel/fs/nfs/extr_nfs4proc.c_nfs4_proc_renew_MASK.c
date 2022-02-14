
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {struct rpc_cred* rpc_cred; struct nfs_client* rpc_argp; int * rpc_proc; } ;
struct rpc_cred {int dummy; } ;
struct nfs_client {int cl_rpcclient; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct nfs_client*,unsigned long) ;
 unsigned long VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int ,struct rpc_message*,int ) ;

__attribute__((used)) static int FUNC_2(struct nfs_client *VAR_3, struct rpc_cred *VAR_4)
{
 struct rpc_message VAR_5 = {
  .rpc_proc = &VAR_2[VAR_0],
  .rpc_argp = VAR_3,
  .rpc_cred = VAR_4,
 };
 unsigned long VAR_6 = VAR_1;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3->cl_rpcclient, &VAR_5, 0);
 if (VAR_7 < 0)
  return VAR_7;
 FUNC_0(VAR_3, VAR_6);
 return 0;
}
