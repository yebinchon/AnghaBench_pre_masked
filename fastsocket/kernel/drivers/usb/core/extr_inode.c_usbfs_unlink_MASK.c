
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mutex; } ;
struct dentry {struct inode* d_inode; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5 (struct inode *VAR_0, struct dentry *VAR_1)
{
 struct inode *VAR_2 = VAR_1->d_inode;
 FUNC_3(&VAR_2->i_mutex);
 FUNC_2(VAR_1->d_inode);
 FUNC_1(VAR_1);
 FUNC_4(&VAR_2->i_mutex);
 FUNC_0(VAR_1);
 return 0;
}
