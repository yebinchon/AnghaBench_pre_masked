
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_nlink; int i_ino; } ;
struct dentry {int d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dentry*,struct inode*) ;
 int FUNC_1 (int ,struct inode*,int *,struct inode*) ;
 int FUNC_2 (struct inode*) ;
 struct inode* FUNC_3 (struct inode*,int *,int) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_2, struct dentry *VAR_3, int VAR_4)
{
 struct inode *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(VAR_2, &VAR_3->d_name, VAR_1 | VAR_4);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_5->i_ino, VAR_2, &VAR_3->d_name, VAR_5);
 if (VAR_6) {
  VAR_5->i_nlink = 0;
  FUNC_2(VAR_5);
  FUNC_4(VAR_5);
  return VAR_6;
 }
 FUNC_0(VAR_3, VAR_5);
 FUNC_5(VAR_5);
 return 0;
}
