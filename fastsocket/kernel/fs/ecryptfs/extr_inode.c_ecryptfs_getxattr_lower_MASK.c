
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dentry {TYPE_2__* d_inode; } ;
typedef int ssize_t ;
struct TYPE_4__ {int i_mutex; TYPE_1__* i_op; } ;
struct TYPE_3__ {int (* getxattr ) (struct dentry*,char const*,void*,size_t) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dentry*,char const*,void*,size_t) ;

ssize_t
FUNC_3(struct dentry *VAR_1, const char *VAR_2,
   void *VAR_3, size_t VAR_4)
{
 int VAR_5 = 0;

 if (!VAR_1->d_inode->i_op->getxattr) {
  VAR_5 = -VAR_0;
  goto out;
 }
 FUNC_0(&VAR_1->d_inode->i_mutex);
 VAR_5 = VAR_1->d_inode->i_op->getxattr(VAR_1, VAR_2, VAR_3,
         VAR_4);
 FUNC_1(&VAR_1->d_inode->i_mutex);
out:
 return VAR_5;
}
