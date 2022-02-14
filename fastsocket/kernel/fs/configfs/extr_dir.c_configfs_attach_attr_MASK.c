
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int * d_op; int d_fsdata; } ;
struct configfs_dirent {struct dentry* s_dentry; struct configfs_attribute* s_element; } ;
struct configfs_attribute {int ca_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dentry*,int,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct configfs_dirent*) ;
 int VAR_3 ;
 int FUNC_2 (struct configfs_dirent*) ;
 int FUNC_3 (struct dentry*) ;

__attribute__((used)) static int FUNC_4(struct configfs_dirent * VAR_4, struct dentry * VAR_5)
{
 struct configfs_attribute * VAR_6 = VAR_4->s_element;
 int VAR_7;

 VAR_5->d_fsdata = FUNC_1(VAR_4);
 VAR_4->s_dentry = VAR_5;
 VAR_7 = FUNC_0(VAR_5, (VAR_6->ca_mode & VAR_0) | VAR_1,
    VAR_3);
 if (VAR_7) {
  FUNC_2(VAR_4);
  return VAR_7;
 }

 VAR_5->d_op = &VAR_2;
 FUNC_3(VAR_5);

 return 0;
}
