
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {struct nfs4_link_res* rpc_resp; struct nfs4_link_arg* rpc_argp; int * rpc_proc; } ;
struct qstr {int dummy; } ;
struct nfs_server {int client; int attr_bitmask; } ;
struct nfs4_link_res {int * fattr; int cinfo; int seq_res; struct nfs_server* server; } ;
struct nfs4_link_arg {int seq_args; int bitmask; struct qstr* name; int dir_fh; int fh; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct inode*) ;
 struct nfs_server* FUNC_1 (struct inode*) ;
 int FUNC_2 (int ,struct nfs_server*,struct rpc_message*,int *,int *,int) ;
 int * VAR_2 ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct inode*,int *) ;
 int FUNC_6 (struct inode*,int *) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_3, struct inode *VAR_4, struct qstr *VAR_5)
{
 struct nfs_server *VAR_6 = FUNC_1(VAR_3);
 struct nfs4_link_arg VAR_7 = {
  .fh = FUNC_0(VAR_3),
  .dir_fh = FUNC_0(VAR_4),
  .name = VAR_5,
  .bitmask = VAR_6->attr_bitmask,
 };
 struct nfs4_link_res VAR_8 = {
  .server = VAR_6,
 };
 struct rpc_message VAR_9 = {
  .rpc_proc = &VAR_2[VAR_1],
  .rpc_argp = &VAR_7,
  .rpc_resp = &VAR_8,
 };
 int VAR_10 = -VAR_0;

 VAR_8.fattr = FUNC_3();
 if (VAR_8.fattr == ((void*)0))
  goto out;

 VAR_10 = FUNC_2(VAR_6->client, VAR_6, &VAR_9, &VAR_7.seq_args, &VAR_8.seq_res, 1);
 if (!VAR_10) {
  FUNC_6(VAR_4, &VAR_8.cinfo);
  FUNC_5(VAR_3, VAR_8.fattr);
 }
out:
 FUNC_4(VAR_8.fattr);
 return VAR_10;
}
