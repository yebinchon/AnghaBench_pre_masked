
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_size; int i_ctime; int i_ino; } ;
struct dentry {int d_name; struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,struct inode*,int *) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_2, struct dentry *VAR_3)
{
 struct inode *VAR_4;
 int VAR_5;

 VAR_4 = VAR_3->d_inode;
 if (VAR_4->i_size != 2)
  return -VAR_1;
 VAR_5 = FUNC_1(VAR_4->i_ino, VAR_2, &VAR_3->d_name);
 if (VAR_5)
  return VAR_5;
 FUNC_0(VAR_4);
 VAR_4->i_ctime = VAR_0;
 FUNC_2(VAR_4);
 FUNC_3(VAR_4);
 return 0;
}
