
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {struct nfs_renameres* rpc_resp; struct nfs_renameargs* rpc_argp; int * rpc_proc; } ;
struct qstr {int dummy; } ;
struct nfs_server {int client; } ;
struct nfs_renameres {int new_cinfo; int old_cinfo; int seq_res; struct nfs_server* server; } ;
struct nfs_renameargs {int seq_args; struct qstr* new_name; struct qstr* old_name; int new_dir; int old_dir; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct inode*) ;
 struct nfs_server* FUNC_1 (struct inode*) ;
 int FUNC_2 (int ,struct nfs_server*,struct rpc_message*,int *,int *,int) ;
 int * VAR_2 ;
 int FUNC_3 (struct inode*,int *) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_3, struct qstr *VAR_4,
  struct inode *VAR_5, struct qstr *VAR_6)
{
 struct nfs_server *VAR_7 = FUNC_1(VAR_3);
 struct nfs_renameargs VAR_8 = {
  .old_dir = FUNC_0(VAR_3),
  .new_dir = FUNC_0(VAR_5),
  .old_name = VAR_4,
  .new_name = VAR_6,
 };
 struct nfs_renameres VAR_9 = {
  .server = VAR_7,
 };
 struct rpc_message VAR_10 = {
  .rpc_proc = &VAR_2[VAR_1],
  .rpc_argp = &VAR_8,
  .rpc_resp = &VAR_9,
 };
 int VAR_11 = -VAR_0;

 VAR_11 = FUNC_2(VAR_7->client, VAR_7, &VAR_10, &VAR_8.seq_args, &VAR_9.seq_res, 1);
 if (!VAR_11) {
  FUNC_3(VAR_3, &VAR_9.old_cinfo);
  FUNC_3(VAR_5, &VAR_9.new_cinfo);
 }
 return VAR_11;
}
