
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {struct nfs4_lookup_res* rpc_resp; struct nfs4_lookup_root_arg* rpc_argp; int * rpc_proc; } ;
struct nfs_server {int client; } ;
struct nfs_fsinfo {int fattr; } ;
struct nfs_fh {int dummy; } ;
struct nfs4_lookup_root_arg {int seq_args; int bitmask; } ;
struct nfs4_lookup_res {int seq_res; struct nfs_fh* fh; int fattr; struct nfs_server* server; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,struct nfs_server*,struct rpc_message*,int *,int *,int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct nfs_server *VAR_3, struct nfs_fh *VAR_4,
  struct nfs_fsinfo *VAR_5)
{
 struct nfs4_lookup_root_arg VAR_6 = {
  .bitmask = VAR_1,
 };
 struct nfs4_lookup_res VAR_7 = {
  .server = VAR_3,
  .fattr = VAR_5->fattr,
  .fh = VAR_4,
 };
 struct rpc_message VAR_8 = {
  .rpc_proc = &VAR_2[VAR_0],
  .rpc_argp = &VAR_6,
  .rpc_resp = &VAR_7,
 };

 FUNC_1(VAR_5->fattr);
 return FUNC_0(VAR_3->client, VAR_3, &VAR_8, &VAR_6.seq_args, &VAR_7.seq_res, 0);
}
