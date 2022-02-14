
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {struct nfs_fattr* rpc_resp; struct nfs_fh* rpc_argp; int * rpc_proc; } ;
struct rpc_clnt {int dummy; } ;
struct qstr {int name; int len; } ;
struct nfs_fh {int name; int len; int fh; } ;
struct nfs_fattr {int valid; int * dir_attr; struct nfs_fattr* fattr; struct nfs_fh* fh; } ;
struct nfs3_diropres {int valid; int * dir_attr; struct nfs3_diropres* fattr; struct nfs_fh* fh; } ;
struct nfs3_diropargs {int name; int len; int fh; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (char*,int) ;
 int * VAR_4 ;
 int * FUNC_3 () ;
 int FUNC_4 (struct nfs_fattr*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct inode*,int *) ;
 int FUNC_7 (int ,struct rpc_message*,int ) ;

__attribute__((used)) static int
FUNC_8(struct rpc_clnt *VAR_5, struct inode *VAR_6, struct qstr *VAR_7,
   struct nfs_fh *VAR_8, struct nfs_fattr *VAR_9)
{
 struct nfs3_diropargs VAR_10 = {
  .fh = FUNC_1(VAR_6),
  .name = VAR_7->name,
  .len = VAR_7->len
 };
 struct nfs3_diropres VAR_11 = {
  .fh = VAR_8,
  .fattr = VAR_9
 };
 struct rpc_message VAR_12 = {
  .rpc_proc = &VAR_4[VAR_2],
  .rpc_argp = &VAR_10,
  .rpc_resp = &VAR_11,
 };
 int VAR_13;

 FUNC_2("NFS call  lookup %s\n", VAR_7->name);
 VAR_11.dir_attr = FUNC_3();
 if (VAR_11.dir_attr == ((void*)0))
  return -VAR_0;

 FUNC_4(VAR_9);
 VAR_13 = FUNC_7(FUNC_0(VAR_6), &VAR_12, 0);
 FUNC_6(VAR_6, VAR_11.dir_attr);
 if (VAR_13 >= 0 && !(VAR_9->valid & VAR_3)) {
  VAR_12.rpc_proc = &VAR_4[VAR_1];
  VAR_12.rpc_argp = VAR_8;
  VAR_12.rpc_resp = VAR_9;
  VAR_13 = FUNC_7(FUNC_0(VAR_6), &VAR_12, 0);
 }
 FUNC_5(VAR_11.dir_attr);
 FUNC_2("NFS reply lookup: %d\n", VAR_13);
 return VAR_13;
}
