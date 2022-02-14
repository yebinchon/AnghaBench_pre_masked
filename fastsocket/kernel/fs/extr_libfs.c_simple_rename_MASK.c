
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ctime; int i_mtime; int i_mode; } ;
struct dentry {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct inode*,struct dentry*) ;

int FUNC_5(struct inode *VAR_2, struct dentry *VAR_3,
  struct inode *VAR_4, struct dentry *VAR_5)
{
 struct inode *VAR_6 = VAR_3->d_inode;
 int VAR_7 = FUNC_0(VAR_3->d_inode->i_mode);

 if (!FUNC_3(VAR_5))
  return -VAR_1;

 if (VAR_5->d_inode) {
  FUNC_4(VAR_4, VAR_5);
  if (VAR_7)
   FUNC_1(VAR_2);
 } else if (VAR_7) {
  FUNC_1(VAR_2);
  FUNC_2(VAR_4);
 }

 VAR_2->i_ctime = VAR_2->i_mtime = VAR_4->i_ctime =
  VAR_4->i_mtime = VAR_6->i_ctime = VAR_0;

 return 0;
}
