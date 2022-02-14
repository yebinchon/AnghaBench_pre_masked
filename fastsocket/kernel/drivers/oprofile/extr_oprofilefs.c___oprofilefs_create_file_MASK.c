
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {struct file_operations const* i_fop; } ;
struct file_operations {int dummy; } ;
struct dentry {TYPE_1__* d_inode; } ;
struct TYPE_2__ {void* i_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dentry*,struct inode*) ;
 struct dentry* FUNC_1 (struct dentry*,char const*) ;
 int FUNC_2 (struct dentry*) ;
 struct inode* FUNC_3 (struct super_block*,int) ;

__attribute__((used)) static int FUNC_4(struct super_block *VAR_2,
 struct dentry *VAR_3, char const *VAR_4, const struct file_operations *VAR_5,
 int VAR_6, void *VAR_7)
{
 struct dentry *VAR_8;
 struct inode *VAR_9;

 VAR_8 = FUNC_1(VAR_3, VAR_4);
 if (!VAR_8)
  return -VAR_0;
 VAR_9 = FUNC_3(VAR_2, VAR_1 | VAR_6);
 if (!VAR_9) {
  FUNC_2(VAR_8);
  return -VAR_0;
 }
 VAR_9->i_fop = VAR_5;
 FUNC_0(VAR_8, VAR_9);
 VAR_8->d_inode->i_private = VAR_7;
 return 0;
}
