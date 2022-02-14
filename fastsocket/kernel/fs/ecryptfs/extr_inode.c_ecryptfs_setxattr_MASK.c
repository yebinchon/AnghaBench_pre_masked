
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dentry {TYPE_2__* d_inode; } ;
struct TYPE_4__ {int i_mutex; TYPE_1__* i_op; } ;
struct TYPE_3__ {int (* setxattr ) (struct dentry*,char const*,void const*,size_t,int) ;} ;


 int VAR_0 ;
 struct dentry* FUNC_0 (struct dentry*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dentry*,char const*,void const*,size_t,int) ;

int
FUNC_4(struct dentry *VAR_1, const char *VAR_2, const void *VAR_3,
    size_t VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 struct dentry *VAR_7;

 VAR_7 = FUNC_0(VAR_1);
 if (!VAR_7->d_inode->i_op->setxattr) {
  VAR_6 = -VAR_0;
  goto out;
 }
 FUNC_1(&VAR_7->d_inode->i_mutex);
 VAR_6 = VAR_7->d_inode->i_op->setxattr(VAR_7, VAR_2, VAR_3,
         VAR_4, VAR_5);
 FUNC_2(&VAR_7->d_inode->i_mutex);
out:
 return VAR_6;
}
