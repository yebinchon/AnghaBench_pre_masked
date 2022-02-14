
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int i_ino; scalar_t__ i_nlink; struct super_block* i_sb; } ;
struct dentry {int d_name; } ;
typedef int dev_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct inode*,int *,struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct dentry*,struct inode*,int ) ;
 struct inode* FUNC_3 (struct super_block*,int) ;
 int FUNC_4 (struct inode*,int,int ) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_1, struct dentry *VAR_2,
    int VAR_3, dev_t VAR_4)
{
 struct super_block *VAR_5;
 struct inode *VAR_6;
 int VAR_7;

 VAR_5 = VAR_1->i_sb;
 VAR_6 = FUNC_3(VAR_5, VAR_3);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_6->i_ino, VAR_1, &VAR_2->d_name, VAR_6);
 if (VAR_7) {
  VAR_6->i_nlink = 0;
  FUNC_1(VAR_6);
  FUNC_5(VAR_6);
  return VAR_7;
 }
 FUNC_4(VAR_6, VAR_3, VAR_4);
 FUNC_2(VAR_2, VAR_6, VAR_6->i_ino);
 FUNC_6(VAR_6);

 return 0;
}
