
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_message {struct nfs4_secinfo_res* rpc_resp; struct nfs4_secinfo_arg* rpc_argp; int * rpc_proc; } ;
struct qstr {int name; } ;
struct nfs4_secinfo_res {int seq_res; struct nfs4_secinfo_flavors* flavors; } ;
struct nfs4_secinfo_flavors {int dummy; } ;
struct nfs4_secinfo_arg {int seq_args; struct qstr const* name; int dir_fh; } ;
struct inode {int dummy; } ;
struct TYPE_3__ {int client; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ,TYPE_1__*,struct rpc_message*,int *,int *,int ) ;
 int * VAR_1 ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_2, const struct qstr *VAR_3, struct nfs4_secinfo_flavors *VAR_4)
{
 int VAR_5;
 struct nfs4_secinfo_arg VAR_6 = {
  .dir_fh = FUNC_0(VAR_2),
  .name = VAR_3,
 };
 struct nfs4_secinfo_res VAR_7 = {
  .flavors = VAR_4,
 };
 struct rpc_message VAR_8 = {
  .rpc_proc = &VAR_1[VAR_0],
  .rpc_argp = &VAR_6,
  .rpc_resp = &VAR_7,
 };

 FUNC_2("NFS call  secinfo %s\n", VAR_3->name);
 VAR_5 = FUNC_3(FUNC_1(VAR_2)->client, FUNC_1(VAR_2), &VAR_8, &VAR_6.seq_args, &VAR_7.seq_res, 0);
 FUNC_2("NFS reply  secinfo: %d\n", VAR_5);
 return VAR_5;
}
