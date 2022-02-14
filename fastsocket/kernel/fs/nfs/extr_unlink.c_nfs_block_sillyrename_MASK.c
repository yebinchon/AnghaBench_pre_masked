
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_inode {int silly_count; int waitqueue; } ;
struct dentry {int d_inode; } ;


 struct nfs_inode* FUNC_0 (int ) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int ,int) ;

void FUNC_3(struct dentry *VAR_0)
{
 struct nfs_inode *VAR_1 = FUNC_0(VAR_0->d_inode);

 FUNC_2(VAR_1->waitqueue, FUNC_1(&VAR_1->silly_count, 1, 0) == 1);
}
