
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct nfs_inode {unsigned long flags; unsigned long cache_validity; struct inode vfs_inode; int * nfs4_acl; void* acl_default; void* acl_access; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_2 ;

struct inode *FUNC_2(struct super_block *VAR_3)
{
 struct nfs_inode *VAR_4;
 VAR_4 = (struct nfs_inode *)FUNC_1(VAR_2, VAR_1);
 if (!VAR_4)
  return ((void*)0);
 VAR_4->flags = 0UL;
 VAR_4->cache_validity = 0UL;







 return &VAR_4->vfs_inode;
}
