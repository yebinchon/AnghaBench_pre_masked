
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dentry {TYPE_2__* d_inode; } ;
typedef int ssize_t ;
struct TYPE_4__ {int i_mutex; TYPE_1__* i_op; } ;
struct TYPE_3__ {int (* listxattr ) (struct dentry*,char*,size_t) ;} ;


 int VAR_0 ;
 struct dentry* FUNC_0 (struct dentry*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dentry*,char*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_4(struct dentry *VAR_1, char *VAR_2, size_t VAR_3)
{
 int VAR_4 = 0;
 struct dentry *VAR_5;

 VAR_5 = FUNC_0(VAR_1);
 if (!VAR_5->d_inode->i_op->listxattr) {
  VAR_4 = -VAR_0;
  goto out;
 }
 FUNC_1(&VAR_5->d_inode->i_mutex);
 VAR_4 = VAR_5->d_inode->i_op->listxattr(VAR_5, VAR_2, VAR_3);
 FUNC_2(&VAR_5->d_inode->i_mutex);
out:
 return VAR_4;
}
