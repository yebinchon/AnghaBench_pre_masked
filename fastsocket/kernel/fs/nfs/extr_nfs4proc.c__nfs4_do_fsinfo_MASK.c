
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {struct nfs4_fsinfo_res* rpc_resp; struct nfs4_fsinfo_arg* rpc_argp; int * rpc_proc; } ;
struct nfs_server {int client; int attr_bitmask; } ;
struct nfs_fsinfo {int dummy; } ;
struct nfs_fh {int dummy; } ;
struct nfs4_fsinfo_res {int seq_res; struct nfs_fsinfo* fsinfo; } ;
struct nfs4_fsinfo_arg {int seq_args; int bitmask; struct nfs_fh* fh; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,struct nfs_server*,struct rpc_message*,int *,int *,int ) ;
 int * VAR_1 ;

__attribute__((used)) static int FUNC_1(struct nfs_server *VAR_2, struct nfs_fh *VAR_3,
  struct nfs_fsinfo *VAR_4)
{
 struct nfs4_fsinfo_arg VAR_5 = {
  .fh = VAR_3,
  .bitmask = VAR_2->attr_bitmask,
 };
 struct nfs4_fsinfo_res VAR_6 = {
  .fsinfo = VAR_4,
 };
 struct rpc_message VAR_7 = {
  .rpc_proc = &VAR_1[VAR_0],
  .rpc_argp = &VAR_5,
  .rpc_resp = &VAR_6,
 };

 return FUNC_0(VAR_2->client, VAR_2, &VAR_7, &VAR_5.seq_args, &VAR_6.seq_res, 0);
}
