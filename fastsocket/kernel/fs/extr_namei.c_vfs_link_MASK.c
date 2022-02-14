
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {scalar_t__ i_sb; scalar_t__ i_nlink; int i_mutex; TYPE_1__* i_op; int i_mode; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_2__ {int (* link ) (struct dentry*,struct inode*,struct dentry*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct inode*,struct inode*,struct dentry*) ;
 int FUNC_4 (struct inode*,struct dentry*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct dentry*,struct inode*,struct dentry*) ;
 int FUNC_8 (struct dentry*,struct inode*,struct dentry*) ;
 int FUNC_9 (struct inode*) ;

int FUNC_10(struct dentry *VAR_3, struct inode *VAR_4, struct dentry *VAR_5)
{
 struct inode *VAR_6 = VAR_3->d_inode;
 int VAR_7;

 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_4(VAR_4, VAR_5);
 if (VAR_7)
  return VAR_7;

 if (VAR_4->i_sb != VAR_6->i_sb)
  return -VAR_2;




 if (FUNC_0(VAR_6) || FUNC_1(VAR_6))
  return -VAR_1;
 if (!VAR_4->i_op->link)
  return -VAR_1;
 if (FUNC_2(VAR_6->i_mode))
  return -VAR_1;

 VAR_7 = FUNC_7(VAR_3, VAR_4, VAR_5);
 if (VAR_7)
  return VAR_7;

 FUNC_5(&VAR_6->i_mutex);
 FUNC_9(VAR_4);

 if (VAR_6->i_nlink == 0)
  VAR_7 = -VAR_0;
 else
  VAR_7 = VAR_4->i_op->link(VAR_3, VAR_4, VAR_5);
 FUNC_6(&VAR_6->i_mutex);
 if (!VAR_7)
  FUNC_3(VAR_4, VAR_6, VAR_5);
 return VAR_7;
}
