
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jffs2_sb_info {int dummy; } ;
struct inode {int i_ino; int i_sb; } ;
struct file {int dummy; } ;
struct dentry {struct inode* d_inode; } ;


 struct jffs2_sb_info* FUNC_0 (int ) ;
 int FUNC_1 (struct jffs2_sb_info*,int ) ;

int FUNC_2(struct file *VAR_0, struct dentry *VAR_1, int VAR_2)
{
 struct inode *VAR_3 = VAR_1->d_inode;
 struct jffs2_sb_info *VAR_4 = FUNC_0(VAR_3->i_sb);


 FUNC_1(VAR_4, VAR_3->i_ino);

 return 0;
}
