
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct dentry {TYPE_1__* d_inode; struct configfs_dirent* d_fsdata; } ;
struct configfs_dirent {int dummy; } ;
struct configfs_attribute {int ca_mode; } ;
struct TYPE_2__ {int i_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct configfs_dirent*,int *,void*,int,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct dentry * VAR_3, const struct configfs_attribute * VAR_4, int VAR_5)
{
 struct configfs_dirent * VAR_6 = VAR_3->d_fsdata;
 umode_t VAR_7 = (VAR_4->ca_mode & VAR_1) | VAR_2;
 int VAR_8 = 0;

 FUNC_1(&VAR_3->d_inode->i_mutex, VAR_0);
 VAR_8 = FUNC_0(VAR_6, ((void*)0), (void *) VAR_4, VAR_7, VAR_5);
 FUNC_2(&VAR_3->d_inode->i_mutex);

 return VAR_8;
}
