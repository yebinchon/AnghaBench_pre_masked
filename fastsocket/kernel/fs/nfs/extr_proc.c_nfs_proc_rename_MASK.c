
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {struct nfs_renameargs* rpc_argp; int * rpc_proc; } ;
struct qstr {int name; } ;
struct nfs_renameargs {struct qstr* new_name; int new_dir; struct qstr* old_name; int old_dir; } ;
struct inode {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (struct inode*) ;
 int * VAR_1 ;
 int FUNC_4 (int ,struct rpc_message*,int ) ;

__attribute__((used)) static int
FUNC_5(struct inode *VAR_2, struct qstr *VAR_3,
  struct inode *VAR_4, struct qstr *VAR_5)
{
 struct nfs_renameargs VAR_6 = {
  .old_dir = FUNC_1(VAR_2),
  .old_name = VAR_3,
  .new_dir = FUNC_1(VAR_4),
  .new_name = VAR_5,
 };
 struct rpc_message VAR_7 = {
  .rpc_proc = &VAR_1[VAR_0],
  .rpc_argp = &VAR_6,
 };
 int VAR_8;

 FUNC_2("NFS call  rename %s -> %s\n", VAR_3->name, VAR_5->name);
 VAR_8 = FUNC_4(FUNC_0(VAR_2), &VAR_7, 0);
 FUNC_3(VAR_2);
 FUNC_3(VAR_4);
 FUNC_2("NFS reply rename: %d\n", VAR_8);
 return VAR_8;
}
