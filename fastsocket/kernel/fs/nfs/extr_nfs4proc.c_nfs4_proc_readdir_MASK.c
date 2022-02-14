
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rpc_cred {int dummy; } ;
struct page {int dummy; } ;
struct nfs4_exception {scalar_t__ retry; } ;
struct dentry {int d_inode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct dentry*,struct rpc_cred*,int ,struct page**,unsigned int,int) ;
 int FUNC_2 (int ,int ,struct nfs4_exception*) ;

__attribute__((used)) static int FUNC_3(struct dentry *VAR_0, struct rpc_cred *VAR_1,
  u64 VAR_2, struct page **VAR_3, unsigned int VAR_4, int VAR_5)
{
 struct nfs4_exception VAR_6 = { };
 int VAR_7;
 do {
  VAR_7 = FUNC_2(FUNC_0(VAR_0->d_inode),
    FUNC_1(VAR_0, VAR_1, VAR_2,
     VAR_3, VAR_4, VAR_5),
    &VAR_6);
 } while (VAR_6.retry);
 return VAR_7;
}
