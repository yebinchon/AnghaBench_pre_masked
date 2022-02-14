
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {struct nfs_renameres* rpc_resp; struct nfs_renameargs* rpc_argp; int * rpc_proc; } ;
struct qstr {int name; } ;
struct nfs_renameres {int * new_fattr; int * old_fattr; } ;
struct nfs_renameargs {struct qstr* new_name; int new_dir; struct qstr* old_name; int old_dir; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (char*,int,...) ;
 int * VAR_2 ;
 void* FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct inode*,int *) ;
 int FUNC_6 (int ,struct rpc_message*,int ) ;

__attribute__((used)) static int
FUNC_7(struct inode *VAR_3, struct qstr *VAR_4,
   struct inode *VAR_5, struct qstr *VAR_6)
{
 struct nfs_renameargs VAR_7 = {
  .old_dir = FUNC_1(VAR_3),
  .old_name = VAR_4,
  .new_dir = FUNC_1(VAR_5),
  .new_name = VAR_6,
 };
 struct nfs_renameres VAR_8;
 struct rpc_message VAR_9 = {
  .rpc_proc = &VAR_2[VAR_1],
  .rpc_argp = &VAR_7,
  .rpc_resp = &VAR_8,
 };
 int VAR_10 = -VAR_0;

 FUNC_2("NFS call  rename %s -> %s\n", VAR_4->name, VAR_6->name);

 VAR_8.old_fattr = FUNC_3();
 VAR_8.new_fattr = FUNC_3();
 if (VAR_8.old_fattr == ((void*)0) || VAR_8.new_fattr == ((void*)0))
  goto out;

 VAR_10 = FUNC_6(FUNC_0(VAR_3), &VAR_9, 0);
 FUNC_5(VAR_3, VAR_8.old_fattr);
 FUNC_5(VAR_5, VAR_8.new_fattr);
out:
 FUNC_4(VAR_8.old_fattr);
 FUNC_4(VAR_8.new_fattr);
 FUNC_2("NFS reply rename: %d\n", VAR_10);
 return VAR_10;
}
