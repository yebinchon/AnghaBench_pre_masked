
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mtime; int i_ctime; } ;
struct dentry {struct inode* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct inode*) ;

int FUNC_2(struct inode *VAR_1, struct dentry *VAR_2)
{
 struct inode *VAR_3 = VAR_2->d_inode;

 VAR_3->i_ctime = VAR_1->i_ctime = VAR_1->i_mtime = VAR_0;
 FUNC_1(VAR_3);
 FUNC_0(VAR_2);
 return 0;
}
