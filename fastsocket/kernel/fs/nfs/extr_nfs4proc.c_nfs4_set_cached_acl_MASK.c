
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_inode {struct nfs4_cached_acl* nfs4_acl; } ;
struct nfs4_cached_acl {int dummy; } ;
struct inode {int i_lock; } ;


 struct nfs_inode* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct nfs4_cached_acl*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct inode *VAR_0, struct nfs4_cached_acl *VAR_1)
{
 struct nfs_inode *VAR_2 = FUNC_0(VAR_0);

 FUNC_2(&VAR_0->i_lock);
 FUNC_1(VAR_2->nfs4_acl);
 VAR_2->nfs4_acl = VAR_1;
 FUNC_3(&VAR_0->i_lock);
}
