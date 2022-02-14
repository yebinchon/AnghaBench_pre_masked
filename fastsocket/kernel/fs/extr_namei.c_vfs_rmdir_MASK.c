
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {TYPE_2__* i_op; } ;
struct dentry {TYPE_1__* d_inode; } ;
struct TYPE_4__ {int (* rmdir ) (struct inode*,struct dentry*) ;} ;
struct TYPE_3__ {int i_mutex; int i_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dentry*) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct inode*,struct dentry*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct inode*,struct dentry*) ;
 int FUNC_8 (struct inode*,struct dentry*) ;
 int FUNC_9 (struct inode*) ;

int FUNC_10(struct inode *VAR_3, struct dentry *VAR_4)
{
 int VAR_5 = FUNC_4(VAR_3, VAR_4, 1);

 if (VAR_5)
  return VAR_5;

 if (!VAR_3->i_op->rmdir)
  return -VAR_1;

 FUNC_9(VAR_3);

 FUNC_5(&VAR_4->d_inode->i_mutex);
 FUNC_2(VAR_4);
 if (FUNC_1(VAR_4))
  VAR_5 = -VAR_0;
 else {
  VAR_5 = FUNC_7(VAR_3, VAR_4);
  if (!VAR_5) {
   VAR_5 = VAR_3->i_op->rmdir(VAR_3, VAR_4);
   if (!VAR_5)
    VAR_4->d_inode->i_flags |= VAR_2;
  }
 }
 FUNC_6(&VAR_4->d_inode->i_mutex);
 if (!VAR_5) {
  FUNC_0(VAR_4);
 }
 FUNC_3(VAR_4);

 return VAR_5;
}
