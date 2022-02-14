
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {TYPE_1__* i_op; } ;
struct dentry {int d_flags; TYPE_2__* d_inode; } ;
struct TYPE_4__ {int i_mutex; } ;
struct TYPE_3__ {int (* unlink ) (struct inode*,struct dentry*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dentry*) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct inode*,struct dentry*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct inode*,struct dentry*) ;
 int FUNC_7 (struct inode*,struct dentry*) ;
 int FUNC_8 (struct inode*) ;

int FUNC_9(struct inode *VAR_3, struct dentry *VAR_4)
{
 int VAR_5 = FUNC_3(VAR_3, VAR_4, 0);

 if (VAR_5)
  return VAR_5;

 if (!VAR_3->i_op->unlink)
  return -VAR_2;

 FUNC_8(VAR_3);

 FUNC_4(&VAR_4->d_inode->i_mutex);
 if (FUNC_1(VAR_4))
  VAR_5 = -VAR_1;
 else {
  VAR_5 = FUNC_6(VAR_3, VAR_4);
  if (!VAR_5)
   VAR_5 = VAR_3->i_op->unlink(VAR_3, VAR_4);
 }
 FUNC_5(&VAR_4->d_inode->i_mutex);


 if (!VAR_5 && !(VAR_4->d_flags & VAR_0)) {
  FUNC_2(VAR_4->d_inode);
  FUNC_0(VAR_4);
 }

 return VAR_5;
}
