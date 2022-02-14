
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_inode {int waitqueue; int silly_count; } ;
struct inode {int dummy; } ;


 struct nfs_inode* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct inode *VAR_0)
{
 struct nfs_inode *VAR_1 = FUNC_0(VAR_0);
 if (FUNC_1(&VAR_1->silly_count) == 1)
  FUNC_2(&VAR_1->waitqueue);
}
