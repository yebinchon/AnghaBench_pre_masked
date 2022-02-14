
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct dentry {struct configfs_dirent* d_fsdata; int * d_op; } ;
struct configfs_symlink {int dummy; } ;
struct configfs_dirent {int s_sibling; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dentry*,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct configfs_dirent*,struct dentry*,struct configfs_symlink*,int,int ) ;
 int FUNC_2 (struct configfs_dirent*) ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct configfs_symlink *VAR_6,
    struct dentry *VAR_7,
    struct dentry *VAR_8)
{
 int VAR_9 = 0;
 umode_t VAR_10 = VAR_1 | VAR_2;

 VAR_9 = FUNC_1(VAR_7->d_fsdata, VAR_8, VAR_6, VAR_10,
       VAR_0);
 if (!VAR_9) {
  VAR_9 = FUNC_0(VAR_8, VAR_10, VAR_5);
  if (!VAR_9)
   VAR_8->d_op = &VAR_3;
  else {
   struct configfs_dirent *VAR_11 = VAR_8->d_fsdata;
   if (VAR_11) {
    FUNC_4(&VAR_4);
    FUNC_3(&VAR_11->s_sibling);
    FUNC_5(&VAR_4);
    FUNC_2(VAR_11);
   }
  }
 }
 return VAR_9;
}
