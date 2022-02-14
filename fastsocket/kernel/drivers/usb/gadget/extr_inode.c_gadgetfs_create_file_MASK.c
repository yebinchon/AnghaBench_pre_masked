
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_root; } ;
struct inode {int dummy; } ;
struct file_operations {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dentry*,struct inode*) ;
 struct dentry* FUNC_1 (int ,char const*) ;
 int VAR_2 ;
 int FUNC_2 (struct dentry*) ;
 struct inode* FUNC_3 (struct super_block*,void*,struct file_operations const*,int) ;

__attribute__((used)) static struct inode *
FUNC_4 (struct super_block *VAR_3, char const *VAR_4,
  void *VAR_5, const struct file_operations *VAR_6,
  struct dentry **VAR_7)
{
 struct dentry *VAR_8;
 struct inode *VAR_9;

 VAR_8 = FUNC_1(VAR_3->s_root, VAR_4);
 if (!VAR_8)
  return ((void*)0);

 VAR_9 = FUNC_3 (VAR_3, VAR_5, VAR_6,
   VAR_0 | (VAR_2 & VAR_1));
 if (!VAR_9) {
  FUNC_2(VAR_8);
  return ((void*)0);
 }
 FUNC_0 (VAR_8, VAR_9);
 *VAR_7 = VAR_8;
 return VAR_9;
}
