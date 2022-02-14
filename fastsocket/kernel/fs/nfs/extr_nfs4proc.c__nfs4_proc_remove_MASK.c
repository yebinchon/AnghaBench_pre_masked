
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_message {struct nfs_removeres* rpc_resp; struct nfs_removeargs* rpc_argp; int * rpc_proc; } ;
struct qstr {int name; int len; } ;
struct nfs_server {int client; } ;
struct nfs_removeres {int cinfo; int seq_res; struct nfs_server* server; } ;
struct TYPE_2__ {int name; int len; } ;
struct nfs_removeargs {int seq_args; TYPE_1__ name; int fh; } ;
struct inode {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct inode*) ;
 struct nfs_server* FUNC_1 (struct inode*) ;
 int FUNC_2 (int ,struct nfs_server*,struct rpc_message*,int *,int *,int) ;
 int * VAR_1 ;
 int FUNC_3 (struct inode*,int *) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_2, struct qstr *VAR_3)
{
 struct nfs_server *VAR_4 = FUNC_1(VAR_2);
 struct nfs_removeargs VAR_5 = {
  .fh = FUNC_0(VAR_2),
  .name.len = VAR_3->len,
  .name.name = VAR_3->name,
 };
 struct nfs_removeres VAR_6 = {
  .server = VAR_4,
 };
 struct rpc_message VAR_7 = {
  .rpc_proc = &VAR_1[VAR_0],
  .rpc_argp = &VAR_5,
  .rpc_resp = &VAR_6,
 };
 int VAR_8;

 VAR_8 = FUNC_2(VAR_4->client, VAR_4, &VAR_7, &VAR_5.seq_args, &VAR_6.seq_res, 1);
 if (VAR_8 == 0)
  FUNC_3(VAR_2, &VAR_6.cinfo);
 return VAR_8;
}
