
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_count; int i_mtime; int i_ctime; } ;
struct dentry {struct inode* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct dentry*,struct inode*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct inode*) ;

int FUNC_4(struct dentry *VAR_1, struct inode *VAR_2, struct dentry *VAR_3)
{
 struct inode *VAR_4 = VAR_1->d_inode;

 VAR_4->i_ctime = VAR_2->i_ctime = VAR_2->i_mtime = VAR_0;
 FUNC_3(VAR_4);
 FUNC_0(&VAR_4->i_count);
 FUNC_2(VAR_3);
 FUNC_1(VAR_3, VAR_4);
 return 0;
}
