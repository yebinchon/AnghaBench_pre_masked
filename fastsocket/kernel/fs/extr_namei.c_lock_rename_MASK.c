
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dentry {TYPE_2__* d_inode; } ;
struct TYPE_4__ {int i_mutex; TYPE_1__* i_sb; } ;
struct TYPE_3__ {int s_vfs_rename_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (struct dentry*,struct dentry*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

struct dentry *FUNC_3(struct dentry *VAR_2, struct dentry *VAR_3)
{
 struct dentry *VAR_4;

 if (VAR_2 == VAR_3) {
  FUNC_2(&VAR_2->d_inode->i_mutex, VAR_1);
  return ((void*)0);
 }

 FUNC_1(&VAR_2->d_inode->i_sb->s_vfs_rename_mutex);

 VAR_4 = FUNC_0(VAR_3, VAR_2);
 if (VAR_4) {
  FUNC_2(&VAR_3->d_inode->i_mutex, VAR_1);
  FUNC_2(&VAR_2->d_inode->i_mutex, VAR_0);
  return VAR_4;
 }

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (VAR_4) {
  FUNC_2(&VAR_2->d_inode->i_mutex, VAR_1);
  FUNC_2(&VAR_3->d_inode->i_mutex, VAR_0);
  return VAR_4;
 }

 FUNC_2(&VAR_2->d_inode->i_mutex, VAR_1);
 FUNC_2(&VAR_3->d_inode->i_mutex, VAR_0);
 return ((void*)0);
}
