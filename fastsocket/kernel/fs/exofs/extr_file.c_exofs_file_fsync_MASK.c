
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {scalar_t__ s_dirt; } ;
struct inode {struct super_block* i_sb; } ;
struct file {struct address_space* f_mapping; } ;
struct dentry {struct inode* d_inode; } ;
struct address_space {int dummy; } ;


 int FUNC_0 (struct super_block*,int) ;
 int FUNC_1 (struct address_space*) ;
 int FUNC_2 (struct inode*,int) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0, struct dentry *VAR_1,
       int VAR_2)
{
 int VAR_3;
 struct address_space *VAR_4 = VAR_0->f_mapping;
 struct inode *VAR_5 = VAR_1->d_inode;
 struct super_block *VAR_6;

 VAR_3 = FUNC_1(VAR_4);
 if (VAR_3)
  return VAR_3;


 VAR_3 = FUNC_2(VAR_5, 1);



 VAR_6 = VAR_5->i_sb;
 if (VAR_6->s_dirt)
  FUNC_0(VAR_6, 1);

 return VAR_3;
}
