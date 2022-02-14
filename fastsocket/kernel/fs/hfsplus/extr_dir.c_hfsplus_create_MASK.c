
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nameidata {int dummy; } ;
struct inode {int i_ino; scalar_t__ i_nlink; int i_sb; } ;
struct dentry {int d_name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct inode*,int *,struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct dentry*,struct inode*,int ) ;
 struct inode* FUNC_3 (int ,int) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_1, struct dentry *VAR_2, int VAR_3,
     struct nameidata *VAR_4)
{
 struct inode *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(VAR_1->i_sb, VAR_3);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_5->i_ino, VAR_1, &VAR_2->d_name, VAR_5);
 if (VAR_6) {
  VAR_5->i_nlink = 0;
  FUNC_1(VAR_5);
  FUNC_4(VAR_5);
  return VAR_6;
 }
 FUNC_2(VAR_2, VAR_5, VAR_5->i_ino);
 FUNC_5(VAR_5);
 return 0;
}
