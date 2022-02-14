
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int i_ino; scalar_t__ i_nlink; struct super_block* i_sb; } ;
struct dentry {int d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct inode*,int *,struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct dentry*,struct inode*,int ) ;
 struct inode* FUNC_3 (struct super_block*,int) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,char const*,scalar_t__) ;
 scalar_t__ FUNC_7 (char const*) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_3, struct dentry *VAR_4,
      const char *VAR_5)
{
 struct super_block *VAR_6;
 struct inode *VAR_7;
 int VAR_8;

 VAR_6 = VAR_3->i_sb;
 VAR_7 = FUNC_3(VAR_6, VAR_1 | VAR_2);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_6(VAR_7, VAR_5, FUNC_7(VAR_5) + 1);
 if (VAR_8) {
  VAR_7->i_nlink = 0;
  FUNC_1(VAR_7);
  FUNC_4(VAR_7);
  return VAR_8;
 }

 FUNC_5(VAR_7);
 VAR_8 = FUNC_0(VAR_7->i_ino, VAR_3, &VAR_4->d_name, VAR_7);

 if (!VAR_8) {
  FUNC_2(VAR_4, VAR_7, VAR_7->i_ino);
  FUNC_5(VAR_7);
 }

 return VAR_8;
}
