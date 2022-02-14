
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_lock; scalar_t__ d_inode; } ;
struct configfs_dirent {struct dentry* s_dentry; } ;


 int FUNC_0 (struct dentry*) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int VAR_0 ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (scalar_t__,struct dentry*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct configfs_dirent * VAR_1, struct dentry * VAR_2)
{
 struct dentry * VAR_3 = VAR_1->s_dentry;

 if (VAR_3) {
  FUNC_4(&VAR_0);
  FUNC_4(&VAR_3->d_lock);
  if (!(FUNC_1(VAR_3) && VAR_3->d_inode)) {
   FUNC_2(VAR_3);
   FUNC_0(VAR_3);
   FUNC_5(&VAR_3->d_lock);
   FUNC_5(&VAR_0);
   FUNC_3(VAR_2->d_inode, VAR_3);
  } else {
   FUNC_5(&VAR_3->d_lock);
   FUNC_5(&VAR_0);
  }
 }
}
