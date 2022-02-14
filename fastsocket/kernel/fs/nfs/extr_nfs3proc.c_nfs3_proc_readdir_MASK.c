
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct rpc_message {int * rpc_proc; struct rpc_cred* rpc_cred; struct nfs3_readdirres* rpc_resp; struct nfs3_readdirargs* rpc_argp; } ;
struct rpc_cred {int dummy; } ;
struct page {int dummy; } ;
struct nfs3_readdirres {int plus; int * dir_attr; int * verf; } ;
struct nfs3_readdirargs {int plus; unsigned int count; struct page** pages; int verf; scalar_t__ cookie; int fh; } ;
struct inode {int dummy; } ;
struct dentry {struct inode* d_inode; } ;
typedef int __be32 ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct inode*) ;
 int * FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (char*,char*,int) ;
 int * VAR_3 ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*,int *) ;
 int FUNC_8 (int ,struct rpc_message*,int ) ;

__attribute__((used)) static int
FUNC_9(struct dentry *VAR_4, struct rpc_cred *VAR_5,
    u64 VAR_6, struct page **VAR_7, unsigned int VAR_8, int VAR_9)
{
 struct inode *VAR_10 = VAR_4->d_inode;
 __be32 *VAR_11 = FUNC_1(VAR_10);
 struct nfs3_readdirargs VAR_12 = {
  .fh = FUNC_2(VAR_10),
  .cookie = VAR_6,
  .verf = {VAR_11[0], VAR_11[1]},
  .plus = VAR_9,
  .count = VAR_8,
  .pages = VAR_7
 };
 struct nfs3_readdirres VAR_13 = {
  .verf = VAR_11,
  .plus = VAR_9
 };
 struct rpc_message VAR_14 = {
  .rpc_proc = &VAR_3[VAR_1],
  .rpc_argp = &VAR_12,
  .rpc_resp = &VAR_13,
  .rpc_cred = VAR_5
 };
 int VAR_15 = -VAR_0;

 if (VAR_9)
  VAR_14.rpc_proc = &VAR_3[VAR_2];

 FUNC_3("NFS call  readdir%s %d\n",
   VAR_9? "plus" : "", (unsigned int) VAR_6);

 VAR_13.dir_attr = FUNC_4();
 if (VAR_13.dir_attr == ((void*)0))
  goto out;

 VAR_15 = FUNC_8(FUNC_0(VAR_10), &VAR_14, 0);

 FUNC_6(VAR_10);
 FUNC_7(VAR_10, VAR_13.dir_attr);

 FUNC_5(VAR_13.dir_attr);
out:
 FUNC_3("NFS reply readdir%s: %d\n",
   VAR_9? "plus" : "", VAR_15);
 return VAR_15;
}
