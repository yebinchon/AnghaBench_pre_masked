
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {struct nfs4_pathconf_res* rpc_resp; struct nfs4_pathconf_arg* rpc_argp; int * rpc_proc; } ;
struct nfs_server {int* attr_bitmask; int client; } ;
struct nfs_pathconf {int fattr; } ;
struct nfs_fh {int dummy; } ;
struct nfs4_pathconf_res {int seq_res; struct nfs_pathconf* pathconf; } ;
struct nfs4_pathconf_arg {int* bitmask; int seq_args; struct nfs_fh* fh; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct nfs_pathconf*,int ,int) ;
 int FUNC_1 (int ,struct nfs_server*,struct rpc_message*,int *,int *,int ) ;
 int* VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct nfs_server *VAR_3, struct nfs_fh *VAR_4,
  struct nfs_pathconf *VAR_5)
{
 struct nfs4_pathconf_arg VAR_6 = {
  .fh = VAR_4,
  .bitmask = VAR_3->attr_bitmask,
 };
 struct nfs4_pathconf_res VAR_7 = {
  .pathconf = VAR_5,
 };
 struct rpc_message VAR_8 = {
  .rpc_proc = &VAR_2[VAR_0],
  .rpc_argp = &VAR_6,
  .rpc_resp = &VAR_7,
 };


 if ((VAR_6.bitmask[0] & VAR_1[0]) == 0) {
  FUNC_0(VAR_5, 0, sizeof(*VAR_5));
  return 0;
 }

 FUNC_2(VAR_5->fattr);
 return FUNC_1(VAR_3->client, VAR_3, &VAR_8, &VAR_6.seq_args, &VAR_7.seq_res, 0);
}
