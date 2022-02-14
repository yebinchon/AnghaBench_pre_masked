
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dentry {TYPE_2__* d_inode; } ;
struct TYPE_4__ {int i_mutex; TYPE_1__* i_op; } ;
struct TYPE_3__ {int (* removexattr ) (struct dentry*,char const*) ;} ;


 int VAR_0 ;
 struct dentry* FUNC_0 (struct dentry*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dentry*,char const*) ;

__attribute__((used)) static int FUNC_4(struct dentry *VAR_1, const char *VAR_2)
{
 int VAR_3 = 0;
 struct dentry *VAR_4;

 VAR_4 = FUNC_0(VAR_1);
 if (!VAR_4->d_inode->i_op->removexattr) {
  VAR_3 = -VAR_0;
  goto out;
 }
 FUNC_1(&VAR_4->d_inode->i_mutex);
 VAR_3 = VAR_4->d_inode->i_op->removexattr(VAR_4, VAR_2);
 FUNC_2(&VAR_4->d_inode->i_mutex);
out:
 return VAR_3;
}
