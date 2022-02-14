
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct dentry {int * d_op; int d_fsdata; } ;
struct configfs_dirent {struct dentry* s_dentry; int s_mode; } ;


 scalar_t__ FUNC_0 (struct configfs_dirent*) ;
 int FUNC_1 (struct configfs_dirent*) ;
 int VAR_0 ;
 int FUNC_2 (struct configfs_dirent*) ;
 struct configfs_dirent* FUNC_3 (struct configfs_dirent*,void*,int) ;

int FUNC_4(struct configfs_dirent * VAR_1,
    struct dentry * VAR_2, void * VAR_3,
    umode_t VAR_4, int VAR_5)
{
 struct configfs_dirent * VAR_6;

 VAR_6 = FUNC_3(VAR_1, VAR_3, VAR_5);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_6->s_mode = VAR_4;
 VAR_6->s_dentry = VAR_2;
 if (VAR_2) {
  VAR_2->d_fsdata = FUNC_2(VAR_6);
  VAR_2->d_op = &VAR_0;
 }

 return 0;
}
