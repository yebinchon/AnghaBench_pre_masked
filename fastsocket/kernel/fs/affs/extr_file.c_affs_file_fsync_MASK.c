
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct file {int dummy; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_2__ {int s_bdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,int ) ;

int FUNC_2(struct file *VAR_0, struct dentry *VAR_1, int VAR_2)
{
 struct inode * VAR_3 = VAR_1->d_inode;
 int VAR_4, VAR_5;

 VAR_4 = FUNC_1(VAR_3, 0);
 VAR_5 = FUNC_0(VAR_3->i_sb->s_bdev);
 if (!VAR_4)
  VAR_4 = VAR_5;
 return VAR_4;
}
