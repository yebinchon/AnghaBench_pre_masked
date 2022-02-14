
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {struct nfs_readlinkargs* rpc_argp; int * rpc_proc; } ;
struct page {int dummy; } ;
struct nfs_readlinkargs {unsigned int pgbase; unsigned int pglen; struct page** pages; int fh; } ;
struct inode {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (char*,...) ;
 int * VAR_1 ;
 int FUNC_3 (int ,struct rpc_message*,int ) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_2, struct page *VAR_3,
  unsigned int VAR_4, unsigned int VAR_5)
{
 struct nfs_readlinkargs VAR_6 = {
  .fh = FUNC_1(VAR_2),
  .pgbase = VAR_4,
  .pglen = VAR_5,
  .pages = &VAR_3
 };
 struct rpc_message VAR_7 = {
  .rpc_proc = &VAR_1[VAR_0],
  .rpc_argp = &VAR_6,
 };
 int VAR_8;

 FUNC_2("NFS call  readlink\n");
 VAR_8 = FUNC_3(FUNC_0(VAR_2), &VAR_7, 0);
 FUNC_2("NFS reply readlink: %d\n", VAR_8);
 return VAR_8;
}
