
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_delegation {int lock; int * inode; } ;
struct inode {int dummy; } ;


 struct inode* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct inode *FUNC_3(struct nfs_delegation *VAR_0)
{
 struct inode *VAR_1 = ((void*)0);

 FUNC_1(&VAR_0->lock);
 if (VAR_0->inode != ((void*)0))
  VAR_1 = FUNC_0(VAR_0->inode);
 FUNC_2(&VAR_0->lock);
 return VAR_1;
}
