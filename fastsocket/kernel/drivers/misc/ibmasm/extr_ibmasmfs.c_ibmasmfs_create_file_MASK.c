
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {void* i_private; struct file_operations const* i_fop; } ;
struct file_operations {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*,struct inode*) ;
 struct dentry* FUNC_1 (struct dentry*,char const*) ;
 int FUNC_2 (struct dentry*) ;
 struct inode* FUNC_3 (struct super_block*,int) ;

__attribute__((used)) static struct dentry *FUNC_4 (struct super_block *VAR_1,
   struct dentry *VAR_2,
   const char *VAR_3,
   const struct file_operations *VAR_4,
   void *VAR_5,
   int VAR_6)
{
 struct dentry *VAR_7;
 struct inode *VAR_8;

 VAR_7 = FUNC_1(VAR_2, VAR_3);
 if (!VAR_7)
  return ((void*)0);

 VAR_8 = FUNC_3(VAR_1, VAR_0 | VAR_6);
 if (!VAR_8) {
  FUNC_2(VAR_7);
  return ((void*)0);
 }

 VAR_8->i_fop = VAR_4;
 VAR_8->i_private = VAR_5;

 FUNC_0(VAR_7, VAR_8);
 return VAR_7;
}
