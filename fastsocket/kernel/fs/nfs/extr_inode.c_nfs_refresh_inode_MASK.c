
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_fattr {int valid; } ;
struct inode {int i_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,struct nfs_fattr*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct inode *VAR_1, struct nfs_fattr *VAR_2)
{
 int VAR_3;

 if ((VAR_2->valid & VAR_0) == 0)
  return 0;
 FUNC_1(&VAR_1->i_lock);
 VAR_3 = FUNC_0(VAR_1, VAR_2);
 FUNC_2(&VAR_1->i_lock);

 return VAR_3;
}
