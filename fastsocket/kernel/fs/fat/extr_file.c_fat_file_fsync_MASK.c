
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct file {int dummy; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_4__ {TYPE_1__* fat_inode; } ;
struct TYPE_3__ {int i_mapping; } ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (struct file*,struct dentry*,int) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct file *VAR_0, struct dentry *VAR_1, int VAR_2)
{
 struct inode *VAR_3 = VAR_1->d_inode;
 int VAR_4, VAR_5;

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
 VAR_5 = FUNC_2(FUNC_0(VAR_3->i_sb)->fat_inode->i_mapping);

 return VAR_4 ? VAR_4 : VAR_5;
}
