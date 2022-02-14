
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int i_fop; int * i_op; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*,struct inode*) ;
 struct dentry* FUNC_1 (struct dentry*,char const*) ;
 int FUNC_2 (struct dentry*) ;
 int VAR_1 ;
 struct inode* FUNC_3 (struct super_block*,int) ;
 int VAR_2 ;

__attribute__((used)) static struct dentry *FUNC_4 (struct super_block *VAR_3,
    struct dentry *VAR_4,
    const char *VAR_5)
{
 struct dentry *VAR_6;
 struct inode *VAR_7;

 VAR_6 = FUNC_1(VAR_4, VAR_5);
 if (!VAR_6)
  return ((void*)0);

 VAR_7 = FUNC_3(VAR_3, VAR_0 | 0500);
 if (!VAR_7) {
  FUNC_2(VAR_6);
  return ((void*)0);
 }

 VAR_7->i_op = &VAR_2;
 VAR_7->i_fop = VAR_1;

 FUNC_0(VAR_6, VAR_7);
 return VAR_6;
}
