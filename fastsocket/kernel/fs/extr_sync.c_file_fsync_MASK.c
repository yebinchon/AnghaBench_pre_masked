
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_bdev; TYPE_1__* s_op; scalar_t__ s_dirt; } ;
struct inode {struct super_block* i_sb; } ;
struct file {int dummy; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_2__ {int (* write_super ) (struct super_block*) ;} ;


 int FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,int ) ;

int FUNC_3(struct file *VAR_0, struct dentry *VAR_1, int VAR_2)
{
 struct inode * VAR_3 = VAR_1->d_inode;
 struct super_block * VAR_4;
 int VAR_5, VAR_6;


 VAR_5 = FUNC_2(VAR_3, 0);


 VAR_4 = VAR_3->i_sb;
 if (VAR_4->s_dirt && VAR_4->s_op->write_super)
  VAR_4->s_op->write_super(VAR_4);


 VAR_6 = FUNC_1(VAR_4->s_bdev);
 if (!VAR_5)
  VAR_5 = VAR_6;
 return VAR_5;
}
