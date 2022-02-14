
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {struct configfs_dirent* d_fsdata; } ;
struct configfs_dirent {struct dentry* s_dentry; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct configfs_dirent*) ;
 int FUNC_2 (struct inode*) ;

__attribute__((used)) static void FUNC_3(struct dentry * VAR_0,
       struct inode * VAR_1)
{
 struct configfs_dirent * VAR_2 = VAR_0->d_fsdata;

 if (VAR_2) {
  FUNC_0(VAR_2->s_dentry != VAR_0);
  VAR_2->s_dentry = ((void*)0);
  FUNC_1(VAR_2);
 }
 FUNC_2(VAR_1);
}
