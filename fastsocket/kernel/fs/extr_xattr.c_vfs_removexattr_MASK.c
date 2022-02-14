
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mutex; TYPE_1__* i_op; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_2__ {int (* removexattr ) (struct dentry*,char const*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dentry*,char const*) ;
 int FUNC_4 (struct dentry*,char const*) ;
 int FUNC_5 (struct inode*,char const*,int ) ;

int
FUNC_6(struct dentry *VAR_2, const char *VAR_3)
{
 struct inode *VAR_4 = VAR_2->d_inode;
 int VAR_5;

 if (!VAR_4->i_op->removexattr)
  return -VAR_0;

 VAR_5 = FUNC_5(VAR_4, VAR_3, VAR_1);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_3(VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;

 FUNC_1(&VAR_4->i_mutex);
 VAR_5 = VAR_4->i_op->removexattr(VAR_2, VAR_3);
 FUNC_2(&VAR_4->i_mutex);

 if (!VAR_5)
  FUNC_0(VAR_2);
 return VAR_5;
}
